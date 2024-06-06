#include "impresionFC.h"

using namespace Smodel;

impresionFC::impresionFC() {

}

impresionFC::impresionFC(int codigo, String^ nombreImpresion, String^ fechaImpresion, String^ autor, String^ tamañoMinMaterial) {
    this->codigo = codigo;
    this->nombreImpresion = nombreImpresion;
    this->fechaImpresion = fechaImpresion;
    this->autor = autor;
    this->tamañoMinMaterial = tamañoMinMaterial;
}

int impresionFC::getCodigo() {
    return this->codigo;
}

void impresionFC::setCodigo(int codigo) {
    this->codigo = codigo;
}

String^ impresionFC::getNombreImpresion() {
    return this->nombreImpresion;
}

void impresionFC::setNombreImpresion(String^ nombreImpresion) {
    this->nombreImpresion = nombreImpresion;
}

String^ impresionFC::getFechaImpresion() {
    return this->fechaImpresion;
}

void impresionFC::setFechaImpresion(String^ fechaImpresion) {
    this->fechaImpresion = fechaImpresion;
}

String^ impresionFC::getAutor() {
    return this->autor;
}

void impresionFC::setAutor(String^ autor) {
    this->autor = autor;
}

String^ impresionFC::getTamañoMinMaterial() {
    return this->tamañoMinMaterial;
}

void impresionFC::setTamañoMinMaterial(String^ tamañoMinMaterial) {
    this->tamañoMinMaterial = tamañoMinMaterial;
}