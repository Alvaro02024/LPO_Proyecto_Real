#pragma once

namespace Sview {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace Smodel;
	using namespace Scontroller;

	/// <summary>
	/// Summary for b_mantenimiento_Codigo_nuevo
	/// </summary>
	public ref class b_mantenimiento_Codigo_nuevo : public System::Windows::Forms::Form
	{
	public:
		b_mantenimiento_Codigo_nuevo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		b_mantenimiento_Codigo_nuevo(String^ user_Registrado)
		{
			InitializeComponent();
			this->user_Registrado = user_Registrado;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~b_mantenimiento_Codigo_nuevo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: String^ user_Registrado;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(23, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(466, 280);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Nueva figura de corte:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"madera", L"acero" });
			this->comboBox1->Location = System::Drawing::Point(168, 155);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(170, 198);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(98, 20);
			this->dateTimePicker1->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(168, 116);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Fecha de creación:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Material:";
			this->label5->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo_nuevo::label3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Nombre del autor:";
			this->label3->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo_nuevo::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre del diseño:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 328);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo_nuevo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(282, 328);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo_nuevo::button2_Click);
			// 
			// b_mantenimiento_Codigo_nuevo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 378);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"b_mantenimiento_Codigo_nuevo";
			this->Text = L"b_mantenimiento_Codigo_nuevo";
			this->Load += gcnew System::EventHandler(this, &b_mantenimiento_Codigo_nuevo::b_mantenimiento_Codigo_nuevo_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON SALIR
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON ACEPTAR
		int codigo = Convert::ToInt32(this->textBox1->Text);
		String^ diseño = this->textBox2->Text;
		String^ autor = this->textBox3->Text;
		String^ fecha = this->dateTimePicker1->Text;
		
		if ((Convert::ToString(codigo) == "") || (diseño == "") || (autor == "") || (fecha == "")) {
			MessageBox::Show("Ingrese todos los datos");
		}
		else {

			String^ NuevoMaterial = this->comboBox1->Text;
			materialController^ matCont = gcnew materialController();
			material^ objNuevoMaterial = matCont->asignarMaterial(NuevoMaterial);

			//Las funciones de asignación asumen que el nombre de diseño es el mismo que el nombre de cada objeto que contrine sus listas
			int par=0;

			corteLineaController^ licControl = gcnew corteLineaController();
			List<String^>^ DatosLCasociadosFC = licControl->DatosCreacionObjetosLC();
			for (int i = 0;i < DatosLCasociadosFC->Count; i++) {
				if (diseño == DatosLCasociadosFC[i]) {
					par = i / 2;
					break;
				}
			}

			List<corteLinea^>^ newCL = licControl->asignarCorteLineaxFigura(DatosLCasociadosFC, par);

			corteCirculoController^ cccCont = gcnew corteCirculoController();
			List<corteCirculo^>^ newCC = cccCont->asignarCorteCirculoxFigura(diseño);

			//Asignación de datos escritos a un nuevo objeto
			figuraController^ nuevaFiguraCorte = gcnew figuraController();
			nuevaFiguraCorte->agregarNuevaFiguraCorte(codigo, diseño, autor, fecha, objNuevoMaterial, newCL, newCC);

			MessageBox::Show("Figura de corte agregada correctamente");
			this->Close();
		}

		
	}
	private: System::Void b_mantenimiento_Codigo_nuevo_Load(System::Object^ sender, System::EventArgs^ e) { //CARGAR LA PANTALLA
		usuarioController^ usuContr = gcnew usuarioController();
		usuario^ objUsuarioRegistrado = usuContr->buscarUsuarioxUser(user_Registrado);
		this->textBox3->Text = objUsuarioRegistrado->getUser();
	}
};
}
