#include "estadoMaquina.h"

using namespace Smodel;

estadoMaquina::estadoMaquina() {

}

estadoMaquina::estadoMaquina(int codigo, int numUsos, String^ estado, List<impresionFC^>^ listImpresionFC) {
    this->codigo = codigo;
    this->numUsos = numUsos;
    this->estado = estado;
    this->listImpresionFC = listImpresionFC;
}

int estadoMaquina::getCodigo() {
    return this->codigo;
}

void estadoMaquina::setCodigo(int codigo) {
    this->codigo = codigo;
}

int estadoMaquina::getNumUsos() {
    return this->numUsos;
}

void estadoMaquina::setNumUsos(int numUsos) {
    this->numUsos = numUsos;
}

String^ estadoMaquina::getEstado() {
    return this->estado;
}

void estadoMaquina::setEstado(String^ estado) {
    this->estado = estado;
}

List<impresionFC^>^ estadoMaquina::getListImpresionFC() {
    return this->listImpresionFC;
}

void estadoMaquina::setListImpresionFC(List<impresionFC^>^ listImpresionFC) {
    this->listImpresionFC = listImpresionFC;
}


