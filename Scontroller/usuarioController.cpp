#include "usuarioController.h"
#include "licenciaController.h"

using namespace Scontroller;
using namespace Smodel;
using namespace System::IO;

usuarioController::usuarioController() {
	this->objConexion = gcnew SqlConnection();
}

void usuarioController::abrirConexion() {
	//Paso1: establecer la cadena de conexion
	this->objConexion->ConnectionString="Server=bd20210963.cmy8r9euah5y.us-east-1.rds.amazonaws.com;DataBase=DatosProyecto;User id=admin;Password=Grupo11Proyecto";
	//Paso2: abrir conexion
	this->objConexion->Open();
}

void usuarioController::cerrarConexion() {
	this->objConexion->Close();
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

int usuarioController::BD_verificarCuentaUser(String^ User, String^ Cont) {
	int confirmar = 0;
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "select* from usuario where IDuser= '" + User+"'";
	//Sentencia es un select -> se ejecuta con un execute reader que devuelve la info de la BD
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		confirmar = 1;
	}
	cerrarConexion();

	return confirmar;
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


		if (user == b_user) {
		objUsuario = gcnew usuario(codigo, user, contraseña, tipoLicencia, diasRestantes, contacto, numUsos, objLicencia);
		break;
		}
	}
	return (objUsuario);
}

usuario^ usuarioController::BD_buscarUsuarioxUser(String^ user) {
	usuario^ objUsuario = nullptr;
	
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "select* from usuario where IDuser= '" + user + "'";
	//Sentencia es un select -> se ejecuta con un execute reader que devuelve la info de la BD
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ user = safe_cast<String^>(objData[1]);
		String^ contraseña = safe_cast<String^>(objData[2]);
		String^ tipoLicencia = safe_cast<String^>(objData[3]);
		//int diasRestantes = safe_cast<int>(objData[4]);
		String^ contacto = safe_cast<String^>(objData[5]);
		int numUsos = safe_cast<int>(objData[6]);
		//Se debe implementar una función para buscar Licencia por codigo con BD para que sirva el usuario
		int codigoLicencia = safe_cast<int>(objData[7]);

		licenciaController^ lcControl = gcnew licenciaController();
		licencia^ objLicencia = lcControl->BD_buscarLicenciaxCodigo(codigoLicencia);

		String^ diaVencimiento = objLicencia->getFechaVencimiento();
		int diasRestantes = lcControl->diasRestantesLicencia(diaVencimiento);

		//Los días restantes no se actualizan todavía en la tabla de datos

		objUsuario = gcnew usuario(codigo, user, contraseña, tipoLicencia, diasRestantes, contacto, numUsos, objLicencia);
		
	}
	cerrarConexion();
	return (objUsuario);
}

List<usuario^>^ usuarioController::BD_buscarListaUsuarioxUser(String^ user) {
	usuario^ objUsuario = nullptr;
	List<usuario^>^ listaUsuarios = gcnew List<usuario^>();
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "select* from usuario where IDuser= '"+ user+"'";
	//Sentencia es un select -> se ejecuta con un execute reader que devuelve la info de la BD
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ user = safe_cast<String^>(objData[1]);
		String^ contraseña = safe_cast<String^>(objData[2]);
		String^ tipoLicencia = safe_cast<String^>(objData[3]);
		//int diasRestantes = safe_cast<int>(objData[4]);
		String^ contacto = safe_cast<String^>(objData[5]);
		int numUsos = safe_cast<int>(objData[6]);
		//Se debe implementar una función para buscar Licencia por codigo con BD para que sirva el usuario
		int codigoLicencia = safe_cast<int>(objData[7]); 

		licenciaController^ lcControl = gcnew licenciaController();
		licencia^ objLicencia = lcControl->BD_buscarLicenciaxCodigo(codigoLicencia);

		String^ diaVencimiento = objLicencia->getFechaVencimiento();
		int diasRestantes = lcControl->diasRestantesLicencia(diaVencimiento);

		//Los días restantes no se actualizan todavía en la tabla de datos

		objUsuario = gcnew usuario(codigo, user, contraseña, tipoLicencia, diasRestantes, contacto, numUsos, objLicencia);
		listaUsuarios->Add(objUsuario);
	}
	cerrarConexion();
	return (listaUsuarios);
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
		


		if (user == c_user) {
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

List<usuario^>^ usuarioController::BD_buscarTotalUsuarios() {
	usuario^ objUsuario = nullptr;
	List<usuario^>^ listaUsuarios = gcnew List<usuario^>();
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "select* from usuario";
	//Sentencia es un select -> se ejecuta con un execute reader que devuelve la info de la BD
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		String^ user = safe_cast<String^>(objData[1]);
		String^ contraseña = safe_cast<String^>(objData[2]);
		String^ tipoLicencia = safe_cast<String^>(objData[3]);
		//int diasRestantes = safe_cast<int>(objData[4]);
		String^ contacto = safe_cast<String^>(objData[5]);
		int numUsos = safe_cast<int>(objData[6]);
		//Se debe implementar una función para buscar Licencia por codigo con BD para que sirva el usuario
		int codigoLicencia = safe_cast<int>(objData[7]);

		licenciaController^ lcControl = gcnew licenciaController();
		licencia^ objLicencia = lcControl->BD_buscarLicenciaxCodigo(codigoLicencia);

		String^ diaVencimiento = objLicencia->getFechaVencimiento();
		int diasRestantes = lcControl->diasRestantesLicencia(diaVencimiento);

		objUsuario = gcnew usuario(codigo, user, contraseña, tipoLicencia, diasRestantes, contacto, numUsos, objLicencia);
		listaUsuarios->Add(objUsuario);
	}
	cerrarConexion();
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

void usuarioController::BD_actualizarUsuario(int codigouser, String^ user, String^ cont, String^ contacto, int numUsos) {
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "update usuario " +
		"set IDuser = '"+user+"', contraseña = '"+cont+"', contacto = '"+contacto+"', numUsos = "+numUsos + 
		" where codigo = codigouser";
	cerrarConexion();
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

void usuarioController::BD_eliminarUsuario(int cod) {
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "delete from usuario where codigo = " + cod;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
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

void usuarioController::BD_agregarUsuario(int codidgo, String^ user, String^ cont, String^ TTlicencia, int diasRestantes, String^ contacto, int numUsos, int codLicencia) {
	usuario^ objUsuario = nullptr;
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = 
		"insert into usuario(codigo, IDuser, contraseña, tipoLicencia, diaRestante, contacto,numUsos, codigoLicencia)" + 
		" values(" + codidgo+", '"+user+"', '"+cont+"' ,'"+TTlicencia+"' , "+diasRestantes+", '"+contacto+"', "+numUsos+","+codLicencia+")";
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

int usuarioController::validacionCodifo(int coddd) {
	int validacion = 1;
	List<usuario^>^ listaUsuarios = gcnew List<usuario^>();
	array<String^>^ lineas = File::ReadAllLines("usuario_cuentas.txt");
	String^ separadores = ";";
	for each (String ^ datoUsu in lineas) {
		array<String^>^ datos = datoUsu->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		
		
		if (codigo == coddd) {
			validacion = 0;
			break;
		}

	}
	return (validacion);
}

int usuarioController::BD_validacionCodifo(int codd) {
	int validacion = 1;
	usuario^ objUsuario = nullptr;
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "select* from usuario where codigo= " + codd;
	//Sentencia es un select -> se ejecuta con un execute reader que devuelve la info de la BD
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		validacion = 0;
	}
	cerrarConexion();
	return validacion;
}