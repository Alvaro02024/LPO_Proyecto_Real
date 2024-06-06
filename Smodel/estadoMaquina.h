#pragma once
#include "impresionFC.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Smodel {
	public ref class estadoMaquina {
	private:
		int codigo;
		int numUsos;
		String^ estado;
		List<impresionFC^>^ listImpresionFC;
	public:
		estadoMaquina();
		estadoMaquina(int codigo, int numUsos, String^ estado, List<impresionFC^>^ listImpresionFC);

		int getCodigo();
		void setCodigo(int codigo);
		int getNumUsos();
		void setNumUsos(int numUsos);
		String^ getEstado();
		void setEstado(String^ estado);
		List<impresionFC^>^ getListImpresionFC();
		void setListImpresionFC(List<impresionFC^>^ listImpresionFC);
	};
}