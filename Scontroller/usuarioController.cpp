#include "usuarioController.h"
#include "licenciaController.h"

using namespace Scontroller;
using namespace Smodel;
using namespace System::IO;

usuarioController::usuarioController() {

}

int usuarioController::verificarCuentaUser(String^ u_user, String^ u_cont) {
	int confirmar = 0;
	array<String^>^ linea = File::ReadAllLines("usuario_cuentas.txt");
	String^ separador = ";";
	for each (String ^ usuario in linea) {
		array<String^>^ datos = usuario->Split(separador->ToCharArray());
		String^ user = datos[1];
		String^ contraseña = datos[2];

		if ((user == u_user) && (contraseña == u_cont)) {
			confirmar = 1;
			break;
		}
	}
	return(confirmar);
}

usuario^ usuarioController::buscarUsuarioxCodigo(int codigoBuscar) {
	usuario^ objUsuario;
	array<String^>^ lineas = File::ReadAllLines("usuario_cuentas.txt");
	String^ separadores = ";";
	for each (String ^ datoUsu in lineas) {
		array<String^>^ datos = datoUsu->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ user = datos[1];
		String^ contraseña = datos[2];
		String^ contacto = datos[3];
		int numUsos = Convert::ToInt32(datos[4]);

		licenciaController^ lcControl = gcnew licenciaController();
		licencia^ objLicencia = lcControl->asignarLicencia(codigo);

		String^ tipoLicencia = objLicencia->getTipo();
		String^ diaVencimiento = objLicencia->getFechaVencimiento();
		int diasRestantes = lcControl->diasRestantesLicencia(diaVencimiento);


		if (codigo == codigoBuscar) {
			objUsuario = gcnew usuario(codigo, user, contraseña, tipoLicencia, diasRestantes, contacto, numUsos, objLicencia);
			break;
		}
	}
	return (objUsuario);
}

usuario^ usuarioController::buscarUsuarioxUser(String^ b_user) {
	usuario^ objUsuario;
	array<String^>^ lineas = File::ReadAllLines("usuario_cuentas.txt");
	String^ separadores = ";";
	for each (String ^ datoUsu in lineas) {
		array<String^>^ datos = datoUsu->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ user = datos[1];
		String^ contraseña = datos[2];
		String^ contacto = datos[3];
		int numUsos = Convert::ToInt32(datos[4]);

		licenciaController^ lcControl = gcnew licenciaController();
		licencia^ objLicencia = lcControl->asignarLicencia(codigo);

		String^ tipoLicencia = objLicencia->getTipo();
		String^ diaVencimiento = objLicencia->getFechaVencimiento();
		int diasRestantes = lcControl->diasRestantesLicencia(diaVencimiento);


		if (user = b_user) {
		objUsuario = gcnew usuario(codigo, user, contraseña, tipoLicencia, diasRestantes, contacto, numUsos, objLicencia);
		break;
		}
	}
	return (objUsuario);
}

