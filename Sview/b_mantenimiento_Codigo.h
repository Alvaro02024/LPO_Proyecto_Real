#pragma once
#include "b_mantenimiento_Codigo_nuevo.h"
#include "b_mantenimiento_Codigo_editar.h"

namespace Sview {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Smodel;
	using namespace System::Collections::Generic;
	using namespace Scontroller;

	/// <summary>
	/// Summary for b_mantenimiento_Codigo
	/// </summary>
	public ref class b_mantenimiento_Codigo : public System::Windows::Forms::Form
	{
	public:
		b_mantenimiento_Codigo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		b_mantenimiento_Codigo(String^ userRegistrado)
		{
			InitializeComponent();
			this->userRegistrado = userRegistrado;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~b_mantenimiento_Codigo()
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
	private: String^ userRegistrado;

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
			this->groupBox1->Location = System::Drawing::Point(22, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(565, 74);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterio de b�squeda:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(425, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(229, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(170, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"C�digo:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(24, 118);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(562, 218);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"C�digo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre del Dise�o";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Nombre del Autor";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Material";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha de Creaci�n";
			this->Column5->Name = L"Column5";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(143, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(276, 361);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(404, 361);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &b_mantenimiento_Codigo::button4_Click);
			// 
			// b_mantenimiento_Codigo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 407);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"b_mantenimiento_Codigo";
			this->Text = L"b_mantenimiento_Codigo";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//BotonBuscar
		this->dataGridView1->Rows->Clear();
		String^ n_codigo = this->textBox1->Text;
		figuraController^ fController = gcnew figuraController();
		List<figuraCorte^>^ listFC = gcnew List<figuraCorte^>();
		if (n_codigo == "") {
			MessageBox::Show("Ingrese criterios de de b�squeda");
		}
		else {
			listFC = fController->buscarFiguraxCodigo(Convert::ToInt32(n_codigo));
			mostrarGrilla(listFC);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//Boton nuevo
		b_mantenimiento_Codigo_nuevo^ nuevo_codigo = gcnew b_mantenimiento_Codigo_nuevo(userRegistrado); //se inicializa con el nombre del usuario
		nuevo_codigo->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//Boton editar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int CodigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		
		usuarioController^ usuarioCont = gcnew usuarioController();
		
		figuraController^ fcController = gcnew figuraController();
		figuraCorte^ objFiguraSeleccionada = fcController->buscar1FiguraxCodigo(CodigoEditar);
		String^ userComparacion2 = objFiguraSeleccionada->getNombreAutor();
		if (userRegistrado != userComparacion2) {
			MessageBox::Show("No puede editar figuras no creadas por Ud.");
		}
		else {
			b_mantenimiento_Codigo_editar^ editar_codigo = gcnew b_mantenimiento_Codigo_editar(userRegistrado, CodigoEditar);
			editar_codigo->ShowDialog();
		}
		
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//Boton eliminar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el �ndice de la �nica fila que he seleccionado*/
		int CodigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		
		usuarioController^ usuarioCont = gcnew usuarioController();
		usuario^ objUsuarioRegistrado = usuarioCont->buscarUsuarioxUser(userRegistrado);
		String^ userComparacion1 = objUsuarioRegistrado->getUser();
		figuraController^ fcController = gcnew figuraController();
		figuraCorte^ objFiguraSeleccionada = fcController->buscar1FiguraxCodigo(CodigoEliminar);
		String^ userComparacion2 = objFiguraSeleccionada->getNombreAutor();
		if (userComparacion1 == userComparacion2) {
			MessageBox::Show("No puede eliminar figuras no creadas por Ud.");
		}
		else {
			figuraController^ fcController = gcnew figuraController();
			fcController->eliminarFigura(CodigoEliminar);
			MessageBox::Show("Se ha eliminado correctamente la figura de corte: \n" + CodigoEliminar);
			this->dataGridView1->Rows->Clear();
		}
	
	}

	private: void mostrarGrilla(List<figuraCorte^>^ listaCortes) { //FUNCI�N MOSTRAR EN LA GRILLA
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaCortes->Count; i++) {
			figuraCorte^ objFC = listaCortes[i];
			array<String^>^ filaGrilla = gcnew array<String^>(5);
			filaGrilla[0] = Convert::ToString(objFC->getCodigo());
			filaGrilla[1] = objFC->getNombreDise�o();
			filaGrilla[2] = objFC->getNombreAutor();
			
			material^ nombre_mat = objFC->getObjMaterial();
			String^ nombreMaterial = nombre_mat->getNombre();

			filaGrilla[3] = nombreMaterial;
			filaGrilla[4] = objFC->getFechaCreacion();

			this->dataGridView1->Rows->Add(filaGrilla);

		}
	}
};
}
