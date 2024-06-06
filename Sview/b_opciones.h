#pragma once
#include "b_mantenimiento_Codigo.h"
#include"b_operacion_ImprimirFigura.h"

namespace Sview {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Smodel;
	using namespace Scontroller;

	/// <summary>
	/// Summary for b_opciones
	/// </summary>
	public ref class b_opciones : public System::Windows::Forms::Form
	{
	public:
		b_opciones(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		b_opciones(int codigo, String^ user)
		{
			InitializeComponent();
			this->codigo = codigo;
			this->user = user;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~b_opciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: int codigo;
	private: String^ user;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(155, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cerrar sesión";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &b_opciones::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(23, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(384, 76);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Bienvenido:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(155, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"USUARIO";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(23, 122);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(384, 236);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Seleccione una opción:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(117, 154);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Imprimir figura corte";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &b_opciones::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(94, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Mantenimiento figuras de corte";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &b_opciones::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(145, 49);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Mi historial";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &b_opciones::button2_Click);
			// 
			// b_opciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 399);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Name = L"b_opciones";
			this->Text = L"b_opciones";
			this->Load += gcnew System::EventHandler(this, &b_opciones::b_opciones_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void b_opciones_Load(System::Object^ sender, System::EventArgs^ e) { //CARGA LA VENTANA DESPUÉS DEL LOGEO
		 //usuarioController^ userController = gcnew usuarioController();
		 //usuario^ objUsuarioRegistrado = userController->buscarUsuarioxUser(user);
		/*figuraController^ figuraControlador = gcnew figuraController();
		corteLineaController^ LCControlador = gcnew corteLineaController();
		corteCirculoController^ CCControlador = gcnew corteCirculoController();
		List<figuraCorte^>^ ListaActualizar = figuraControlador->buscarFiguraxALL();

		List<corteLinea^>^ LISTALC = gcnew List<corteLinea^>();
		List<corteCirculo^>^ LISTACC = gcnew List<corteCirculo^>();

		for (int i = 0; i < ListaActualizar->Count; i++) {
			LISTALC->Clear();
			LISTACC->Clear();
			String^ nombreDiseñoAsignar = ListaActualizar[i]->getNombreDiseño();
			LISTALC = LCControlador->asignarCorteLineaxFigura(nombreDiseñoAsignar);
			LISTACC = CCControlador->asignarCorteCirculoxFigura(nombreDiseñoAsignar);
			ListaActualizar[i]->setListCorteLinea(LISTALC);
			ListaActualizar[i]->setListCorteCirculo(LISTACC);
		}*/
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON CERRAR SESIÓN
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //BOTÓN HISTORIAL
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //BOTÓN MANTENIMIENTO FIGURAS DE CORTE
		b_mantenimiento_Codigo^ mantenimientoUser = gcnew b_mantenimiento_Codigo(user);
		mantenimientoUser->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //BOTÓN IMPRIMIR FIGURA DE CORTE
		usuarioController^ userController = gcnew usuarioController();
		usuario^ objUsuarioRegistrado = userController->buscarUsuarioxUser(user);
		int diasRestantesUser = objUsuarioRegistrado->getDiasRestantes();
		int numUsos = objUsuarioRegistrado->getNumUsos();
		int codigoUsuario = objUsuarioRegistrado->getCodigo();


		licencia^ licenciaUSER = objUsuarioRegistrado->getObjLicencia();
		int usosMAX = licenciaUSER->getNumUsuarios();
				
		String^ correo = objUsuarioRegistrado->getContacto();
		if ((diasRestantesUser < 0) || (numUsos > usosMAX)) {
			MessageBox::Show("Su licencia no permite más usos de la máquina por favor revise la cuenta asociada al correo: \n" + correo);
		}
		else {
			b_operacion_ImprimirFigura^ ventanImpresion = gcnew b_operacion_ImprimirFigura(0, codigoUsuario);
			ventanImpresion->ShowDialog();

		}
	}
	
};
}
