#include "agenda.h"
#include "libs/vectorAgenda.h"
#include "libs/excepciones.h"

using namespace std;

bool contactoExistente(Agenda* agenda, const size_t& numero) {

    // COMPLETAR //

    return true;
}

void agregarContacto(Agenda* agenda, Contacto* contacto) {
    verificarTamanio(agenda);

    // COMPLETAR //

}

void liberarMemoria(Agenda* agenda) {
    if (agenda->contactos != nullptr) {

        // COMPLETAR //

    }
}