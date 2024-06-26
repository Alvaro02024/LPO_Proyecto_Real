#include "figuraCorte.h"

using namespace Smodel;

figuraCorte::figuraCorte() {

}

figuraCorte::figuraCorte(int codigo, String^ nombreDiseņo, String^ nombreAutor, String^ fechaCreacion, material^ objMaterial, List<corteLinea^>^ listCorteLinea, List<corteCirculo^>^ listCorteCirculo) {
    this->codigo = codigo;
    this->nombreDiseņo = nombreDiseņo;
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

String^ figuraCorte::getNombreDiseņo() {
    return this->nombreDiseņo;
}

void figuraCorte::setNombreDiseņo(String^ nombreDiseņo) {
    this->nombreDiseņo = nombreDiseņo;
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





