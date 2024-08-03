#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "producto.h"
#include "productocondescuento.h"
#include "productoconstock.h"
#include <QString>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_agregarMenu_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
}
void MainWindow::on_btn_eliminarMenu_clicked()
{
    ui->tabWidget->setCurrentIndex(2);
}
void MainWindow::on_btn_mostrarMenu_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString nombre = ui->lE_nombreP->text();
    double precio = ui->dSpinBox_precio->value();
    QString descripcion = ui->lE_descripcion->text();
    int cantidad = ui->spinBox_cant->value();
    double descuento = ui->doubleSpinBox_descuento->value();

    if (cantidad > 0) {
        inventario.agregarProducto(new ProductoConStock(nombre.toStdString(), precio, descripcion.toStdString(), cantidad));
    } else if (descuento > 0) {
        inventario.agregarProducto(new ProductoConDescuento(nombre.toStdString(), precio, descripcion.toStdString(), descuento));
    } else {
        QMessageBox::warning(this, "Error", "Debes proporcionar cantidad o descuento.");
        return;
    }

    QMessageBox::information(this, "Producto Agregado", "El producto ha sido agregado exitosamente.");
}


void MainWindow::on_btn_mostrar_clicked()
{
    QString inventarioStr = QString::fromStdString(inventario.mostrarInventario());
    ui->tE_mostrar->setPlainText(inventarioStr);

    double valorTotal = inventario.calcularValorInventario();
    ui->tE_calcInventario->setText(QString::number(valorTotal));
}


void MainWindow::on_btn_eliminar_clicked()
{
    QString nombre = ui->lE_nameElim->text();
    inventario.eliminarProducto(nombre.toStdString());
    QMessageBox::information(this, "Producto Eliminado", "El producto ha sido eliminado exitosamente.");
}


void MainWindow::on_btn_salir_clicked()
{
    QApplication::quit();
}




