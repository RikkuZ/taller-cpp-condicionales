#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    char operador;

    cout << "Ingrese numero 1: ";
    cin >> num1;

    cout << "Ingrese operador (+ - * / %): ";
    cin >> operador;

    cout << "Ingrese numero 2: ";
    cin >> num2;

    switch (operador) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 == 0)
                cout << "Error: Division por cero.\n";
            else
                cout << "Resultado: " << num1 / num2 << endl;
            break;

        case '%':
            if (num2 == 0)
                cout << "Error: Division por cero.\n";
            else
                cout << "Resultado: " << fmod(num1, num2) << endl;
            break;

        default:
            cout << "Operador invalido.\n";
    }

    return 0;
}
