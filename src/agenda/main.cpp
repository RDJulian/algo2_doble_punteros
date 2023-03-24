#include "agenda.h"
#include "libs/parser.h"
#include "libs/excepciones.h"
#include "libs/validaciones.h"
#include "menu.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    Agenda* agenda = nullptr; // VER SI ES CORRECTO //
    try {
        procesarArchivo(agenda, RUTA_ARCHIVO);
    } catch (ArchivoNoExistenteException& e) {
        cout << "El archivo no existe. Se creara uno. Ejecute nuevamente el programa." << endl;
        ofstream archivo(RUTA_ARCHIVO);
        return ERROR_ARCHIVO;
    }

    int opcion;
    do {
        mostrar_menu();
        cin >> opcion;
        procesarOpcion(agenda, opcion);
    } while (opcion != SALIR);

    // COMPLETAR //
    // NOTA: Ver que memoria se debe liberar y en que orden.
    return 0;
}