#pragma once
#include "a_mantenimiento_Posicion_editar.h"
#include "a_mantenimiento_Posicion_nuevo.h"

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
	/// Summary for a_mantenimiento_Posicion
	/// </summary>
	public ref class a_mantenimiento_Posicion : public System::Windows::Forms::Form
	{
	public:
		a_mantenimiento_Posicion(void)
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
		~a_mantenimiento_Posicion()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

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
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(446, 62);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Codigo de posición:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(306, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &a_mantenimiento_Posicion::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(150, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(101, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 94);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(443, 354);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Eje X";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Eje Y";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Eje Z";
			this->Column4->Name = L"Column4";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(81, 467);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &a_mantenimiento_Posicion::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(197, 467);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &a_mantenimiento_Posicion::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(318, 467);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &a_mantenimiento_Posicion::button4_Click);
			// 
			// a_mantenimiento_Posicion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 502);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"a_mantenimiento_Posicion";
			this->Text = L"a_mantenimiento_Posicion";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
		//Botón buscar
		this->dataGridView1->Rows->Clear();
		String^ codigoB = this->textBox1->Text;
		posicionController^ pContr = gcnew posicionController();
		List<posicion^>^ lP1 = gcnew List<posicion^>();
		List<posicion^>^ lP2 = gcnew List<posicion^>();
		if (codigoB == "") {
			lP1 = pContr->BD_buscarPosiciones();//Cambio a función con base de datos
			mostrarGrilla(lP1);
		}
		else {
			lP2 = pContr->BD_buscarPosicionxCodigo(Convert::ToInt32(codigoB));//Cambio a función con base de datos
			mostrarGrilla(lP2);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Botón nuevo
		a_mantenimiento_Posicion_nuevo^ nuevoVentana = gcnew a_mantenimiento_Posicion_nuevo();
		nuevoVentana->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Botón editar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int CodigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		a_mantenimiento_Posicion_editar^ editarVentana = gcnew a_mantenimiento_Posicion_editar(CodigoEditar);
		editarVentana->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Boton eliminar
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int CodigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		posicionController^ PP = gcnew posicionController();
		PP->BD_eliminarPosicion(CodigoEliminar); //Cambio a función con base de datos
		MessageBox::Show("Se ha eliminado correctamente la posición: \n" + CodigoEliminar);
		this->dataGridView1->Rows->Clear();
	}
	private: void mostrarGrilla(List<posicion^>^ listaAgregar) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaAgregar->Count; i++) {
			posicion^ objPOS = listaAgregar[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = Convert::ToString(objPOS->getCodigo());
			filaGrilla[1] = Convert::ToString(objPOS->getEjeX());
			filaGrilla[2] = Convert::ToString(objPOS->getEjeY());
			filaGrilla[3] = Convert::ToString(objPOS->getEjeZ());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
};
}
