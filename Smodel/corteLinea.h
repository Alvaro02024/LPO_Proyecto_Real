#pragma once
#include "posicion.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Smodel {
	public ref class corteLinea {
	private:
		int codigo;
		String^ nombreDiseņo;
		int numPaso;
		double distancia;
		List<posicion^>^ listPosicion;
	public:
		corteLinea();
		corteLinea(int codigo, String^ nombreDiseņo, int numPaso, double distancia, List<posicion^>^ listPosicion);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombreDiseņo();
		void setNombreDiseņo(String^ nombreDiseņo);
		int getNumPaso();
		void setNumPaso(int numPaso);
		double getDistancia();
		void setDistancia(double distancia);
		List<posicion^>^ getListObjPosicion();
		void setListObjPosicion(List<posicion^>^ ListObjPosicion);

	};
}