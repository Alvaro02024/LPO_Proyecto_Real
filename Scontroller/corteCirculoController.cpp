#include "corteCirculoController.h"

using namespace Scontroller;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;

corteCirculoController::corteCirculoController() {

}

List<corteCirculo^>^ corteCirculoController::asignarCorteCirculoxFigura(String^ diseñoComp) {
	List<corteCirculo^>^ ListaCorteCirculo = gcnew List<corteCirculo^>();
	array<String^>^ lineas = File::ReadAllLines("corteCirculos.txt");
	String^ separadores = ";";
	for each (String ^ datoP in lineas) {
		array<String^>^ datos = datoP->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ diseño = datos[1];
		int numPaso = codigo % 1000;
		int ejeX = Convert::ToInt32(datos[2]);
		int ejeY = Convert::ToInt32(datos[3]);
		int ejeZ = Convert::ToInt32(datos[4]);
		double radio = Convert::ToDouble(datos[5]);
		double anguloInicial = Convert::ToDouble(datos[6]);
		double anguloFinal = Convert::ToDouble(datos[7]);

		if (diseño == diseñoComp) {
			corteCirculo^ objCL = gcnew corteCirculo(codigo, diseño, numPaso, ejeX, ejeY, ejeZ, radio, anguloInicial, anguloFinal);
			ListaCorteCirculo->Add(objCL);
		}


	}
	return(ListaCorteCirculo);
}