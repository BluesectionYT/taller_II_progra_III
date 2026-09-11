#include <iostream>
#include <string>
#include "structures/Stack.hpp"

int main() {
    structures::Stack<std::string> stackBooks;

    std::cout << "--- PRUEBA DE PILA DE LIBROS LEIDOS ---" << std::endl << std::endl;

    //Probar isEmpty()
    std::cout << "¿La pila esta vacia? " << (stackBooks.isEmpty() ? "Si" : "No") << std::endl << std::endl;

    //Probar push() y peek()
    std::cout << "--- Agregando libros a la pila ---" << std::endl;
    
    stackBooks.push("Don Quijote de la Mancha");
    std::cout << "Agregado: " << stackBooks.peek() << std::endl;

    stackBooks.push("Cien anos de soledad");
    std::cout << "Agregado: " << stackBooks.peek() << std::endl;

    stackBooks.push("El Principito");
    std::cout << "Agregado: " << stackBooks.peek() << std::endl;

    stackBooks.push("1984");
    std::cout << "Agregado: " << stackBooks.peek() << std::endl << std::endl;

    if (!stackBooks.isEmpty()) {
        std::cout << "Ultimo libro leido (Peek): " << stackBooks.peek() << std::endl << std::endl;
    }

    //Probar pop()
    std::cout << "--- Desapilando libros ---" << std::endl;
    while (!stackBooks.isEmpty()) {
        std::cout << "Removiendo: " << stackBooks.pop() << std::endl;
        
        if (!stackBooks.isEmpty()) {
            std::cout << "  - Nuevo libro en el tope: " << stackBooks.peek() << std::endl;
        } else {
            std::cout << "  - La pila ha quedado vacia." << std::endl;
        }
    }

    return 0;
}