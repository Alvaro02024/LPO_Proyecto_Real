#include "administrador.h"

using namespace Smodel;

administrador::administrador() {

}

administrador::administrador(int codigo, String^ user, String^ contraseña, String^ contacto) {
	this->codigo = codigo;
	this->user = user;
	this->contraseña = contraseña;
	this->contacto = contacto;
}

int administrador::getCodigo() {
	return this->codigo;
}

void administrador::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ administrador::getUser() {
	return this->user;
}

void administrador::setUser(String^ user) {
	this->user = user;
}

String^ administrador::getContraseña() {
	return this->contraseña;
}

void administrador::setContraseña(String^ contraseña) {
	this->contraseña = contraseña;
}

String^ administrador::getContacto() {
	return this->contacto;
}

void administrador::setContacto(String^ contacto) {
	this->contacto = contacto;
}