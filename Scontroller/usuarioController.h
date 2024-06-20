#pragma once

namespace Scontroller {

	using namespace Smodel;
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient; //ESPACIO DE NOMBRES PARA TRABAJAR CON LA BD	

	public ref class usuarioController {
		private:
			SqlConnection^ objConexion; //Atributo de conexión de base de datos

		public:
			usuarioController();
			//Métodos propios de la BD
			void abrirConexion();
			void cerrarConexion();

			int verificarCuentaUser(String^ User, String^ Cont);
			usuario^ buscarUsuarioxUser(String^ user);
			usuario^ buscarUsuarioxCodigo(int codigoBuscar);
			List<usuario^>^ buscarListaUsuarioxUser(String^ user);
			List<usuario^>^ BD_buscarListaUsuarioxUser(String^ user);
			List<usuario^>^ buscarTotalUsuarios();
			List<usuario^>^ BD_buscarTotalUsuarios();
			void actualizarUsuario(int codigouser, String^ user, String^ cont, String^ contacto, int numUsos);
			void escribirArchivoUser(List<usuario^>^ ListaUsuarios);
			void eliminarUsuario(int cod);
			void BD_eliminarUsuario(int cod);
			void agregarUsuario(int codidgo, String^ user, String^ cont, String^ contacto, int numUsos);
			void BD_agregarUsuario(int codidgo, String^ user, String^ cont, String^ TTlicencia, int diasRestantes, String^ contacto, int numUsos, int codLicencia);
			int validacionCodifo(int coddd);
			int BD_validacionCodifo(int codd);


	};
}