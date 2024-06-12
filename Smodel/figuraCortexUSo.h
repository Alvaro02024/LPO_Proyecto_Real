#pragma once

using namespace System;

namespace Smodel {
	public ref class figuraCortexUSo {
	private:
		String^ NombreFiguraCorte;
		int Uso;
	public:
		figuraCortexUSo();
		figuraCortexUSo(String^ NombreFiguraCorte, int Uso);

		String^ getNombreFiguraCorte();
		void setNombreFiguraCorte(String^ NombreFiguraCorte);
		int getUso();
		void setUso(int Uso);
};

}
