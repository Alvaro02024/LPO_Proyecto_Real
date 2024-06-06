#include "licencia.h"

using namespace Smodel;

licencia::licencia() {

}

licencia::licencia(int codigo, String^ tipo, int numUsuarios, String^ fechaCompra, String^ fechaVencimiento) {
	this->codigo = codigo;
	this->tipo = tipo;
	this->numUsuarios = numUsuarios;
	this->fechaCompra = fechaCompra;
	this->fechaVencimiento = fechaVencimiento;
}

int licencia::getCodigo() {
	return this->codigo;
}
void licencia::setCodigo(int codigo) {
	this->codigo = codigo;
}
String^ licencia::getTipo() {
	return this->tipo;
}
void licencia::setTipo(String^ tipo) {
	this->tipo = tipo;
}
int licencia::getNumUsuarios() {
	return this->numUsuarios;
}
void licencia::setNumUsuarios(int numUsuarios) {
	this->numUsuarios = numUsuarios;
}
String^ licencia::getFechaCompra() {
	return this->fechaCompra;
}
void licencia::setFechaCompra(String^ fechaCompra) {
	this->fechaCompra = fechaCompra;
}
String^ licencia::getFechaVencimiento() {
	return this->fechaVencimiento;
}
void licencia::setFechaVencimiento(String^ fechaVenvencimiento) {
	this->fechaVencimiento = fechaVencimiento;
}