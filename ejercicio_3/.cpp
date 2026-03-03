#include <iostream>

using namespace std;

int main() {
    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    int permisos;

    cout << "Ingrese un numero de permisos (0-7): ";
    cin >> permisos;

    if (permisos & LEER)
        cout << "Tiene permiso de LEER\n";

    if (permisos & ESCRIBIR)
        cout << "Tiene permiso de ESCRIBIR\n";

    if (permisos & EJECUTAR)
        cout << "Tiene permiso de EJECUTAR\n";

    if (!(permisos & LEER) &&
        !(permisos & ESCRIBIR) &&
        !(permisos & EJECUTAR))
        cout << "No tiene permisos.\n";

    return 0;
}
