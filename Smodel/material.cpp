#include "material.h"

using namespace Smodel;

material::material() {

}

material::material(int codigo, String^ nombre, double profundidadMax, double distanciaMax, double velocidadCorte) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->profundidadMax = profundidadMax;
    this->distanciaMax = distanciaMax;
    this->velocidadCorte = velocidadCorte;
}

int material::getCodigo() {
    return this->codigo;
}

void material::setCodigo(int codigo) {
    this->codigo = codigo;
}

String^ material::getNombre() {
    return this->nombre;
}

void material::setNombre(String^ nombre) {
    this->nombre = nombre;
}

double material::getProfundidadMax() {
    return this->profundidadMax;
}

void material::setProfundidadMax(double profundidadMax) {
    this->profundidadMax = profundidadMax;
}

double material::getDistanciaMax() {
    return this->distanciaMax;
}

void material::setDistanciaMax(double distanciaMax) {
    this->distanciaMax = distanciaMax;
}

double material::getVelocidadCorte() {
    return this->velocidadCorte;
}

void material::setVelocidadCorte(double velocidadCorte) {
    this->velocidadCorte = velocidadCorte;
}