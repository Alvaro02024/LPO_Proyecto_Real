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
	/// Summary for b_mantenimiento_Codigo_editar
	/// </summary>
	public ref class b_mantenimiento_Codigo_editar : public System::Windows::Forms::Form
	{
	public:
		b_mantenimiento_Codigo_editar(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		b_mantenimiento_Codigo_editar(String^ usuarioRegistrado, int codigoFiguraSeleccionada)
		{
			InitializeComponent();
			this->usuarioRegistrado = usuarioRegistrado;
			this->codigoFiguraSeleccionada = codigoFiguraSeleccionada;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~b_mantenimiento_Codigo_editar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: String^ usuarioRegistrado;
	private: int codigoFiguraSeleccionada;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(23, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(466, 280);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Editar figura corte:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(169, 202);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(105, 20);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"madera", L"acero" });
			this->comboBox1->Location = System::Drawing::Point(169, 158);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(169, 117);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(169, 78);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(169, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 202);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Fecha de creación:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Material:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nombre del autor:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre del diseño:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(125, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo_editar::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(309, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo_editar::button2_Click);
			// 
			// b_mantenimiento_Codigo_editar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 378);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"b_mantenimiento_Codigo_editar";
			this->Text = L"b_mantenimiento_Codigo_editar";
			this->Load += gcnew System::EventHandler(this, &b_mantenimiento_Codigo_editar::b_mantenimiento_Codigo_editar_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {  //BOTÓN ACEPTAR
		int codigo = Convert::ToInt32(this->textBox1->Text);
		String^ diseño = this->textBox2->Text;
		String^ autor = this->textBox3->Text;
		String^ fecha = this->dateTimePicker1->Text;
		String^ material = this->comboBox1->Text;
		if ((Convert::ToString(codigo) == "") || (diseño == "") || (autor == "") || (fecha == "")) {
			MessageBox::Show("Ingrese todos los datos");
		}
		else {
			figuraController^ fgCt = gcnew figuraController();
			fgCt->actualizarFigura(codigo, diseño, autor, fecha, material);
			MessageBox::Show("Datos actualizados correctamente");
			this->Close();
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON CANCELAR
		this->Close();
	}

	private: System::Void b_mantenimiento_Codigo_editar_Load(System::Object^ sender, System::EventArgs^ e) { //CARGA DE PANTALLA
		usuarioController^ userContr = gcnew usuarioController();
		usuario^ usuarioNuevo = userContr->buscarUsuarioxUser(usuarioRegistrado);

		figuraController^ fgContr = gcnew figuraController();
		figuraCorte^ objFiguraSeleccionada = fgContr->buscar1FiguraxCodigo(codigoFiguraSeleccionada);

		this->textBox1->Text = Convert::ToString(codigoFiguraSeleccionada);
		
		this->textBox2->Text = objFiguraSeleccionada->getNombreDiseño();
		this->textBox3->Text = objFiguraSeleccionada->getNombreAutor();
		this->dateTimePicker1->Text = objFiguraSeleccionada->getFechaCreacion();
		
		material^ materialFGS = objFiguraSeleccionada->getObjMaterial();
		this->comboBox1->Text = materialFGS->getNombre();
	}
};
}
