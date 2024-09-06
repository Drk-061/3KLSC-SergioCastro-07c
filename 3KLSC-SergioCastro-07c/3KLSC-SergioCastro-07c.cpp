#include <iostream>
#include <vector>
#include <string>

int main() {
    const int capacidad = 10;
    std::vector<int> elementos(capacidad);
    int cima = -1;
    std::cout << "Introduce elementos en la pila (termina con -1):\n";
    int x = 0;
    const int CLAVE = -1;

    while (x != CLAVE) {
        std::string entrada;
        std::cin >> entrada;
        try {
            x = std::stoi(entrada); // Convertimos de cadena a entero (string to int)
            if (x == CLAVE) {
                break;
            }
            if (cima < capacidad - 1) {
                cima++;
                elementos[cima] = x;
            }
            else {
                std::cout << "Pila llena\n";
                break;
            }
        }
        catch (const std::invalid_argument&) {
            std::cout << "Entrada no válida\n";
        }
    }

    if (cima >= 0) {
        std::cout << "Elementos de la pila:\n";
        while (cima >= 0) {
            x = elementos[cima];
            cima--;
            std::cout << x << " ";
        }
        std::cout << "\n";
    }
    else {
        std::cout << "Pila vacía\n";
    }

    return 0;
}