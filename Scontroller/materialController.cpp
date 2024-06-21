#include "materialController.h"

using namespace Scontroller;
using namespace Smodel;
using namespace System;
using namespace System::IO;

//La tabla de materiales presente en el DB no tiene asignada una primary key, al momento de tratar de cambiarlo sale un error por lo que se decidio trabajar 
//sin la declaración de la primary key.

materialController::materialController() {

}

String^ materialController::nombreMaterial(material^ obj) {
	String^ materialNombre = obj->getNombre();
	return materialNombre;
}

material^ materialController::asignarMaterial(String^ nombreMaterial) {
	material^ MaterialAsignado;
	array<String^>^ lineas = File::ReadAllLines("materiales.txt");
	String^ separadores = ";";
	for each (String ^ datoM in lineas) {
		array<String^>^ datos = datoM->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		double profundidaMAX = Convert::ToDouble(datos[2]);
		double distanciaMAX = Convert::ToDouble(datos[3]);
		double velocidadCorte = Convert::ToDouble(datos[4]);
		
		if (nombre == nombreMaterial) {
			MaterialAsignado = gcnew material(codigo, nombre, profundidaMAX, distanciaMAX, velocidadCorte);
			break;
		}
	}
	return (MaterialAsignado);
}