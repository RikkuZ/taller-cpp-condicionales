#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double lado1, lado2, lado3;

    cout << "Ingrese los tres lados: ";
    cin >> lado1 >> lado2 >> lado3;

    // Verificar si es triángulo válido
    if (lado1 + lado2 > lado3 &&
        lado1 + lado3 > lado2 &&
        lado2 + lado3 > lado1) {

        cout << "Es un triangulo valido.\n";

        // Clasificación por lados
        if (lado1 == lado2 && lado2 == lado3)
            cout << "Equilatero\n";
        else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
            cout << "Isosceles\n";
        else
            cout << "Escaleno\n";

        // Clasificación por ángulos Teorema de Pitágoras
        double a2 = pow(lado1, 2);
        double b2 = pow(lado2, 2);
        double c2 = pow(lado3, 2);

        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2)
            cout << "Rectangulo\n";
        else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2)
            cout << "Acutangulo\n";
        else
            cout << "Obtusangulo\n";

    } else {
        cout << "No forman un triangulo valido.\n";
    }

    return 0;
}
