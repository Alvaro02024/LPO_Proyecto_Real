#include "administradorController.h"

using namespace Scontroller;
using namespace System::IO;

administradorController::administradorController() {

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