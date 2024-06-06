#pragma once
#include "figuraCorte.h"

using namespace System;

namespace Smodel {
	public ref class impresionFC {
	private:
		int codigo;
		String^ nombreImpresion;
		String^ fechaImpresion;
		String^ autor;
		String^ tamañoMinMaterial;
		figuraCorte^ objFiguraCorte;
	public:
		impresionFC();
		impresionFC(int codigo, String^ nombreImpresion, String^ fechaImpresion, String^ autor, String^ tamañoMinMaterial, figuraCorte^ objFiguraCorte);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombreImpresion();
		void setNombreImpresion(String^ nombreImpresion);
		String^ getFechaImpresion();
		void setFechaImpresion(String^ fechaImpresion);
		String^ getAutor();
		void setAutor(String^ autor);
		String^ getTamañoMinMaterial();
		void setTamañoMinMaterial(String^ tamañoMinMaterial);
		figuraCorte^ getObjFiguraCorte();
		void setObjFiguraCorte(figuraCorte^ objFiguraCorte);
	};
}