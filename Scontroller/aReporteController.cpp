#include "aReporteController.h"
#include "usuarioController.h"

using namespace Scontroller;

aReporteController::aReporteController() {

}
List<numeroUsosxUsuario^>^ aReporteController::generaaReporte() {
	List<numeroUsosxUsuario^>^ listaReporte = gcnew List<numeroUsosxUsuario^>();
	usuarioController^ usuarioControl = gcnew usuarioController();
	List<usuario^>^ listaUsuario = usuarioControl->buscarTotalUsuarios();
	for (int i = 0; i < listaUsuario->Count; i++) {
		String^ nombreUsuario = listaUsuario[i]->getUser();
		int numUsos = listaUsuario[i]->getNumUsos();
		numeroUsosxUsuario^ objReporteA = gcnew numeroUsosxUsuario(nombreUsuario, numUsos);
		listaReporte->Add(objReporteA);
	}
	return(listaReporte);
}