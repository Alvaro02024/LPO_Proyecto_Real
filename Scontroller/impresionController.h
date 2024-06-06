#pragma once

namespace Scontroller {

	using namespace System;
	using namespace Smodel;
	using namespace System::Collections::Generic;

	public ref class impresionController {
	public:
		impresionController();
		List<impresionFC^>^ TotalImpresiones();
		void guardarImpresion(impresionFC^ obj);
		void textoImpresion();
		
	};
}
