#include <iostream>
using namespace std;

int main() {
    int cantidad_digitos;
    cout << "Por favor, ingrese la cantidad de dígitos en su boleto: ";
    cin >> cantidad_digitos;

    if (cantidad_digitos % 2 != 0) {
        cout << "El número de dígitos debe ser par. No se puede continuar con la verificación." << endl;
        return 1;
    }

    int boleto[cantidad_digitos];
    int suma_inicial = 0, suma_final = 0;


    cout << "Ingrese los dígitos del boleto, separados por espacios: ";
    for (int i = 0; i < cantidad_digitos; i++) {
        cin >> boleto[i];
        if (i < cantidad_digitos / 2) {
            suma_inicial += boleto[i];
        } else {
            suma_final += boleto[i];
        }
    }


    if (suma_inicial == suma_final) {
        cout << "La suma de la primera mitad (" << suma_inicial << ") coincide con la segunda mitad. Resultado: 1" << endl;
    } else {
        cout << "Las sumas no coinciden. Resultado: 0" << endl;
    }

    return 0;
}
