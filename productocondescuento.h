#ifndef PRODUCTOCONDESCUENTO_H
#define PRODUCTOCONDESCUENTO_H
#include <string>
#include <iostream>
#include "producto.h"

class ProductoConDescuento : public Producto
{
public:
    ProductoConDescuento(const std::string& nombre, double precio, const std::string& descripcion, double descuento)
        : Producto(nombre, precio, descripcion), descuento(descuento) {}

    double calcularValorTotal() const override{

        return precio * (1- descuento / 100)*cantidad;
    }

    std::string mostrarInformacion()  {
        return Producto::mostrarInformacion() + "\nDescuento: " + std::to_string(descuento) + "%";
    }

private:
    double descuento;
    int cantidad;
};

#endif // PRODUCTOCONDESCUENTO_H
