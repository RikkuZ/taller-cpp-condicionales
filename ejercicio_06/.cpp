#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;

    cout << "Valores iniciales:\n";
    cout << "x = " << x << ", y = " << y << endl;

    // Metodo 1: Operaciones aritmeticas
    x = x + y;
    y = x - y;
    x = x - y;

    cout << "\nSwap con operaciones aritmeticas:\n";
    cout << "x = " << x << ", y = " << y << endl;

    // Reiniciar valores
    x = 10;
    y = 5;

    // Metodo 2: XOR
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout << "\nSwap con XOR:\n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
