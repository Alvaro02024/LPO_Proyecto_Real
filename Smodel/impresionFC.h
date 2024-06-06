#pragma once

using namespace System;

namespace Smodel {
	public ref class impresionFC {
	private:
		int codigo;
		String^ nombreImpresion;
		String^ fechaImpresion;
		String^ autor;
		String^ tama�oMinMaterial;
	public:
		impresionFC();
		impresionFC(int codigo, String^ nombreImpresion, String^ fechaImpresion, String^ autor, String^ tama�oMinMaterial);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombreImpresion();
		void setNombreImpresion(String^ nombreImpresion);
		String^ getFechaImpresion();
		void setFechaImpresion(String^ fechaImpresion);
		String^ getAutor();
		void setAutor(String^ autor);
		String^ getTama�oMinMaterial();
		void setTama�oMinMaterial(String^ tama�oMinMaterial);
	};
}