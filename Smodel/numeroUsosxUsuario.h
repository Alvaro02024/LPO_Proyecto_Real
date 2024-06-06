#pragma once

using namespace System;

namespace Smodel {

	public ref class numeroUsosxUsuario {
		private:
			String^ nombreUsuario;
			int numeroUsos;
	public:
		numeroUsosxUsuario();
		numeroUsosxUsuario(String^ nombreUsuario, int numeroUsos);

		String^ getNombreUsuario();
		void setNombreUsuario(String^ nombreUsuario);
		int getNumeroUsos();
		void setNumeroUsos(int numeroUsos);
	};
}