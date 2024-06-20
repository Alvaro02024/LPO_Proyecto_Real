#include "posicionController.h"


using namespace Scontroller;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace Smodel;
using namespace System::Collections::Generic;

posicionController::posicionController() {
	this->objConexion = gcnew SqlConnection();
}

void posicionController::abrirConexion() {
	//Paso1: establecer la cadena de conexion
	this->objConexion->ConnectionString = "Server=bd20210963.cmy8r9euah5y.us-east-1.rds.amazonaws.com;DataBase=DatosProyecto;User id=admin;Password=Grupo11Proyecto";
	//Paso2: abrir conexion
	this->objConexion->Open();
}

void posicionController::cerrarConexion() {
	this->objConexion->Close();
}

List<posicion^>^ posicionController::asignarListaPosicionFigura(int codigo_lineaCorte) {
	//Buscar los objetos poscicion cuyo codigo este incluido en el codigo de la figura de corte
	int codigoComparacion = codigo_lineaCorte;
	List<posicion^>^ listaPosiciones = gcnew List<posicion^>();
	array<String^>^ lineas = File::ReadAllLines("posiciones.txt");
	String^ separadores = ";";
	for each (String ^ datoP in lineas) {
		array<String^>^ datos = datoP->Split(separadores->ToCharArray());

		//Por alguna razón después de leer todos los datos de las filas, lee una fila más donde datoP es ""
		//por ende dato 0 1 2 y 3 son "" o null
		//Agrego un filtro antes de cada una de las lecturas para evitar eso
		if ((datoP == "") || (datos[0]=="")) {
			break;
		}

		int codigo = Convert::ToInt32(datos[0]);
		int ejeX = Convert::ToInt32(datos[1]);
		int ejeY = Convert::ToInt32(datos[2]);
		int ejeZ = Convert::ToInt32(datos[3]);
		
		if ((codigo/1000) == codigoComparacion) { //LIMITEdeNUMERODELINEASDECORTE
			posicion^ objPosicion = gcnew posicion(codigo, ejeX, ejeY, ejeZ);
			listaPosiciones->Add(objPosicion);
		}
	}
	return(listaPosiciones);
}

List<posicion^>^ posicionController::asignarListaPosicionFiguraFILTRO(List<posicion^>^ listaFILTRAR, int iterador) {
	//esto lo tengo que hacer al momento de llamar la función int numeroPasosTotal =listaFILTRAR->Count;
	//Debe empezar desde 0

	int posicion1 = iterador * 2;
	int posicion2 = posicion1 + 1;

	List<posicion^>^ listaFILTRADA = gcnew List<posicion^>();
	listaFILTRADA->Clear();
	listaFILTRADA->Add(listaFILTRAR[posicion1]);
	listaFILTRADA->Add(listaFILTRAR[posicion2]);
	
	return(listaFILTRADA);
}

List<posicion^>^ posicionController::buscarPosiciones() {
	List<posicion^>^ listaPosiciones = gcnew List<posicion^>();
	array<String^>^ lineas = File::ReadAllLines("posiciones.txt");
	String^ separadores = ";";
	for each (String ^ posData in lineas) {
		array<String^>^ datos = posData->Split(separadores->ToCharArray());
		//for each sigue leyendo más lineas de las que tienen datos en el archivo
		if ((posData == "")||(datos[0] == "")||(datos[1] =="")||(datos[2] == "")||(datos[3] == "")) {
			break;
		}
		int codigo = Convert::ToInt32(datos[0]);
		int ejex = Convert::ToInt32(datos[1]);
		int ejey = Convert::ToInt32(datos[2]);
		int ejez = Convert::ToInt32(datos[3]);

		posicion^ objP = gcnew posicion(codigo, ejex, ejey, ejez);
		listaPosiciones->Add(objP);
		
	}
	return(listaPosiciones);
}

List<posicion^>^ posicionController::BD_buscarPosiciones() {
	posicion^ objPosicion = nullptr;
	List<posicion^>^ listaPosiciones = gcnew List<posicion^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select* from posiciones";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int ejex = safe_cast<int>(objData[1]);
		int ejey = safe_cast<int>(objData[2]);
		int ejez = safe_cast<int>(objData[3]);

		objPosicion = gcnew posicion(codigo, ejex, ejey, ejez);
		listaPosiciones->Add(objPosicion);
	}

	cerrarConexion();
	return listaPosiciones;
}

List<posicion^>^ posicionController::buscarPosicionxCodigo(int codigoB) {
	List<posicion^>^ listaPosiciones = gcnew List<posicion^>();
	array<String^>^ lineas = File::ReadAllLines("posiciones.txt");
	String^ separadores = ";";
	for each(String^ posData in lineas) {
		array<String^>^ datos = posData->Split(separadores->ToCharArray());
		//for each sigue leyendo más lineas de las que tienen datos en el archivo
		if ((posData == "") || (datos[0] == "") || (datos[1] == "") || (datos[2] == "") || (datos[3] == "")) {
			break;
		}
		int codigo = Convert::ToInt32(datos[0]);
		int ejex = Convert::ToInt32(datos[1]);
		int ejey = Convert::ToInt32(datos[2]);
		int ejez = Convert::ToInt32(datos[3]);

		if (codigo == codigoB) {
			posicion^ objP = gcnew posicion(codigo, ejex, ejey, ejez);
			listaPosiciones->Add(objP);
		}
	}
	return(listaPosiciones);
}

