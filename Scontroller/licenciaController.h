#pragma once

namespace Scontroller {

	using namespace Smodel;
	using namespace System;

	public ref class licenciaController {
	public:
		licenciaController();
		licencia^ asignarLicencia(int codigo_user);
		licencia^ buscarLicenciaxCodigo(int codigo_lic);
		int diasRestantesLicencia(String^ fechaVencimiento);
	};
}
