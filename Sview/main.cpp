#include "c_logeo.h"

using namespace System;

using namespace System::Windows::Forms;

using namespace Sview;

void main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	c_logeo ventana; //Estoy creando el objeto ventana que va a ser del tipo frmPrincipal
	Application::Run(% ventana); //Aqui estoy ejecutando la ventana inicial
}

