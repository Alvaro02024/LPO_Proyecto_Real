#include "corteLineaController.h"
#include "posicionController.h"
#include "math.h"

using namespace Scontroller;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;



corteLineaController::corteLineaController() {

}

List<String^>^ corteLineaController::DatosCreacionObjetosLC() {
	List<String^>^ list = gcnew List<String^>();
	list->Clear();
	array<String^>^ lineas = File::ReadAllLines("corteLinea.txt");
	String^ separadores = ";";
	for each (String ^ datoP in lineas) {
		array<String^>^ datos = datoP->Split(separadores->ToCharArray());
		list->Add(datos[0]);
		list->Add(datos[1]);
	}
	return(list);
}

List<corteLinea^>^ corteLineaController::asignarCorteLineaxFigura(List<String^>^ datos, int iterador) {
	List<corteLinea^>^ ListaCorteLinea = gcnew List<corteLinea^>();
	
	//�ndices en pares para codigo(lc1) y nombre del dise�o (lc2)
	//Iterador hace referencia al n�mero de figura de corte a asociar asumiendo que se encuentran en orden con respecto
	//a ambos archivos -> en lineacorte la primera fila de data hace referencia a la lista de lineas de corte a 
	//asociarse a la primera figura de corte
	int lc1 = 2 * iterador;
	int lc2 = lc1 + 1;

	//C�digo con el que buscar la lista total de posiciones asociadas 
	int codigoLCConstante = Convert::ToInt32(datos[lc1]);

	//Buscar todas las posiciones cuyo c�digo este relacionado a la del dise�o datos(LC1)
	posicionController^ posController = gcnew posicionController();
	List<posicion^>^ posicionesTotales = posController->asignarListaPosicionFigura(codigoLCConstante);
	//Se cuenta el n�mero de pares o lineas totales para dicho dise�o
	int numPT = posicionesTotales->Count;
	int numPasos = numPT / 2;
	//Se crea la cantidad de objetos lineas de corte relacionado a cada paso para la construcci�n de la figura
	for (int i = 0;i < numPasos;i++) {
		//Creo una lista de posici�n asignandole como codigo y nombre de dise�o los leidos en datos lc1 y lc2
		List<posicion^>^ posicionesFiltradas = posController->asignarListaPosicionFiguraFILTRO(posicionesTotales, i);
		int codigoLC = Convert::ToInt32(datos[lc1]);
		String^ dise�oLC = datos[lc2];
		//Paso es el n�mero de iteraci�n + 1 
		int paso = i + 1;

		//Se trabaja con las coordenadas de cada posici�n para sacar la distancia
		double IX = Convert::ToDouble(posicionesFiltradas[0]->getEjeX());
		double IY = Convert::ToDouble(posicionesFiltradas[0]->getEjeY());
		double FX = Convert::ToDouble(posicionesFiltradas[1]->getEjeX());
		double FY = Convert::ToDouble(posicionesFiltradas[1]->getEjeY());

		double distancia = sqrt(pow(FX - IX, 2) + pow(FY - IY, 2));

		//Se crea la lista de objetos Linea de corte relacionada a un dise�o
		corteLinea^ objCL = gcnew corteLinea(codigoLC, dise�oLC, paso, distancia, posicionesFiltradas);
		ListaCorteLinea->Add(objCL);
		

	}
	return(ListaCorteLinea);
	
}

