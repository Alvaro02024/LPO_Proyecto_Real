#pragma once

using namespace System;

namespace Smodel {
	public ref class administrador {
	private:
		int codigo;
		String^ user;
		String^ contraseña;
		String^ contacto;
	public:
		administrador();
		administrador(int codigo, String^ user, String^ contraseña, String^ contacto);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getUser();
		void setUser(String^ user);
		String^ getContraseña();
		void setContraseña(String^ contraseña);
		String^ getContacto();
		void setContacto(String^ contacto);

	};
}
