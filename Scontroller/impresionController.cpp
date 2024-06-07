#include "impresionController.h"
#include "figuraController.h"
#include "corteLineaController.h"
#include "posicionController.h"

using namespace Scontroller;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace Smodel;


impresionController::impresionController() {

}

List<impresionFC^>^ impresionController::TotalImpresiones() {
	List<impresionFC^>^ listaImpresiones = gcnew List<impresionFC^>();
	array<String^>^ lineas = File::ReadAllLines("impresiones.txt");
	String^ separadores = ";";
	figuraController^ FCContro = gcnew figuraController();
	for each (String ^ datoUsu in lineas) {
		array<String^>^ datos = datoUsu->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ nombreImpresion = datos[1];
		String^ fechaImpresion = datos[2];
		String^ nombreAutor = datos[3];
		String^ TamañoMinMaterial = datos[4];
		int codigoFigura = Convert::ToInt32(datos[5]);
			
		impresionFC^ impresion = gcnew impresionFC(codigo, nombreImpresion, fechaImpresion, nombreAutor, TamañoMinMaterial, codigoFigura);
		listaImpresiones->Add(impresion);

	}
	return (listaImpresiones);
}

void impresionController::guardarImpresion(List<impresionFC^>^ objLista) {
	array<String^>^ lineaArchivo = gcnew array<String^>(objLista->Count);
	for (int i = 0; i < objLista->Count; i++) {
		impresionFC^ objImpresion = objLista[i];
		lineaArchivo[i] = Convert::ToString(objLista[i]->getCodigo()) + ";" + objLista[i]->getNombreImpresion() + ";" + objLista[i]->getFechaImpresion() + ";" + objLista[i]->getAutor() + ";" + objLista[i]->getTamañoMinMaterial() + ";" + Convert::ToInt32(objLista[i]->getObjFiguraCorte());
	}
	File::WriteAllLines("impresiones.txt", lineaArchivo);
}

void impresionController::textoImpresion(impresionFC^ obj1) {
	int codigoFigura = obj1->getObjFiguraCorte();
	figuraController^ fcController = gcnew figuraController();
	figuraCorte^ figuraCorte = fcController->buscar1FiguraxCodigo(codigoFigura);
	List<corteLinea^>^ listaCorteLinea = figuraCorte->getListCorteLinea();
	int totalPosiciones = (listaCorteLinea->Count) * 2;
	List<posicion^>^ listaImprimir = gcnew List<posicion^>();
	for (int i = 0; i < listaCorteLinea->Count; i++) {
		List<posicion^>^ listitaPosicion = listaCorteLinea[i]->getListObjPosicion();
		
		for (int j = 0; j < 2; j++) {
			if ((Convert::ToString(listitaPosicion[j]->getCodigo()) == "") || (Convert::ToString(listitaPosicion[j]->getEjeX()) == "") || (Convert::ToString(listitaPosicion[j]->getEjeY()) == "") || (Convert::ToString(listitaPosicion[j]->getEjeZ()) == "")) {
				break;
			}
			int codigo = listitaPosicion[j]->getCodigo();
			double Ejex = listitaPosicion[j]->getEjeX();
			double Ejey = listitaPosicion[j]->getEjeY();
			double Ejez = listitaPosicion[j]->getEjeZ();
			posicion^ obj = gcnew posicion(codigo, Ejex, Ejey, Ejez);
			listaImprimir->Add(obj);

		}
		
	}

	posicionController^ posCOntr = gcnew posicionController();
	//Función que imprime las posiciones en un archivo txt
	posCOntr->escribirImpresionPosicion(listaImprimir);

}

int impresionController::repetido(int codigo) {
	int valido = 1;
	impresionController^ impController = gcnew impresionController();
	List<impresionFC^>^ listaimpresiones = impController->TotalImpresiones();
	for (int i = 0; i < listaimpresiones->Count; i++) {
		if (Convert::ToString(listaimpresiones[i]->getCodigo())=="") {
			break;
		}
		int codigoComparacion = listaimpresiones[i]->getCodigo();
		if (codigoComparacion == codigo) {
			valido = 0;
			break;
		}
	}
	return valido;
}

