#include "figuraCorte.h"

using namespace Smodel;

figuraCorte::figuraCorte() {

}

figuraCorte::figuraCorte(int codigo, String^ nombreDise�o, String^ nombreAutor, String^ fechaCreacion, material^ objMaterial, List<corteLinea^>^ listCorteLinea, List<corteCirculo^>^ listCorteCirculo) {
    this->codigo = codigo;
    this->nombreDise�o = nombreDise�o;
    this->nombreAutor = nombreAutor;
    this->fechaCreacion = fechaCreacion;
    this->objMaterial = objMaterial;
    this->listCorteLinea = listCorteLinea;
    this->listCorteCirculo = listCorteCirculo;
}

int figuraCorte::getCodigo() {
    return this->codigo;
}

void figuraCorte::setCodigo(int codigo) {
    this->codigo = codigo;
}

String^ figuraCorte::getNombreDise�o() {
    return this->nombreDise�o;
}

void figuraCorte::setNombreDise�o(String^ nombreDise�o) {
    this->nombreDise�o = nombreDise�o;
}

String^ figuraCorte::getNombreAutor() {
    return this->nombreAutor;
}

void figuraCorte::setNombreAutor(String^ nombreAutor) {
    this->nombreAutor = nombreAutor;
}

String^ figuraCorte::getFechaCreacion() {
    return this->fechaCreacion;
}

void figuraCorte::setFechaCreacion(String^ fechaCreacion) {
    this->fechaCreacion = fechaCreacion;
}

material^ figuraCorte::getObjMaterial() {
    return this->objMaterial;
}

void figuraCorte::setObjMaterial(material^ objMaterial) {
    this->objMaterial = objMaterial;
}

List<corteLinea^>^ figuraCorte::getListCorteLinea() {
    return this->listCorteLinea;
}

void figuraCorte::setListCorteLinea(List<corteLinea^>^ listCorteLinea) {
    this->listCorteLinea = listCorteLinea;
}

List<corteCirculo^>^ figuraCorte::getListCorteCirculo() {
    return this->listCorteCirculo;
}

void figuraCorte::setListCorteCirculo(List<corteCirculo^>^ listCorteCirculo) {
    this->listCorteCirculo = listCorteCirculo;
}





