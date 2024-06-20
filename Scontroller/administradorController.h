#pragma once

namespace Scontroller {

	using namespace Smodel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class administradorController {
	private:
		SqlConnection^ objConexion;
	public:
		administradorController();
		void abrirConexion();
		void cerrarConexion();

		int verificarCuentaAdmin(String^ User, String^ Cont);
		int BD_verificarCuentaAdmin(String^ User, String^ Cont);
	};
}
