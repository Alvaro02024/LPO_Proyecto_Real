#pragma once
#include "a_opciones.h";
#include "b_opciones.h";


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
	/// Summary for c_logeo
	/// </summary>
	public ref class c_logeo : public System::Windows::Forms::Form
	{
	public:
		c_logeo(void)
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
		~c_logeo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(36, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(513, 106);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Proyecto:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(134, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sistema Control CNC";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(36, 171);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(513, 204);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ingrese sus creedenciales:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(224, 135);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 23);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(224, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 23);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(105, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Contraseña:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(128, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Usuario:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 417);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &c_logeo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(363, 417);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &c_logeo::button2_Click);
			// 
			// c_logeo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 480);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"c_logeo";
			this->Text = L"Iniciar sesión";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON SALIR
		this->Close();
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //BOTON INICIAR
		String^ new_user = this->textBox1->Text;
		String^ new_cont = this->textBox2->Text;

		if ((new_user == "") || (new_cont == "")) {
			MessageBox::Show("Ingrese los creedenciales de su cuenta");
		}
		else {
			administradorController^ objAdminController = gcnew administradorController();
			usuarioController^ objUserController = gcnew usuarioController();

			//Verificacion con BD
			int esAdmin = objAdminController->BD_verificarCuentaAdmin(new_user, new_cont);
			int esUser = objUserController->BD_verificarCuentaUser(new_user, new_cont);

			int codigo = 0;

			if (esAdmin) {
				a_opciones^ AdministradorOpciones = gcnew a_opciones(codigo);
				AdministradorOpciones->ShowDialog();
			}
			else if (esUser) {
				int diasR = 1;
				usuarioController^ usuarioCC = gcnew usuarioController();
				usuario^ Loge = usuarioCC->BD_buscarUsuarioxUser(new_user);
				diasR = Loge->getDiasRestantes();
				String^ contacto = Loge->getContacto();
				if (diasR <= 0) {
					MessageBox::Show("La licencia de su cuenta ha caducado \n" + "Revise su correo: \n" + contacto);
				}
				else {
					b_opciones^ UsuarioOpciones = gcnew b_opciones(codigo, new_user);
					UsuarioOpciones->ShowDialog();
				}
				
			}
			else {
				MessageBox::Show("Creedenciales no válidas");
			}
			this->textBox1->Clear();
			this->textBox2->Clear();
		}
	}
};
}
