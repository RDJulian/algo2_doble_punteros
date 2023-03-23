#include "agenda.h"
#include "libs/parser.h"
#include "libs/excepciones.h"
#include "libs/validaciones.h"
#include <iostream>
#include <fstream>

using namespace std;

void mostrar_menu() {
    cout << "1. Dar de alta un contacto" << endl;
    cout << "2. Mostrar todos los contactos" << endl;
    cout << "3. Mostrar direcciones de memoria de los contactos" << endl;
    cout << "4. Salir" << endl;
}

int main() {
    Agenda* agenda = nullptr; // PENSAR SI ES CORRECTO //
    try {
        procesarArchivo(agenda, RUTA_ARCHIVO);
    } catch (ArchivoNoExistenteException& e) {
        cout << "El archivo no existe. Se creara uno.";
        ofstream archivo(RUTA_ARCHIVO);
        return 0;
    }

    // ACLARACION: El switch y las distintas opciones deberian estar separadas. Se puede dejar el codigo en el main()
    // durante la clase.
    int opcion;
    do {
        mostrar_menu();
        cin >> opcion;
        switch (opcion) {
            case 1: {

                // COMPLETAR //

                break;
            }
            case 2: {

                // COMPLETAR //

                break;
            }
            case 3:

                // COMPLETAR //

                break;
            case 4:
                cout << "Terminando programa." << endl;
                break;
            default:
                cout << "Error." << endl;
        }
    } while (opcion != 4);


    // COMPLETAR //

    // NOTA: Pensar que memoria fue inicializada y liberar correctamente.
}