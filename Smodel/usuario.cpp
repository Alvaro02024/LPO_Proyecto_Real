#include "usuario.h"

using namespace Smodel;

usuario::usuario() {

}

usuario::usuario(int codigo, String^ user, String^ contrase�a, String^ tipoLicencia, int diasRestantes, String^ contacto, int numUsos, licencia^ objLicencia) {
    this->codigo = codigo;
    this->user = user;
    this->contrase�a = contrase�a;
    this->tipoLicencia = tipoLicencia;
    this->diasRestantes = diasRestantes;
    this->contacto = contacto;
    this->numUsos = numUsos;
    this->objLicencia = objLicencia;
}

int usuario::getCodigo() {
    return this->codigo;
}

void usuario::setCodigo(int codigo) {
    this->codigo = codigo;
}

String^ usuario::getUser() {
    return this->user;
}

void usuario::setUser(String^ user) {
    this->user = user;
}

String^ usuario::getContrase�a() {
    return this->contrase�a;
}

void usuario::setContrase�a(String^ contrase�a) {
    this->contrase�a = contrase�a;
}

String^ usuario::getTipoLicencia() {
    return this->tipoLicencia;
}

void usuario::setTipoLicencia(String^ tipoLicencia) {
    this->tipoLicencia = tipoLicencia;
}

int usuario::getDiasRestantes() {
    return this->diasRestantes;
}

void usuario::setDiasRestantes(int diasRestantes) {
    this->diasRestantes = diasRestantes;
}

String^ usuario::getContacto() {
    return this->contacto;
}

void usuario::setContacto(String^ contacto) {
    this->contacto = contacto;
}

int usuario::getNumUsos() {
    return this->numUsos;
}

void usuario::setNumUsos(int numUsos) {
    this->numUsos = numUsos;
}

licencia^ usuario::getObjLicencia() {
    return this->objLicencia;
}

void usuario::setObjLicencia(licencia^ objLicencia) {
    this->objLicencia = objLicencia;
}