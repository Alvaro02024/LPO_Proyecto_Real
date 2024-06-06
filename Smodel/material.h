#pragma once

using namespace System;

namespace Smodel {
	public ref class material {
	private:
		int codigo;
		String^ nombre;
		double profundidadMax;
		double distanciaMax;
		double velocidadCorte;
	public:
		material();
		material(int codigo, String^ nombre, double profundidadMax, double distanciaMax, double velocidadCorte);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombre();
		void setNombre(String^ nombre);
		double getProfundidadMax();
		void setProfundidadMax(double profundidadMax);
		double getDistanciaMax();
		void setDistanciaMax(double distanciaMax);
		double getVelocidadCorte();
		void setVelocidadCorte(double velocidadCorte);


	};
}
