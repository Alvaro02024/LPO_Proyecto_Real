#include "administrador.h"

using namespace Smodel;

administrador::administrador() {

}

administrador::administrador(int codigo, String^ user, String^ contrase�a, String^ contacto) {
	this->codigo = codigo;
	this->user = user;
	this->contrase�a = contrase�a;
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

String^ administrador::getContrase�a() {
	return this->contrase�a;
}

void administrador::setContrase�a(String^ contrase�a) {
	this->contrase�a = contrase�a;
}

String^ administrador::getContacto() {
	return this->contacto;
}

void administrador::setContacto(String^ contacto) {
	this->contacto = contacto;
}