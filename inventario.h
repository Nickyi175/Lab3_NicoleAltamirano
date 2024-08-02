#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <vector>
#include "producto.h"
#include "productoconstock.h"
#include <QDebug>


class Inventario
{
public:
    ~Inventario() {
        for (Producto* producto : productos) {
            delete producto;
        }
    }

    void agregarProducto(Producto* producto) {
        productos.push_back(producto);
    }

    void eliminarProducto(const std::string& nombre) {
        for (auto it = productos.begin(); it != productos.end(); ++it) {
            if ((*it)->getNombre() == nombre) {
                delete *it;
                productos.erase(it);
                break;
            }
        }
    }

    std::string mostrarInventario() const {
        std::string inventario;
        for (const Producto* producto : productos) {
            inventario += producto->mostrarInformacion() + "\n\n";
        }
        return inventario;
    }

     // double calcularValorInventario() const {
     //     double total = 0;
     //     for (const Producto* producto : productos) {
     //         total += producto->calcularValorTotal();
     //     }
     //     return total;
     // }

    double calcularValorInventario() const {
        double total = 0;
        for (const Producto* producto : productos) {
            // Verificar si el producto es de tipo ProductoConStock
            const ProductoConStock* stock = dynamic_cast<const ProductoConStock*>(producto);
            if (stock) {
                // Llama al método calcularValorTotal() de ProductoConStock
                double valorUnitario = stock->calcularValorTotal();
                total += valorUnitario; // Sumar al total
            } else {
                // Si no es de tipo ProductoConStock, simplemente llama a calcularValorTotal()
                double valorUnitario = producto->calcularValorTotal();
                total += valorUnitario; // Sumar al total
            }
        }
        return total; // Devolver el valor total del inventario
    }
private:
    std::vector<Producto*> productos;
};

#endif // INVENTARIO_H
