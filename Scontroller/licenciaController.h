#pragma once

namespace Scontroller {

	using namespace Smodel;
	using namespace System;
	using namespace System::Data::SqlClient; //ESPACIO DE NOMBRES PARA TRABAJAR CON LA BD	

	public ref class licenciaController {
	private:
		SqlConnection^ objConexion; //Atributo de conexión de base de datos
	public:
		licenciaController();
		void abrirConexion();
		void cerrarConexion();
		licencia^ asignarLicencia(int codigo_user);
		licencia^ buscarLicenciaxCodigo(int codigo_lic);
		licencia^ BD_buscarLicenciaxCodigo(int codigo_lic);
		int diasRestantesLicencia(String^ fechaVencimiento);
	};
}
