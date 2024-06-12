#pragma once

namespace Scontroller {

	using namespace Smodel;
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class usuarioController {
	public:
		usuarioController();
		int verificarCuentaUser(String^ User, String^ Cont);
		usuario^ buscarUsuarioxUser(String^ user);
		usuario^ buscarUsuarioxCodigo(int codigoBuscar);
		List<usuario^>^ buscarListaUsuarioxUser(String^ user);
		List<usuario^>^ buscarTotalUsuarios();
		void actualizarUsuario(int codigouser, String^ user, String^ cont, String^ contacto, int numUsos);
		void escribirArchivoUser(List<usuario^>^ ListaUsuarios);
		void eliminarUsuario(int cod);
		void agregarUsuario(int codidgo, String^ user, String^ cont, String^ contacto, int numUsos);
		int validacionCodifo(int coddd);


	};
}