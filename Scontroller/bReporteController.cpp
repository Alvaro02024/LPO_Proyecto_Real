#include "bReporteController.h"
#include "impresionController.h"
#include "figuraController.h"

using namespace Scontroller;

bReporteController::bReporteController() {

}
List<ImpresionesxFiguraCorte^>^ bReporteController::generaReport(String^ nombreUsuario) {
	List<ImpresionesxFiguraCorte^>^ lista = gcnew List<ImpresionesxFiguraCorte^>();
	figuraController^ figuraCorteController = gcnew figuraController();
	impresionController^ ImpresionController = gcnew impresionController();
	List<impresionFC^>^ listaImpresiones = ImpresionController->TotalImpresiones();
	for (int i = 0;i < listaImpresiones->Count;i++) {
		String^ user = listaImpresiones[i]->getAutor();
		int CodobjF = listaImpresiones[i]->getObjFiguraCorte();
		figuraCorte^ Fig = figuraCorteController->buscar1FiguraxCodigo(CodobjF);
		String^ nombreFig = Fig->getNombreDiseño();
		int numeroImpresiones = ImpresionController->numeroImpresionesxUser(nombreUsuario);
		ImpresionesxFiguraCorte^ objNEW = gcnew ImpresionesxFiguraCorte(nombreFig, numeroImpresiones);
		if (user == nombreUsuario) {
			lista->Add(objNEW);
		}
	}
	return lista;
}