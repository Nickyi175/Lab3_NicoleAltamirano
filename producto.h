#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>


class Producto
{
public:
    Producto(const std::string& nombre, double precio, const std::string& descripcion)
        : nombre(nombre), precio(precio), descripcion(descripcion) {

    }

    virtual ~Producto() {}

    virtual double calcularValorTotal() const = 0;
    virtual std::string mostrarInformacion() const {
        return "Producto: " + nombre + "\nPrecio: " + std::to_string(precio) + "\nDescripción: " + descripcion;
    }
    std::string getNombre() const {
        return nombre;
    }
protected:
    std::string nombre;
    double precio;
    std::string descripcion;

};

#endif // PRODUCTO_H
