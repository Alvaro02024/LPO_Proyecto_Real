#include "licenciaController.h"

using namespace Scontroller;
using namespace Smodel;
using namespace System;
using namespace System::IO;

licenciaController::licenciaController() {
	this->objConexion = gcnew SqlConnection();
}

void licenciaController::abrirConexion() {
	//Paso1: establecer la cadena de conexion
	this->objConexion->ConnectionString = "Server=bd20210963.cmy8r9euah5y.us-east-1.rds.amazonaws.com;DataBase=DatosProyecto;User id=admin;Password=Grupo11Proyecto";
	//Paso2: abrir conexion
	this->objConexion->Open();
}

void licenciaController::cerrarConexion() {
	this->objConexion->Close();
}

licencia^ licenciaController::asignarLicencia(int codigo_user) {
	int criterio = codigo_user / 100;
	licencia^ objLicencia = buscarLicenciaxCodigo(criterio);
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

		if (codigo == codigo_lic) {
			objLC = gcnew licencia(codigo, tipo, numUsuarios, fechaCompra, fechaVencimiento);
			break;
		}
	}
	return objLC;
}

licencia^ licenciaController::BD_buscarLicenciaxCodigo(int codigo_lic) {
	licencia^ objLicencia = nullptr;
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "select* from licencias where codigo= " + codigo_lic;
	//Sentencia es un select -> se ejecuta con un execute reader que devuelve la info de la BD
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ tipo = safe_cast<String^>(objData[1]);
		int numUsuarios = safe_cast<int>(objData[2]);
		String^ fechaCompra = safe_cast<String^>(objData[3]);
		String^ fechaVencimiento = safe_cast<String^>(objData[4]);

		objLicencia = gcnew licencia(codigo, tipo, numUsuarios, fechaCompra, fechaVencimiento);
	}
	cerrarConexion();
	return objLicencia;
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