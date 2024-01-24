#include <iostream>

int main() {
    int n = 10; // Número de términos de la serie de Fibonacci que queremos calcular
    int firstTerm = 0, secondTerm = 1, nextTerm;

    std::cout << "Los primeros " << n << " numeros de la serie de Fibonacci son:" << std::endl;
	//ciclo for con condicional
    for (int i = 1; i <= n; ++i) {//contador para ir aumentando las cantidades
        std::cout << firstTerm << ", "; // Imprimir el valor actual de firstTerm
        nextTerm = firstTerm + secondTerm; // Calcular el siguiente término de la serie
        firstTerm = secondTerm; // Actualizar firstTerm con el valor de secondTerm
        secondTerm = nextTerm; // Actualizar secondTerm con el valor de nextTerm
    }

    std::cout << std::endl;

    return 0;
}