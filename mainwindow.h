#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "inventario.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_agregarMenu_clicked();

    void on_pushButton_4_clicked();

    void on_btn_eliminarMenu_clicked();

    void on_btn_mostrarMenu_clicked();

    void on_btn_mostrar_clicked();

    void on_btn_eliminar_clicked();

    void on_btn_salir_clicked();

private:
    Ui::MainWindow *ui;
    Inventario inventario;
};
#endif // MAINWINDOW_H
