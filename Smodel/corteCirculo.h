#pragma once

using namespace System;

//biblioteca #include "Math.h";


namespace Smodel {
	public ref class corteCirculo {
	private:
		int codigo;
		String^ nombreDise�o;
		int numPaso;
		int ejeX;
		int ejeY;
		int ejeZ;
		double radio;
		double anguloInicial;
		double anguloFinal;
	public:
		corteCirculo();
		corteCirculo(int codigo, String^ nombreDise�o, int numPaso, int ejeX, int ejeY, int ejeZ, double radio, double anguloInicial, double anguloFinal);
	
		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombreDise�o();
		void setNombreDise�o(String^ nombreDise�o);
		int getNumPaso();
		void setNumPaso(int numPaso);
		int getEjeX();
		void setEjeX(int ejeX);
		int getEjeY();
		void setEjeY(int ejeY);
		int getEjeZ();
		void setEjeZ(int ejeZ);
		double getRadio();
		void setRadio(double radio);
		double getAnguloInicial();
		void setAnguloInicial(double anguloInicial);
		double getAnguloFinal();
		void setAnguloFinal(double anguloFinal);
	};
}
