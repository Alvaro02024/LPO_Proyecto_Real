#include "licenciaController.h"

using namespace Scontroller;
using namespace Smodel;
using namespace System;
using namespace System::IO;

licenciaController::licenciaController() {

}

licencia^ licenciaController::asignarLicencia(int codigo_user) {
	int criterio = codigo_user / 100;
	licencia^ objLicencia = buscarLicenciaxCodigo(codigo_user);
	return (objLicencia);
}

licencia^ licenciaController::buscarLicenciaxCodigo(int codigo_lic) {
	licencia^ objLC;
	array<String^>^ lineas = File::ReadAllLines("licencias.txt");
	String^ separadores = ";";
	for each (String ^ datoL in lineas) {
		array<String^>^ datos = datoL->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ tipo = datos[1];
		int numUsuarios = Convert::ToInt32(datos[2]);
		String^ fechaCompra = datos[3];
		String^ fechaVencimiento = datos[4];

		if (codigo = codigo_lic) {
			objLC = gcnew licencia(codigo, tipo, numUsuarios, fechaCompra, fechaVencimiento);
			break;
		}
	}
	return objLC;
}

int licenciaController::diasRestantesLicencia(String^ fecha) {
	
	//Declaracion del día actual
	DateTime fechaActual = DateTime::Now;

	//Lectura de la fecha de vencimiento
	DateTime fechaVencimiento;
	array<String^>^ formatos = { "dd/MM/yyyy" };
	DateTime::TryParseExact(fecha, formatos, System::Globalization::CultureInfo::InvariantCulture, System::Globalization::DateTimeStyles::None, fechaVencimiento);

	TimeSpan diferencia = fechaVencimiento.Subtract(fechaActual);
	int diasRestantes = diferencia.Days;

	return (diasRestantes);
}