#include "figuraCortexUSo.h"

using namespace Smodel;

figuraCortexUSo::figuraCortexUSo() {

}
figuraCortexUSo::figuraCortexUSo(String^ NombreFiguraCorte, int Uso) {
	this->NombreFiguraCorte = NombreFiguraCorte;
	this->Uso = Uso;
}

String^ figuraCortexUSo::getNombreFiguraCorte() {
	return this->NombreFiguraCorte;
}
void figuraCortexUSo::setNombreFiguraCorte(String^ NombreFiguraCorte) {
	this->NombreFiguraCorte = NombreFiguraCorte;
}
int figuraCortexUSo::getUso() {
	return this->Uso;
}
void figuraCortexUSo::setUso(int Uso) {
	this->Uso = Uso;
}