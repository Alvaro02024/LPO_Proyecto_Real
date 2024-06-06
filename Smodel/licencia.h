#pragma once

using namespace System;

namespace Smodel {
	public ref class licencia {
	private:
		int codigo;
		String^ tipo;
		int numUsuarios;
		String^ fechaCompra;
		String^ fechaVencimiento;
	public:
		licencia();
		licencia(int codigo, String^ tipo, int numUsuarios, String^ fechaCompra, String^ fechaVencimiento);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getTipo();
		void setTipo(String^ tipo);
		int getNumUsuarios();
		void setNumUsuarios(int numUsuarios);
		String^ getFechaCompra();
		void setFechaCompra(String^ fechaCompra);
		String^ getFechaVencimiento();
		void setFechaVencimiento(String^ fechaVencimiento);
	};
}