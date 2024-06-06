#pragma once

using namespace System;
using namespace Smodel;
using namespace System::Collections::Generic;

namespace Scontroller {
	public ref class corteCirculoController {
	public:
		corteCirculoController();
		List<corteCirculo^>^ asignarCorteCirculoxFigura(String^ diseño);
	};
}