List<usuario^>^ usuarioController::buscarListaUsuarioxUser(String^ c_user) {
	List<usuario^>^ listaUsuarios = gcnew List<usuario^>();
	array<String^>^ lineas = File::ReadAllLines("usuario_cuentas.txt");
	String^ separadores = ";";
	for each (String ^ datoUsu in lineas) {
		array<String^>^ datos = datoUsu->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ user = datos[1];
		String^ contraseña = datos[2];
		String^ contacto = datos[3];
		int numUsos = Convert::ToInt32(datos[4]);

		licenciaController^ lcControl = gcnew licenciaController();
		licencia^ objLicencia = lcControl->asignarLicencia(codigo);

		String^ tipoLicencia = objLicencia->getTipo();
		String^ diaVencimiento = objLicencia->getFechaVencimiento();
		int diasRestantes = lcControl->diasRestantesLicencia(diaVencimiento);


		if (user->Contains(c_user)) {
			usuario^ objUsuarios = gcnew usuario(codigo, user, contraseña, tipoLicencia, diasRestantes, contacto, numUsos, objLicencia);
			listaUsuarios->Add(objUsuarios);
		}
	}
	return (listaUsuarios);
}
List<usuario^>^ usuarioController::buscarTotalUsuarios() {
	List<usuario^>^ listaUsuarios = gcnew List<usuario^>();
	array<String^>^ lineas = File::ReadAllLines("usuario_cuentas.txt");
	String^ separadores = ";";
	for each (String ^ datoUsu in lineas) {
		array<String^>^ datos = datoUsu->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ user = datos[1];
		String^ contraseña = datos[2];
		String^ contacto = datos[3];
		int numUsos = Convert::ToInt32(datos[4]);

		licenciaController^ lcControl = gcnew licenciaController();
		licencia^ objLicencia = lcControl->asignarLicencia(codigo);

		String^ tipoLicencia = objLicencia->getTipo();
		String^ diaVencimiento = objLicencia->getFechaVencimiento();
		int diasRestantes = lcControl->diasRestantesLicencia(diaVencimiento);

		usuario^ objUsuarios = gcnew usuario(codigo, user, contraseña, tipoLicencia, diasRestantes, contacto, numUsos, objLicencia);
		listaUsuarios->Add(objUsuarios);
		
	}
	return (listaUsuarios);

}
void usuarioController::actualizarUsuario(int codigo_user, String^ user, String^ cont, String^ contacto, int numUsos) {
	List<usuario^>^ listaUsuarios = buscarTotalUsuarios();
	for (int i = 0; i < listaUsuarios->Count; i++) {
		if (listaUsuarios[i]->getCodigo() == codigo_user) {
			listaUsuarios[i]->setUser(user);
			listaUsuarios[i]->setContraseña(cont);
			listaUsuarios[i]->setContacto(contacto);
			listaUsuarios[i]->setNumUsos(numUsos);
			break;
		}
	}
	escribirArchivoUser(listaUsuarios);
}
void usuarioController::escribirArchivoUser(List<usuario^>^ ListaUsuarios) {
	array<String^>^ lineaArchivo = gcnew array<String^>(ListaUsuarios->Count);
	for (int i = 0; i < ListaUsuarios->Count;i++) {
		usuario^ objUsuario = ListaUsuarios[i];
		lineaArchivo[i] = Convert::ToString(objUsuario->getCodigo()) + ";" + objUsuario->getUser() + ";" + objUsuario->getContraseña() + ";" + objUsuario->getContacto() + ";" + objUsuario->getNumUsos();
	}
	File::WriteAllLines("usuario_cuentas.txt", lineaArchivo);
}
void usuarioController::eliminarUsuario(int cod) {
	List<usuario^>^ list = buscarTotalUsuarios();
	for (int i = 0; i < list->Count;i++) {
		if (list[i]->getCodigo() == cod) {
			list->RemoveAt(i);
			break;
		}
	}
	escribirArchivoUser(list);
}
void usuarioController::agregarUsuario(int codidgo, String^ user, String^ cont, String^ contacto, int numUsos) {
	List<usuario^>^ ListaUsuarioActual = buscarTotalUsuarios();

	licenciaController^ lcControl = gcnew licenciaController();
	licencia^ objLicencia = lcControl->asignarLicencia(codidgo);

	String^ tipoLicencia = objLicencia->getTipo();
	String^ diaVencimiento = objLicencia->getFechaVencimiento();
	int diasRestantes = lcControl->diasRestantesLicencia(diaVencimiento);

	usuario^ objUsuario1 = gcnew usuario(codidgo, user, cont, tipoLicencia, diasRestantes, contacto, numUsos, objLicencia);
	ListaUsuarioActual->Add(objUsuario1);
	escribirArchivoUser(ListaUsuarioActual);
}