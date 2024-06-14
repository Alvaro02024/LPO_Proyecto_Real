#include "ImpresionesxFiguraCorte.h"

using namespace Smodel;

ImpresionesxFiguraCorte::ImpresionesxFiguraCorte() {

}
ImpresionesxFiguraCorte::ImpresionesxFiguraCorte(String^ nombreFC, int cantidadImpresiones) {
	this->nombreFC = nombreFC;
	this->cantidadImpresiones = cantidadImpresiones;
}

String^ ImpresionesxFiguraCorte::getNombreFC() {
	return this->nombreFC;
}
void ImpresionesxFiguraCorte::setNombreFC(String^ nombreFC) {
	this->nombreFC = nombreFC;
}
int ImpresionesxFiguraCorte::getCantidadImpresiones() {
	return this->cantidadImpresiones;
}
void ImpresionesxFiguraCorte::setCantidadImpresiones(int cantidadImpresiones) {
	this->cantidadImpresiones = cantidadImpresiones;
}