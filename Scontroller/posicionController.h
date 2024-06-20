#pragma once
#include "figuraController.h"

using namespace Smodel;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient; //ESPACIO DE NOMBRES PARA TRABAJAR CON LA BD

namespace Scontroller {
	public ref class posicionController {
	private:
		SqlConnection^ objConexion; //Atributo de conexión de base de datos
	public:
		posicionController();
		void abrirConexion();
		void cerrarConexion();

		List<posicion^>^ asignarListaPosicionFigura(int codigo_figura);
		List<posicion^>^ asignarListaPosicionFiguraFILTRO(List<posicion^>^ listaFILTRAR, int iterador);
		List<posicion^>^ buscarPosiciones();
		List<posicion^>^ BD_buscarPosiciones();
		List<posicion^>^ buscarPosicionxCodigo(int codigo);
		List<posicion^>^ BD_buscarPosicionxCodigo(int codigo);
		posicion^ buscar1PosicionxCodigo(int codigo);
		void actualizarPosicion(int codigo, int x, int y, int z);
		void BD_actualizarPosicion(int codigo, int x, int y, int z);
		void escribirPosicion(List<posicion^>^ listaposiciones);
		void escribirImpresionPosicion(List<posicion^>^ listaposiciones);
		void eliminarPosicion(int codigo);
		void BD_eliminarPosicion(int codigo);
		void agregarPosicion(int codigo, int x, int y, int z);
		void BD_agregarPosicion(int codigo, int x, int y, int z);
		int CodigoRepetido(int codigo);
		int BD_CodigoRepetido(int codigo);
		
	};
}