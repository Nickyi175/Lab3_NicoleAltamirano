#ifndef PRODUCTOCONDESCUENTO_H
#define PRODUCTOCONDESCUENTO_H
#include <string>
#include <iostream>
#include "producto.h"

class ProductoConDescuento : public Producto
{
public:
    ProductoConDescuento(const std::string& nombre, double precio, const std::string& descripcion, double discount)
        : Producto(nombre, precio, descripcion), descuento(discount) {}

    double calcularValorTotal() const override{
        double precio=Producto::calcularValorTotal();
        return precio * (descuento / 100);
    }

    std::string mostrarInformacion()  {
        return Producto::mostrarInformacion() + "\nDescuento: " + std::to_string(descuento) + "%";
    }

private:
    double descuento;
};

#endif // PRODUCTOCONDESCUENTO_H
