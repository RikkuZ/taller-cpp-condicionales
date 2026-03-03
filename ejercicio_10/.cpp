#include <iostream>
using namespace std;

int main() {
    bool esVIP;
    char cupon;
    bool esFinSemana;
    double precio;

    cout << "Precio de compra: ";
    cin >> precio;

    cout << "Es cliente VIP? (1=Si, 0=No): ";
    cin >> esVIP;

    cout << "Codigo de cupon (A/B/N para ninguno): ";
    cin >> cupon;

    cout << "Es fin de semana? (1=Si, 0=No): ";
    cin >> esFinSemana;

    double descuento = 0;

    // Tipo de cliente
    if (esVIP)
        descuento += 0.10;

    // Cupon
    switch (cupon) {
        case 'A':
        case 'a':
            descuento += 0.05;
            break;
        case 'B':
        case 'b':
            descuento += 0.10;
            break;
    }

    // Fin de semana
    if (esFinSemana)
        descuento += 0.05;

    // Tope máximo 50%
    if (descuento > 0.5)
        descuento = 0.5;

    double precioFinal = precio * (1 - descuento);

    cout << "Descuento aplicado: " << descuento * 100 << "%\n";
    cout << "Precio final: " << precioFinal << endl;

    return 0;
}
