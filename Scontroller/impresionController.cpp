#include "impresionController.h"
#include "figuraController.h"

using namespace Scontroller;
using namespace System::IO;


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


		
	}
	return (listaImpresiones);
}

void impresionController::guardarImpresion(impresionFC^ obj) {

}

void impresionController::textoImpresion() {

}

