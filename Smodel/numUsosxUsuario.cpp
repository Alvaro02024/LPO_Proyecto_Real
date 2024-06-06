#include "numeroUsosxUsuario.h"

using namespace Smodel;

numeroUsosxUsuario::numeroUsosxUsuario() {

}
numeroUsosxUsuario::numeroUsosxUsuario(String^ nombreUsuario, int numeroUsos) {
	this->nombreUsuario = nombreUsuario;
	this->numeroUsos = numeroUsos;
}

String^ numeroUsosxUsuario::getNombreUsuario() {
	return this->nombreUsuario;
}
void numeroUsosxUsuario::setNombreUsuario(String^ nombreUsuario) {
	this->nombreUsuario = nombreUsuario;
}
int numeroUsosxUsuario::getNumeroUsos() {
	return this->numeroUsos;
}
void numeroUsosxUsuario::setNumeroUsos(int numeroUsos) {
	this->numeroUsos = numeroUsos;
}