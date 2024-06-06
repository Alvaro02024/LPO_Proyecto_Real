#pragma once
#include "a_mantenimiento_Codigo.h"
#include "a_mantenimiento_Posicion.h"
#include "a_historial.h"
#include "a_operacion_ImprimirFigura.h"
#include "a_operacion_ImprimirManual.h"

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
	/// Summary for a_opciones
	/// </summary>
	public ref class a_opciones : public System::Windows::Forms::Form
	{
	public:
		a_opciones(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		a_opciones(int codigo)
		{
			InitializeComponent();
			this->codigo = codigo;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~a_opciones()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: int codigo;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;
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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(180, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cerrar sesión";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &a_opciones::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(26, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(384, 76);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Bienvenido:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(142, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADMINISTRADOR";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(30, 116);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(379, 227);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Seleccione una opción:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(87, 110);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(219, 23);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Mantenimiento posiciones de corte";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &a_opciones::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(129, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(163, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Impresión manual";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &a_opciones::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(109, 151);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(183, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Imprimir figura corte";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &a_opciones::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(109, 64);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Mantenimiento figuras de corte";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &a_opciones::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(141, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Historial de máquina";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &a_opciones::button2_Click);
			// 
			// a_opciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 399);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Name = L"a_opciones";
			this->Text = L"a_opciones";
			this->Load += gcnew System::EventHandler(this, &a_opciones::a_opciones_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON CERRAR SESIÓN
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Historal de máquina
		a_historial^ historialAdmin = gcnew a_historial();
		historialAdmin->ShowDialog();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { //mantenimiento FC
		a_mantenimiento_Codigo^ mantenimientoAdmin = gcnew a_mantenimiento_Codigo();
		mantenimientoAdmin->ShowDialog();
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { //mantenimiento posiciones
		a_mantenimiento_Posicion^ mantenimientoPos = gcnew a_mantenimiento_Posicion();
		mantenimientoPos->ShowDialog();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { //impresion FC
		a_operacion_ImprimirFigura^ ventaNEW = gcnew a_operacion_ImprimirFigura();
		ventaNEW->ShowDialog();

	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { //impresion manual
	}
	private: System::Void a_opciones_Load(System::Object^ sender, System::EventArgs^ e) { 
		//Carga de pantalla
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
};
}
