#pragma once


using namespace System;

namespace Smodel {
	public ref class impresionFC {
	private:
		int codigo;
		String^ nombreImpresion;
		String^ fechaImpresion;
		String^ autor;
		String^ tamañoMinMaterial;
		int codigoFiguraCorte;
	public:
		impresionFC();
		impresionFC(int codigo, String^ nombreImpresion, String^ fechaImpresion, String^ autor, String^ tamañoMinMaterial, int codigoFiguraCorte);

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
		int getObjFiguraCorte();
		void setObjFiguraCorte(int codigoFiguraCorte);
	};
}