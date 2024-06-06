#pragma once
#include "corteCirculo.h"
#include "corteLinea.h"
#include "material.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Smodel {
	public ref class figuraCorte {
	private:
		int codigo;
		String^ nombreDiseño;
		String^ nombreAutor;
		String^ fechaCreacion;
		material^ objMaterial;
		List<corteLinea^>^ listCorteLinea;
		List<corteCirculo^>^ listCorteCirculo;
	public:
		figuraCorte();
		figuraCorte(int codigo, String^ nombreDiseño, String^ nombreAutor, String^ fechaCreacion, material^ objMaterial, List<corteLinea^>^ listCorteLinea, List<corteCirculo^>^ listCorteCirculo);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombreDiseño();
		void setNombreDiseño(String^ nombreDiseño);
		String^ getNombreAutor();
		void setNombreAutor(String^ nombreAutor);
		String^ getFechaCreacion();
		void setFechaCreacion(String^ fechaCreacion);
		material^ getObjMaterial();
		void setObjMaterial(material^ objMaterial);
		List<corteLinea^>^ getListCorteLinea();
		void setListCorteLinea(List<corteLinea^>^ listCorteLinea);
		List<corteCirculo^>^ getListCorteCirculo();
		void setListCorteCirculo(List<corteCirculo^>^ listCorteCirculo);
	};
}


