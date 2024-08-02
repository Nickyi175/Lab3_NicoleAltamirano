#ifndef PRODUCTOCONSTOCK_H
#define PRODUCTOCONSTOCK_H
#include <string>
#include <iostream>
#include "producto.h"
#include "productocondescuento.h"

class ProductoConStock : public Producto
{
public:
    ProductoConStock(const std::string& nombre, double precio, const std::string& descripcion, int cantidad)
        : Producto(nombre, precio, descripcion), cantidad(cantidad) {}

    // double calcularValorTotal() const override {
    //     double precio=ProductoConStock::calcularValorTotal();
    //     return precio * cantidad;
    // }

    double calcularValorTotal() const override {
        // Crear un objeto de ProductoConDescuento para calcular el precio con descuento
        ProductoConDescuento productoDescuento(nombre, precio, descripcion, 0); // 0 porque aquí no estamos aplicando descuento
        double precioConDescuento = productoDescuento.calcularValorTotal(); // Llama al método de descuento
        return precioConDescuento * cantidad; // Multiplica por la cantidad
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
