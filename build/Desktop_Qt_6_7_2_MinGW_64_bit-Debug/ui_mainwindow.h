/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *btn_agregarMenu;
    QPushButton *btn_eliminarMenu;
    QPushButton *btn_mostrarMenu;
    QLabel *label;
    QPushButton *btn_salir;
    QWidget *tab_2;
    QLabel *label_2;
    QLineEdit *lE_nombreP;
    QLineEdit *lE_descripcion;
    QLabel *label_3;
    QDoubleSpinBox *dSpinBox_precio;
    QDoubleSpinBox *doubleSpinBox_descuento;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spinBox_cant;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QWidget *tab_3;
    QLineEdit *lE_nameElim;
    QPushButton *btn_eliminar;
    QLabel *label_8;
    QLabel *label_11;
    QWidget *tab_4;
    QTextEdit *tE_mostrar;
    QTextEdit *tE_calcInventario;
    QPushButton *btn_mostrar;
    QLabel *label_9;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 20, 751, 521));
        tab = new QWidget();
        tab->setObjectName("tab");
        btn_agregarMenu = new QPushButton(tab);
        btn_agregarMenu->setObjectName("btn_agregarMenu");
        btn_agregarMenu->setGeometry(QRect(300, 150, 131, 51));
        btn_eliminarMenu = new QPushButton(tab);
        btn_eliminarMenu->setObjectName("btn_eliminarMenu");
        btn_eliminarMenu->setGeometry(QRect(300, 220, 131, 51));
        btn_mostrarMenu = new QPushButton(tab);
        btn_mostrarMenu->setObjectName("btn_mostrarMenu");
        btn_mostrarMenu->setGeometry(QRect(300, 290, 131, 51));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 60, 261, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        font.setPointSize(36);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btn_salir = new QPushButton(tab);
        btn_salir->setObjectName("btn_salir");
        btn_salir->setGeometry(QRect(300, 360, 131, 51));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 90, 241, 41));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        lE_nombreP = new QLineEdit(tab_2);
        lE_nombreP->setObjectName("lE_nombreP");
        lE_nombreP->setGeometry(QRect(70, 140, 351, 41));
        lE_descripcion = new QLineEdit(tab_2);
        lE_descripcion->setObjectName("lE_descripcion");
        lE_descripcion->setGeometry(QRect(490, 140, 231, 221));
        lE_descripcion->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(490, 90, 211, 41));
        label_3->setFont(font1);
        dSpinBox_precio = new QDoubleSpinBox(tab_2);
        dSpinBox_precio->setObjectName("dSpinBox_precio");
        dSpinBox_precio->setGeometry(QRect(260, 200, 161, 41));
        doubleSpinBox_descuento = new QDoubleSpinBox(tab_2);
        doubleSpinBox_descuento->setObjectName("doubleSpinBox_descuento");
        doubleSpinBox_descuento->setGeometry(QRect(260, 260, 161, 41));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 200, 171, 41));
        label_4->setFont(font1);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 260, 211, 41));
        label_5->setFont(font1);
        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(70, 320, 121, 41));
        label_6->setFont(font1);
        spinBox_cant = new QSpinBox(tab_2);
        spinBox_cant->setObjectName("spinBox_cant");
        spinBox_cant->setGeometry(QRect(260, 320, 161, 41));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 390, 161, 61));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(230, 10, 321, 51));
        QFont font2;
        font2.setPointSize(20);
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        lE_nameElim = new QLineEdit(tab_3);
        lE_nameElim->setObjectName("lE_nameElim");
        lE_nameElim->setGeometry(QRect(180, 210, 401, 51));
        btn_eliminar = new QPushButton(tab_3);
        btn_eliminar->setObjectName("btn_eliminar");
        btn_eliminar->setGeometry(QRect(300, 280, 171, 51));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(220, 50, 321, 51));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(170, 130, 451, 41));
        label_11->setFont(font1);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tE_mostrar = new QTextEdit(tab_4);
        tE_mostrar->setObjectName("tE_mostrar");
        tE_mostrar->setGeometry(QRect(130, 80, 481, 221));
        tE_mostrar->setReadOnly(true);
        tE_calcInventario = new QTextEdit(tab_4);
        tE_calcInventario->setObjectName("tE_calcInventario");
        tE_calcInventario->setGeometry(QRect(130, 370, 481, 41));
        btn_mostrar = new QPushButton(tab_4);
        btn_mostrar->setObjectName("btn_mostrar");
        btn_mostrar->setGeometry(QRect(340, 430, 83, 29));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(220, 20, 321, 51));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(tab_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(130, 320, 171, 41));
        label_10->setFont(font1);
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_agregarMenu->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        btn_eliminarMenu->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        btn_mostrarMenu->setText(QCoreApplication::translate("MainWindow", "Mostrar Producto", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
        btn_salir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Menu", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre del Producto:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Descripci\303\263n:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Precio unitario:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Descuento unitario:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Cantidad:", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Agregar Producto", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Agregar", nullptr));
        btn_eliminar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Eliminar Producto", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Ingrese el nombre del producto que desea eliminar:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        btn_mostrar->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Mostrar Inventario", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Total Inventario", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
