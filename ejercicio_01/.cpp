#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double temperaturaCelsius;
    
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> temperaturaCelsius;

    double temperaturaFahrenheit = (temperaturaCelsius * 9.0 / 5.0) + 32.0;
    double temperaturaKelvin = temperaturaCelsius + 273.15;
    double temperaturaRankine = temperaturaKelvin * 9.0 / 5.0;

    cout << fixed << setprecision(2);
    cout << "Fahrenheit: " << temperaturaFahrenheit << endl;
    cout << "Kelvin: " << temperaturaKelvin << endl;
    cout << "Rankine: " << temperaturaRankine << endl;

    return 0;
}
