#pragma once

namespace Scontroller {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace Smodel;

	public ref class bReporteController {
	public:
		bReporteController();
		List<ImpresionesxFiguraCorte^>^ generaReport(String^ user);
	};
}