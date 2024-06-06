#include "corteCirculo.h"

using namespace Smodel;

corteCirculo::corteCirculo() {

}

corteCirculo::corteCirculo(int codigo, String^ nombreDiseño, int numPaso, int ejeX, int ejeY, int ejeZ, double radio, double anguloInicial, double anguloFinal) {
    this->codigo = codigo;
    this->nombreDiseño = nombreDiseño;
    this->numPaso = numPaso;
    this-> ejeX = ejeX;
    this->ejeY = ejeY;
    this->ejeZ = ejeZ;
    this->radio = radio;
    this->anguloInicial = anguloInicial;
    this->anguloFinal = anguloFinal;
}

int corteCirculo::getCodigo() {
    return this->codigo;
}

void corteCirculo::setCodigo(int codigo) {
    this->codigo = codigo;
}

String^ corteCirculo::getNombreDiseño() {
    return this->nombreDiseño;
}

void corteCirculo::setNombreDiseño(String^ nombreDiseño) {
    this->nombreDiseño = nombreDiseño;
}

int corteCirculo::getNumPaso() {
    return this->numPaso;
}

void corteCirculo::setNumPaso(int numPaso) {
    this->numPaso = numPaso;
}

int corteCirculo::getEjeX() {
    return this->ejeX;
}

void corteCirculo::setEjeX(int ejeX) {
    this->ejeX = ejeX;
}

int corteCirculo::getEjeY() {
    return this->ejeY;
}

void corteCirculo::setEjeY(int ejeY) {
    this->ejeY = ejeY;
}

int corteCirculo::getEjeZ() {
    return this->ejeZ;
}

void corteCirculo::setEjeZ(int ejeZ) {
    this->ejeZ = ejeZ;
}
double corteCirculo::getRadio() {
    return this->radio;
}

void corteCirculo::setRadio(double radio) {
    this->radio = radio;
}

double corteCirculo::getAnguloInicial() {
    return this->anguloInicial;
}

void corteCirculo::setAnguloInicial(double anguloInicial) {
    this->anguloInicial = anguloInicial;
}

double corteCirculo::getAnguloFinal() {
    return this->anguloFinal;
}

void corteCirculo::setAnguloFinal(double anguloFinal) {
    this->anguloFinal = anguloFinal;
}