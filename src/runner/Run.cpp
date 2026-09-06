#include <iostream>
#include "structures/Stack.hpp"

int main() {
    
    structures::Stack<int> pila;
    pila.push(10);
    pila.push(20);
    pila.push(30);

    std::cout << pila.pop() << std::endl;   // debería imprimir 30
    std::cout << pila.pop() << std::endl;   // debería imprimir 20
    std::cout << pila.pop() << std::endl;   // debería imprimir 10

    return 0;
}