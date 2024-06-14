#pragma once

namespace Scontroller {

	using namespace System;
	using namespace Smodel;
	using namespace System::Collections::Generic;

	public ref class impresionController {
	public:
		impresionController();
		List<impresionFC^>^ TotalImpresiones();
		void guardarImpresion(List<impresionFC^>^ obj);
		void textoImpresion(impresionFC^ obj1);
		int repetido(int codigo);
		int numeroImpresionesxUser(String^ user);
		
	};
}
