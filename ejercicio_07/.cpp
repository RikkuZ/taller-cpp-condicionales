#include <iostream>
using namespace std;

int main() {
    int anio;

    cout << "Ingrese un anio: ";
    cin >> anio;

    bool esBisiesto = false;

    if (anio % 4 == 0) {
        if (anio % 100 == 0) {
            if (anio % 400 == 0)
                esBisiesto = true;
        } else {
            esBisiesto = true;
        }
    }

    if (esBisiesto)
        cout << anio << " es bisiesto." << endl;
    else
        cout << anio << " NO es bisiesto." << endl;

    return 0;
}
