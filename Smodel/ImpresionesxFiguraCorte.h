#pragma once

using namespace System;

namespace Smodel {
	public ref class ImpresionesxFiguraCorte {
	private:
		String^ nombreFC;
		int cantidadImpresiones;
	public:
		ImpresionesxFiguraCorte();
		ImpresionesxFiguraCorte(String^ nombreFC, int cantidadImpresiones);

		String^ getNombreFC();
		void setNombreFC(String^ nombreFC);
		int getCantidadImpresiones();
		void setCantidadImpresiones(int cantidadImpresiones);
	};
}
