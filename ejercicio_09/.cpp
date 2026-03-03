#include <iostream>
using namespace std;

int main() {
    double peso, altura;

    cout << "Ingrese su peso (kg): ";
    cin >> peso;
    cout << "Ingrese su altura (m): ";
    cin >> altura;

    double imc = peso / (altura * altura);

    cout << "IMC: " << imc << endl;

    if (imc < 18.5)
        cout << "Clasificacion: Bajo peso\n";
    else if (imc < 25)
        cout << "Clasificacion: Normal\n";
    else if (imc < 30)
        cout << "Clasificacion: Sobrepeso\n";
    else if (imc < 35)
        cout << "Clasificacion: Obesidad I\n";
    else
        cout << "Clasificacion: Obesidad II\n";

    return 0;
}
