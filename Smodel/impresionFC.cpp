#include "impresionFC.h"

using namespace Smodel;

impresionFC::impresionFC() {

}

impresionFC::impresionFC(int codigo, String^ nombreImpresion, String^ fechaImpresion, String^ autor, String^ tama�oMinMaterial, int codigoFiguraCorte) {
    this->codigo = codigo;
    this->nombreImpresion = nombreImpresion;
    this->fechaImpresion = fechaImpresion;
    this->autor = autor;
    this->tama�oMinMaterial = tama�oMinMaterial;
    this->codigoFiguraCorte = codigoFiguraCorte;
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

String^ impresionFC::getTama�oMinMaterial() {
    return this->tama�oMinMaterial;
}

void impresionFC::setTama�oMinMaterial(String^ tama�oMinMaterial) {
    this->tama�oMinMaterial = tama�oMinMaterial;
}

int impresionFC::getObjFiguraCorte() {
    return this->codigoFiguraCorte;
}
void impresionFC::setObjFiguraCorte(int codigoFiguraCorte) {
    this->codigoFiguraCorte = codigoFiguraCorte;
}