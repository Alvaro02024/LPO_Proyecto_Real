#pragma once

namespace Scontroller {
	
	using namespace Smodel;
	using namespace System;
	using namespace System::Collections::Generic;
	
	public ref class aReporteController {
	public:
		aReporteController();
		List<numeroUsosxUsuario^>^ generaaReporte();
		
	};
}