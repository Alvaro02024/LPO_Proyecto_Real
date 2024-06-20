#pragma once
#include "a_mantenimiento_Usuario_editar.h"
#include "a_mantenimiento_Usuario_nuevo.h"

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
	/// Summary for a_mantenimiento_Usuario
	/// </summary>
	public ref class a_mantenimiento_Usuario : public System::Windows::Forms::Form
	{
	public:
		a_mantenimiento_Usuario(void)
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
		~a_mantenimiento_Usuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(23, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(716, 74);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de búsqueda:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(520, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &a_mantenimiento_Usuario::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(324, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(265, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario:";
			this->label1->Click += gcnew System::EventHandler(this, &a_mantenimiento_Usuario::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(27, 105);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(712, 226);
			this->dataGridView1->TabIndex = 3;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Usuario";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Tipo de Licencia";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Días restantes";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Contacto";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Número de usos";
			this->Column6->Name = L"Column6";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(177, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &a_mantenimiento_Usuario::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(352, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &a_mantenimiento_Usuario::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(530, 355);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &a_mantenimiento_Usuario::button4_Click);
			// 
			// a_mantenimiento_Usuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 407);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"a_mantenimiento_Usuario";
			this->Text = L"a_mantenimiento_Usuario";
			this->Load += gcnew System::EventHandler(this, &a_mantenimiento_Usuario::a_mantenimiento_Usuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //Botón buscar
		String^ userAnalizarMantenimiento = this->textBox1->Text;
		usuarioController^ userController = gcnew usuarioController();
		List<usuario^>^ listaUsuarios = gcnew List<usuario^>();
		List<usuario^>^ listaUsuarios2 = gcnew List<usuario^>();
		if (userAnalizarMantenimiento == "") {
			//listaUsuarios = userController->buscarTotalUsuarios();
			listaUsuarios = userController->BD_buscarTotalUsuarios();
			MostrarGrilla(listaUsuarios);
			
		}
		else {
			//listaUsuarios2 = userController->buscarListaUsuarioxUser(userAnalizarMantenimiento);
			listaUsuarios2 = userController->BD_buscarListaUsuarioxUser(userAnalizarMantenimiento);
			MostrarGrilla(listaUsuarios2);
		}
		

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { 
		//Botón nuevo
		a_mantenimiento_Usuario_nuevo^ mantNuevo = gcnew a_mantenimiento_Usuario_nuevo();
		mantNuevo->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Botón editar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int CodigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		a_mantenimiento_Usuario_editar^ mantEditar = gcnew a_mantenimiento_Usuario_editar(CodigoEditar);
		mantEditar->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Botón eliminar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; 
		int CodigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		usuarioController^ uController = gcnew usuarioController();
		uController->BD_eliminarUsuario(CodigoEliminar); //cambio a el uso de BD
		MessageBox::Show("Se ha eliminado correctamente el usuario: \n" + CodigoEliminar);
		this->dataGridView1->Rows->Clear();
	}


	private: void MostrarGrilla(List<usuario^>^ lista) {
	this->dataGridView1->Rows->Clear();
	   for (int i = 0; i < lista->Count; i++) {
		   usuario^ objU = lista[i];
		   array<String^>^ filaGrilla = gcnew array<String^>(6);
		   filaGrilla[0] = Convert::ToString(objU->getCodigo());
		   filaGrilla[1] = objU->getUser();
		   filaGrilla[2] = objU->getTipoLicencia();
		   filaGrilla[3] =	Convert::ToString(objU->getDiasRestantes());
		   filaGrilla[4] = objU->getContacto();
		   filaGrilla[5] = Convert::ToString(objU->getNumUsos());
		   this->dataGridView1->Rows->Add(filaGrilla);
		}
	}


private: System::Void a_mantenimiento_Usuario_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
