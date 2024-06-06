#pragma once

namespace Scontroller {
	
	using namespace System;
	using namespace Smodel;
	using namespace System::Collections::Generic;
	
	public ref class figuraController {
	public:
		figuraController();
		List<figuraCorte^>^ buscarFiguraxCodigo(int codigo);
		figuraCorte^ buscar1FiguraxCodigo(int codigo);
		void actualizarFigura(int a_codigo, String^ a_diseño, String^ a_autor, String^ a_fechCreacion, String^ a_material);
		List<figuraCorte^>^ buscarFiguraxALL();
		void escribirArchivo(List<figuraCorte^>^ lista_escribir);
		void eliminarFigura(int codigo);
		void agregarNuevaFiguraCorte(int b_codigo, String^ b_diseño, String^ b_autor, String^ b_fecha, material^ b_mat, List<corteLinea^>^ cl, List<corteCirculo^>^ cc);
		double distanciaTotal(figuraCorte^ listImprimir);
	};
}