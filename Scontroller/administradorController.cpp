#include "administradorController.h"

using namespace Scontroller;
using namespace System::IO;

administradorController::administradorController() {
	this->objConexion = gcnew SqlConnection();
}

void administradorController::abrirConexion() {
	//Paso1: establecer la cadena de conexion
	this->objConexion->ConnectionString = "Server=bd20210963.cmy8r9euah5y.us-east-1.rds.amazonaws.com;DataBase=DatosProyecto;User id=admin;Password=Grupo11Proyecto";
	//Paso2: abrir conexion
	this->objConexion->Open();
}

void administradorController::cerrarConexion() {
	this->objConexion->Close();
}

int administradorController::verificarCuentaAdmin(String^ a_user, String^ a_cont) {
	int confirmar = 0;
	array<String^>^ linea = File::ReadAllLines("administrador_cuentas.txt");
	String^ separador = ";";
	for each (String ^ administrador in linea) {
		array<String^>^ datos = administrador->Split(separador->ToCharArray());
		String^ user = datos[1];
		String^ contraseña = datos[2];

		if ((a_user == user) && (a_cont == contraseña)) {
			confirmar = 1;
		}
	}
	return(confirmar);
}

int administradorController::BD_verificarCuentaAdmin(String^ User, String^ Cont) {
	int confirmar = 0;
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "select* from administrador where IDuser= '" + User+"'";
	//Sentencia es un select -> se ejecuta con un execute reader que devuelve la info de la BD
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		confirmar = 1;
	}
	cerrarConexion();

	return confirmar;
}