#include <iostream>
using namespace std;

int main() {
    double saldo = 1000;
    int opcion;
    int transacciones = 0;
    double monto;

    do {
        cout << "\n1. Depositar\n";
        cout << "2. Retirar\n";
        cout << "3. Consultar saldo\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Monto a depositar: ";
                cin >> monto;
                saldo += monto;
                transacciones++;
                break;

            case 2:
                cout << "Monto a retirar: ";
                cin >> monto;
                if (monto <= saldo) {
                    saldo -= monto;
                    transacciones++;
                } else {
                    cout << "Saldo insuficiente.\n";
                }
                break;

            case 3:
                cout << "Saldo actual: " << saldo << endl;
                break;

            case 4:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida.\n";
        }

    } while(opcion != 4);

    cout << "Total transacciones: " << transacciones << endl;

    return 0;
} 
