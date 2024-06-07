#pragma once
#include "figuraController.h"

using namespace Smodel;
using namespace System;
using namespace System::Collections::Generic;

namespace Scontroller {
	public ref class posicionController {
	public:
		posicionController();
		List<posicion^>^ asignarListaPosicionFigura(int codigo_figura);
		List<posicion^>^ asignarListaPosicionFiguraFILTRO(List<posicion^>^ listaFILTRAR, int iterador);
		List<posicion^>^ buscarPosiciones();
		List<posicion^>^ buscarPosicionxCodigo(int codigo);
		posicion^ buscar1PosicionxCodigo(int codigo);
		void actualizarPosicion(int codigo, int x, int y, int z);
		void escribirPosicion(List<posicion^>^ listaposiciones);
		void escribirImpresionPosicion(List<posicion^>^ listaposiciones);
		void eliminarPosicion(int codigo);
		void agregarPosicion(int codigo, int x, int y, int z);
		
	};
}