List<posicion^>^ posicionController::BD_buscarPosicionxCodigo(int codigo) {
	posicion^ objPosicion = nullptr;
	List<posicion^>^ listaPosiciones = gcnew List<posicion^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select* from posiciones where codigo like '"+codigo+"%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int codigo = safe_cast<int>(objData[0]);
		int ejex = safe_cast<int>(objData[1]);
		int ejey = safe_cast<int>(objData[2]);
		int ejez = safe_cast<int>(objData[3]);

		objPosicion = gcnew posicion(codigo, ejex, ejey, ejez);
		listaPosiciones->Add(objPosicion);
	}

	cerrarConexion();
	return listaPosiciones;
}

posicion^ posicionController::buscar1PosicionxCodigo(int codigoB) {
	posicion^ objPosicion;
	array<String^>^ lineas = File::ReadAllLines("posiciones.txt");
	String^ separadores = ";";
	for each (String ^ posData in lineas) {
		array<String^>^ datos = posData->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		int ejex = Convert::ToInt32(datos[1]);
		int ejey = Convert::ToInt32(datos[2]);
		int ejez = Convert::ToInt32(datos[3]);

		if (codigo == codigoB) {
			objPosicion = gcnew posicion(codigo, ejex, ejey, ejez);
			break;
		}
	}
	return(objPosicion);
}

void posicionController::actualizarPosicion(int codigo, int x, int y, int z) {
	List<posicion^>^ lista = buscarPosiciones();
	for (int i = 0; i < lista->Count; i++) {
		if (lista[i]->getCodigo() == codigo) {
			lista[i]->setCodigo(codigo);
			lista[i]->setEjeX(x);
			lista[i]->setEjeY(y);
			lista[i]->setEjeZ(z);
			break;
		}
	}
	escribirPosicion(lista);
}

void posicionController::BD_actualizarPosicion(int codigo, int x, int y, int z) {
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "update posiciones " +
		"set ejeX= "+x+", + ejeY = "+y+", ejeZ = "+z +
		" where codigo = " +  codigo;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();

}


void posicionController::escribirImpresionPosicion(List<posicion^>^ listaposiciones) {
	array<String^>^ lineaArchivo = gcnew array<String^>(listaposiciones->Count);
	for (int i = 0; i < listaposiciones->Count; i++) {
		posicion^ Npos = listaposiciones[i];
		lineaArchivo[i] = Convert::ToString(Npos->getEjeX()) + ";" + Convert::ToString(Npos->getEjeY()) + ";" + Convert::ToString(Npos->getEjeZ());
	}
	File::WriteAllLines("ImprimiendoPosiciones.txt", lineaArchivo);
}
void posicionController::escribirPosicion(List<posicion^>^ listaposiciones) {
	array<String^>^ lineaArchivo = gcnew array<String^>(listaposiciones->Count);
	for (int i = 0; i < listaposiciones->Count;i++) {
		posicion^ Npos = listaposiciones[i];
		lineaArchivo[i] = Convert::ToString(Npos->getCodigo()) + ";" + Convert::ToString(Npos->getEjeX()) + ";" + Convert::ToString(Npos->getEjeY()) + ";" + Convert::ToString(Npos->getEjeZ());
	}
	File::WriteAllLines("posiciones.txt", lineaArchivo);
}
void posicionController::eliminarPosicion(int codigo) {
	List<posicion^>^ list = buscarPosiciones();
	for (int i = 0; i < list->Count;i++) {
		if (list[i]->getCodigo() == codigo) {
			list->RemoveAt(i);
			break;
		}
	}
	escribirPosicion(list);
}

void posicionController::BD_eliminarPosicion(int codigo) {
	abrirConexion();
	//La sentencia es el comando que realiza acciones en la base de datos
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText = "delete from posiciones where codigo = " + codigo;
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

void posicionController::agregarPosicion(int codigo, int x, int y, int z) {
	List<posicion^>^ listaposicion = buscarPosiciones();
	posicion^ objPosicion = gcnew posicion(codigo,x, y, z);
	listaposicion->Add(objPosicion);
	escribirPosicion(listaposicion);

}

void posicionController::BD_agregarPosicion(int codigo, int x, int y, int z) {
	posicion^ objPosicion = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Indico que la sentencia debe ser ejecutada en la base de datos a conectarse
	objSentencia->Connection = this->objConexion;
	//Sentencia a ejecutar
	objSentencia->CommandText =
		"insert into posiciones(codigo, ejeX, ejeY, ejeZ)" +
		" values("+codigo+","+ x+","+ y+","+ z+")";
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}

int posicionController::CodigoRepetido(int codigoCOMP) {
	int valido = 1;
	List<posicion^>^ listaPosiciones = gcnew List<posicion^>();
	array<String^>^ lineas = File::ReadAllLines("posiciones.txt");
	String^ separadores = ";";
	for each (String ^ posData in lineas) {
		array<String^>^ datos = posData->Split(separadores->ToCharArray());
		//for each sigue leyendo más lineas de las que tienen datos en el archivo
		if ((posData == "") || (datos[0] == "") || (datos[1] == "") || (datos[2] == "") || (datos[3] == "")) {
			break;
		}
		int codigo = Convert::ToInt32(datos[0]);
		int ejex = Convert::ToInt32(datos[1]);
		int ejey = Convert::ToInt32(datos[2]);
		int ejez = Convert::ToInt32(datos[3]);

		if (codigo == codigoCOMP) {
			valido = 0;
			break;
		}
	}
	return valido;
	
}

int posicionController::BD_CodigoRepetido(int codigo) {
	int valido = 1;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select* from posiciones where codigo= "+codigo;
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		valido = 0;
	}

	cerrarConexion();
	return valido;
}

