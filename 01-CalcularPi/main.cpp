#include <iostream>
using namespace std;

double calcularpi(int iteraciones) {
    double pi = 0.0;
    int signo = 1;

    for (int i = 0; i < iteraciones; i++) {
        double termino = 1.0 / (2 * i + 1);
        pi += signo * termino;
        signo *= -1;
    }

    return pi * 4;
}

int main() {
    int numiteraciones = 1000000; 
    double resultado = calcularpi(numiteraciones);
    cout.precision(7); 

    cout << "El valor aproximado de Pi es: " << resultado << endl;

    return 0;
}
