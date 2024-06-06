#pragma once
#include "licencia.h"

using namespace System;

namespace Smodel {
	public ref class usuario {
	private:
		int codigo;
		String^ user;
		String^ contraseña;
		String^ tipoLicencia;
		int diasRestantes;
		String^ contacto;
		int numUsos;
		licencia^ objLicencia;
	public:
        usuario();
        usuario(int codigo, String^ user, String^ contraseña, String^ tipoLicencia, int diasRestantes, String^ contacto, int numUsos, licencia^ objLicencia);

        int getCodigo();
        void setCodigo(int codigo);
        String^ getUser();
        void setUser(String^ user);
        String^ getContraseña();
        void setContraseña(String^ contraseña);
        String^ getTipoLicencia();
        void setTipoLicencia(String^ tipoLicencia);
        int getDiasRestantes();
        void setDiasRestantes(int diasRestantes);
        String^ getContacto();
        void setContacto(String^ contacto);
        int getNumUsos();
        void setNumUsos(int numUsos);
        licencia^ getObjLicencia();
        void setObjLicencia(licencia^ objLicencia);
	};
}