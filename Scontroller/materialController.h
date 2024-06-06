#pragma once

namespace Scontroller {
	 
	using namespace Smodel;
	using namespace System;
	
	public ref class materialController {
	public:
		materialController();
		material^ asignarMaterial(String^ nombreMaterial);
		String^ nombreMaterial(material^ obj);
	};
}