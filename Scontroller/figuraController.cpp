#include "figuraController.h"
#include "materialController.h"
#include "corteCirculoController.h"
#include "corteLineaController.h"
#include "posicionController.h"

using namespace Scontroller;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace Smodel;


figuraController::figuraController() {

}

List<figuraCorte^>^ figuraController::buscarFiguraxCodigo(int codigoBuscar) {
	List<figuraCorte^>^ listaFG = gcnew List<figuraCorte^>();
	array<String^>^ lineas = File::ReadAllLines("figuras.txt");
	String^ separadores = ";";
	for each (String ^ datoFG in lineas) {
		array<String^>^ datos = datoFG->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ dise�o = datos[1];
		String^ autor = datos[2];
		String^ materialDise�o = datos[3];
		String^ fechaCreacion = datos[4];

		materialController^ matControl = gcnew materialController();
		material^ objMaterial = matControl->asignarMaterial(materialDise�o);

		int par;

		corteLineaController^ licControl = gcnew corteLineaController();
		List<String^>^ DatosLCasociadosFC = licControl->DatosCreacionObjetosLC();
		for (int i = 0;i < DatosLCasociadosFC->Count; i++) {
			if (dise�o == DatosLCasociadosFC[i]) {
				par = i / 2;
				break;
			}
		}

		List<corteLinea^>^ objLineaC = licControl->asignarCorteLineaxFigura(DatosLCasociadosFC, par);

		corteCirculoController^ cirControl = gcnew corteCirculoController();
		List<corteCirculo^>^ objCirculoC = cirControl->asignarCorteCirculoxFigura(dise�o);
		
		
		if (Convert::ToString(codigo)->Contains(Convert::ToString(codigo))) {
			figuraCorte^ objFG = gcnew figuraCorte(codigo, dise�o, autor, fechaCreacion, objMaterial, objLineaC, objCirculoC);
			listaFG->Add(objFG);
		} 
	}
	return(listaFG); 
}
figuraCorte^ figuraController::buscar1FiguraxCodigo(int codigoComp) {
	figuraCorte^ objFG;
	array<String^>^ lineas = File::ReadAllLines("figuras.txt");
	String^ separadores = ";";
	for each (String ^ datoFG in lineas) {
		array<String^>^ datos = datoFG->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ dise�o = datos[1];
		String^ autor = datos[2];
		String^ materialDise�o = datos[3];
		String^ fechaCreacion = datos[4];

		materialController^ matControl = gcnew materialController();
		material^ objMaterial = matControl->asignarMaterial(materialDise�o);

		int par;

		corteLineaController^ licControl = gcnew corteLineaController();
		List<String^>^ DatosLCasociadosFC = licControl->DatosCreacionObjetosLC();
		for (int i = 0;i < DatosLCasociadosFC->Count; i++) {
			if (dise�o == DatosLCasociadosFC[i]) {
				par = i / 2;
				break;
			}
		}

		List<corteLinea^>^ objLineaC = licControl->asignarCorteLineaxFigura(DatosLCasociadosFC, par);

		corteCirculoController^ cirControl = gcnew corteCirculoController();
		List<corteCirculo^>^ objCirculoC = cirControl->asignarCorteCirculoxFigura(dise�o);


		if (codigo==codigoComp) {
			objFG = gcnew figuraCorte(codigo, dise�o, autor, fechaCreacion, objMaterial, objLineaC, objCirculoC);
			break;
		}

	}
	
	return objFG;
}

void figuraController::actualizarFigura(int a_codigo, String^ a_dise�o, String^ a_autor, String^ a_fechaCreacion, String^ a_material) {
	List<figuraCorte^>^ listaFIGURAS = buscarFiguraxALL();
	for (int i = 0; i < listaFIGURAS->Count; i++) {
		if (listaFIGURAS[i]->getCodigo() == a_codigo) {
			listaFIGURAS[i]->setNombreDise�o(a_dise�o);
			listaFIGURAS[i]->setNombreAutor(a_autor);
			listaFIGURAS[i]->setFechaCreacion(a_fechaCreacion);
			
			materialController^ matControl = gcnew materialController();
			material^ objMaterial = matControl->asignarMaterial(a_material);
			listaFIGURAS[i]->setObjMaterial(objMaterial);

			break;
		}
	}
	escribirArchivo(listaFIGURAS);
}

List<figuraCorte^>^ figuraController::buscarFiguraxALL() {
	List<figuraCorte^>^ listaFG = gcnew List<figuraCorte^>();
	array<String^>^ lineas = File::ReadAllLines("figuras.txt");
	String^ separadores = ";";
	for each (String ^ datoFG in lineas) {
		array<String^>^ datos = datoFG->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ dise�o = datos[1];
		String^ autor = datos[2];
		String^ materialDise�o = datos[3];
		String^ fechaCreacion = datos[4];

		materialController^ matControl = gcnew materialController();
		material^ objMaterial = matControl->asignarMaterial(materialDise�o);

		int par;

		corteLineaController^ licControl = gcnew corteLineaController();
		List<String^>^ DatosLCasociadosFC = licControl->DatosCreacionObjetosLC();
		for (int i = 0;i < DatosLCasociadosFC->Count; i++) {
			if (dise�o == DatosLCasociadosFC[i]) {
				par = i / 2;
				break;
			}
		}

		List<corteLinea^>^ objLineaC = licControl->asignarCorteLineaxFigura(DatosLCasociadosFC, par);

		corteCirculoController^ cirControl = gcnew corteCirculoController();
		List<corteCirculo^>^ objCirculoC = cirControl->asignarCorteCirculoxFigura(dise�o);
				
		figuraCorte^ objFG = gcnew figuraCorte(codigo, dise�o, autor, fechaCreacion, objMaterial, objLineaC, objCirculoC);
		listaFG->Add(objFG);
		
	}
	return(listaFG);
}

void figuraController::escribirArchivo(List<figuraCorte^>^ lista_escribir) {
	array<String^>^ lineaArchivo = gcnew array<String^>(lista_escribir->Count);
	for (int i = 0; i < lista_escribir->Count;i++) {
		figuraCorte^ objFC = lista_escribir[i];
		material^ objmaterial = objFC->getObjMaterial();
		materialController^ matC = gcnew materialController();
		String^ material = matC->nombreMaterial(objmaterial);
		lineaArchivo[i] = Convert::ToString(objFC->getCodigo()) + ";" + objFC->getNombreDise�o() + ";" + objFC->getNombreAutor() + ";" + material + ";" + objFC->getFechaCreacion();
	}
	File::WriteAllLines("figuras.txt", lineaArchivo);
}

void figuraController::eliminarFigura(int codigoEliminar) {
	List<figuraCorte^>^ list = buscarFiguraxALL();
	for (int i = 0; i < list->Count;i++) {
		if (list[i]->getCodigo() == codigoEliminar) {
			list->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(list);
}

void figuraController::agregarNuevaFiguraCorte(int b_codigo, String^ b_dise�o, String^ b_autor, String^ b_fecha, material^ b_mat, List<corteLinea^>^ cl, List<corteCirculo^>^ cc) {
	List<figuraCorte^>^ listFiguraCorte = buscarFiguraxALL();
	figuraCorte^ objCorte = gcnew figuraCorte(b_codigo, b_dise�o, b_autor, b_fecha, b_mat, cl, cc);
	listFiguraCorte->Add(objCorte);
	escribirArchivo(listFiguraCorte);
}