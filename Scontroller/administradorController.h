#pragma once

namespace Scontroller {

	using namespace Smodel;
	using namespace System;

	public ref class administradorController {
	public:
		administradorController();
		int verificarCuentaAdmin(String^ User, String^ Cont);
	};
}
