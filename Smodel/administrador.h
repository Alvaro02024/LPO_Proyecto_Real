#pragma once

using namespace System;

namespace Smodel {
	public ref class administrador {
	private:
		int codigo;
		String^ user;
		String^ contrase�a;
		String^ contacto;
	public:
		administrador();
		administrador(int codigo, String^ user, String^ contrase�a, String^ contacto);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getUser();
		void setUser(String^ user);
		String^ getContrase�a();
		void setContrase�a(String^ contrase�a);
		String^ getContacto();
		void setContacto(String^ contacto);

	};
}
