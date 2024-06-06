#pragma once

using namespace System;

namespace Smodel {
	public ref class posicion {
	private:
		int codigo;
		double ejeX;
		double ejeY;
		double ejeZ;
	public:
		posicion();
		posicion(int codigo, double ejeX, double ejeY, double ejeZ);

		int getCodigo();
		void setCodigo(int codigo);
		double getEjeX();
		void setEjeX(double ejeX);
		double getEjeY();
		void setEjeY(double ejeY);
		double getEjeZ();
		void setEjeZ(double ejeZ);
	};
}
