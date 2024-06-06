#include "posicion.h"

using namespace Smodel;

posicion::posicion() {

}

posicion::posicion(int codigo, double ejeX, double ejeY, double ejeZ) {
    this->codigo = codigo;
    this->ejeX = ejeX;
    this->ejeY = ejeY;
    this->ejeZ = ejeZ;
}

int posicion::getCodigo() {
    return this->codigo;
}

void posicion::setCodigo(int codigo) {
    this->codigo = codigo;
}

double posicion::getEjeX() {
    return this->ejeX;
}

void posicion::setEjeX(double ejeX) {
    this->ejeX = ejeX;
}

double posicion::getEjeY() {
    return this->ejeY;
}

void posicion::setEjeY(double ejeY) {
    this->ejeY = ejeY;
}

double posicion::getEjeZ() {
    return this->ejeZ;
}

void posicion::setEjeZ(double ejeZ) {
    this->ejeZ = ejeZ;
}