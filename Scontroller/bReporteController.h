#pragma once

namespace Controller {
	using namespace Smodel;
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class bReporteController {
	public:
		bReporteController();
		List<figuraCortexUSo^>^ generaRporte();
	};
}
