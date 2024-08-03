#ifndef PRODUCTOCONSTOCK_H
#define PRODUCTOCONSTOCK_H
#include <string>
#include <iostream>
#include "producto.h"


class ProductoConStock : public Producto
{
public:
    ProductoConStock(const std::string& nombre, double precio, const std::string& descripcion, int cantidad)
        : Producto(nombre, precio, descripcion), cantidad(cantidad) {}

    double calcularValorTotal() const override {
        //double precio=Producto::calcularValorTotal();
        return precio * cantidad;
    }

    std::string mostrarInformacion() const override {
        return Producto::mostrarInformacion() + "\nCantidad: " + std::to_string(cantidad);
    }

    int getCantidad() const {
        return cantidad;
    }
private:
    int cantidad;
};

#endif // PRODUCTOCONSTOCK_H
