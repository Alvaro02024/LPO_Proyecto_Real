#include "corteLinea.h"
#include "posicion.h"

using namespace Smodel;
using namespace System::Collections::Generic;

corteLinea::corteLinea() {

}

corteLinea::corteLinea(int codigo, String^ nombreDiseņo, int numPaso, double distancia, List<posicion^>^ listPosicion) {
    this->codigo = codigo;
    this->nombreDiseņo = nombreDiseņo;
    this->numPaso = numPaso;
    this->distancia = distancia;
    this->listPosicion = listPosicion;
}

int corteLinea::getCodigo() {
    return this->codigo;
}

void corteLinea::setCodigo(int codigo) {
    this->codigo = codigo;
}

String^ corteLinea::getNombreDiseņo() {
    return this->nombreDiseņo;
}

void corteLinea::setNombreDiseņo(String^ nombreDiseņo) {
    this->nombreDiseņo = nombreDiseņo;
}

int corteLinea::getNumPaso() {
    return this->numPaso;
}

void corteLinea::setNumPaso(int numPaso) {
    this->numPaso = numPaso;
}

double corteLinea::getDistancia() {
    return this->distancia;
}

void corteLinea::setDistancia(double distancia) {
    this->distancia = distancia;
}

List<posicion^>^ corteLinea::getListObjPosicion() {
    return this->listPosicion;
}

void corteLinea::setListObjPosicion(List<posicion^>^ listPosicion) {
    this->listPosicion = listPosicion;
}