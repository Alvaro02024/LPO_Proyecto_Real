#pragma once

namespace Sview {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Smodel;
	using namespace Scontroller;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for a_mantenimiento_Usuario_nuevo
	/// </summary>
	public ref class a_mantenimiento_Usuario_nuevo : public System::Windows::Forms::Form
	{
	public:
		a_mantenimiento_Usuario_nuevo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~a_mantenimiento_Usuario_nuevo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
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
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(36, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(359, 307);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Nuevo usuario:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(169, 220);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 1;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(169, 176);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(169, 129);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(169, 85);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(169, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(60, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"N�mero de usos:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(60, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Contacto:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Contrase�a:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"User:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"C�digo:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(112, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &a_mantenimiento_Usuario_nuevo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(245, 369);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &a_mantenimiento_Usuario_nuevo::button2_Click);
			// 
			// a_mantenimiento_Usuario_nuevo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 413);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"a_mantenimiento_Usuario_nuevo";
			this->Text = L"a_mantenimiento_Usuario_nuevo";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Bot�n cerrar
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Bot�n crear
		int validacion = 1;
		int codigo = Convert::ToInt32(this->textBox1->Text);
		String^ user = this->textBox2->Text;
		String^ pass = this->textBox3->Text;
		String^ contacto = this->textBox4->Text;
		int numUsos = Convert::ToInt32(this->textBox5->Text);

		int codigoLicencia = codigo / 100;

		licenciaController^ licController = gcnew licenciaController();
		licencia^ objLicencia = licController->BD_buscarLicenciaxCodigo(codigoLicencia);

		String^ tipoLicencia = objLicencia->getTipo();
		String^ fechaVencimiento = objLicencia->getFechaVencimiento();
		int diaRes = licController->diasRestantesLicencia(fechaVencimiento);
						
		if ((this->textBox1->Text == "")||(user == "") || (pass == "") || (contacto == "") || (this->textBox5->Text == "")) {
			MessageBox::Show("Complete todos los campos");
		}
		else {
			usuarioController^ controladorUsuario = gcnew usuarioController();
			validacion = controladorUsuario->validacionCodifo(codigo);
			if (validacion) {
				//controladorUsuario->agregarUsuario(codigo, user, pass, contacto, numUsos);
				controladorUsuario->BD_agregarUsuario(codigo, user, pass, tipoLicencia, diaRes, contacto, numUsos, codigoLicencia);
				MessageBox::Show("Usuario creado correctamente");
				this->Close();
			}
			else {
				MessageBox::Show("El codigo ha registrar ya se encuentra dentro de la base de datos. \n" + "Intente de nuevo con otro c�digo");
			}
		}
	}
};
}
