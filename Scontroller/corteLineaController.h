#pragma once

using namespace System;
using namespace Smodel;
using namespace System::Collections::Generic;

namespace Scontroller {
	public ref class corteLineaController {
	public:
		corteLineaController();
		List<corteLinea^>^ asignarCorteLineaxFigura(List<String^>^ datos, int iterador);
		List<String^>^ DatosCreacionObjetosLC();
	};
}