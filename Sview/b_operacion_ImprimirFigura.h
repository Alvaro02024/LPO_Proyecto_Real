#pragma once
#include "b_operacion_ImprimirFigura_Seleccion.h"
#include "math.h"

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
	/// Resumen de b_operacion_ImprimirFigura
	/// </summary>
	public ref class b_operacion_ImprimirFigura : public System::Windows::Forms::Form
	{
	public:
		b_operacion_ImprimirFigura(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		
		b_operacion_ImprimirFigura(int codigoImpresion, int codigoUsuario)
		{
			InitializeComponent();
			this->codigoImpresion = codigoImpresion;
			this->codigoUsuario = codigoUsuario;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~b_operacion_ImprimirFigura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: int codigoImpresion;
	private: int codigoUsuario;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;




	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(192, 523);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Imprimir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(326, 523);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Location = System::Drawing::Point(23, 352);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(599, 157);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Detalles de t�cnicos de corte:";
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(169, 90);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 1;
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(169, 38);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 1;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(34, 93);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"N�mero de pasos:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(25, 41);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Tiempo estimado (s) :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(23, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(585, 176);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Informaci�n de impresi�n:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(494, 103);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Limpiar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(494, 64);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Verificar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::button5_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox5);
			this->groupBox4->Controls->Add(this->textBox6);
			this->groupBox4->Controls->Add(this->textBox1);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Location = System::Drawing::Point(289, 19);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(186, 140);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Dimensiones Material:";
			this->groupBox4->Enter += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::groupBox4_Enter);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(96, 19);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(67, 20);
			this->textBox5->TabIndex = 1;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(96, 100);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(67, 20);
			this->textBox6->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(96, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(67, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(33, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Largo (X):";
			this->label7->Click += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Ancho (Y):";
			this->label6->Click += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::label5_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Alto (Z):";
			this->label5->Click += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::label5_Click);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(156, 133);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(156, 100);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 1;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(156, 26);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Autor:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Fecha de impresi�n:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre de impresi�n:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"C�digo de corte:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Location = System::Drawing::Point(23, 222);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(406, 115);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Detalles figura:";
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(243, 71);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 1;
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(243, 31);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 1;
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(74, 71);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 1;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(74, 31);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 74);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Autor:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(190, 74);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Material:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(190, 34);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Dise�o:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(25, 34);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"C�digo:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(473, 235);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Buscar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(473, 286);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Limpiar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::button4_Click);
			// 
			// b_operacion_ImprimirFigura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(643, 567);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"b_operacion_ImprimirFigura";
			this->Text = L"b_operacion_ImprimirFigura";
			this->Load += gcnew System::EventHandler(this, &b_operacion_ImprimirFigura::b_operacion_ImprimirFigura_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Bot�n imprimir
		if ((this->textBox1->Text == "") || (this->textBox2->Text == "") || (this->textBox3->Text == "") || (this->textBox8->Text == "") || (this->textBox13->Text == "")) {
			MessageBox::Show("Ingrese datos para el corte");
		}
		else {
			String^ codigoFiguraImprimir = this->textBox8->Text;
			figuraController^ figContr = gcnew figuraController();
			figuraCorte^ figuraImprimir = figContr->buscar1FiguraxCodigo(Convert::ToInt32(codigoFiguraImprimir));
			impresionController^ imprimirControlador = gcnew impresionController();
			//imprimirControlador->textoImpresion();

			int codigo = Convert::ToInt32(this->textBox7->Text);
			String^ nombreImpreison = this->textBox2->Text;
			String^ fecha = this->textBox3->Text;
			String^ nombreAutor = this->textBox4->Text;

			int ld1 = Convert::ToInt32(this->textBox5->Text);
			int ld2 = Convert::ToInt32(this->textBox1->Text);
			int ld3 = Convert::ToInt32(this->textBox6->Text);

			int dim = ld1 * ld2 * ld3;


			impresionFC^ objImpresion = gcnew impresionFC(codigo, nombreImpreison, fecha, nombreAutor, Convert::ToString(dim), Convert::ToInt32(codigoFiguraImprimir));
			imprimirControlador->textoImpresion(objImpresion);

			List<impresionFC^>^ listaImpresiones = imprimirControlador->TotalImpresiones();
			listaImpresiones->Add(objImpresion);
			imprimirControlador->guardarImpresion(listaImpresiones);

			usuarioController^ usuController = gcnew usuarioController();
			usuario^ usuarioSuma = usuController->buscarUsuarioxCodigo(this->codigoUsuario);
			int num = (usuarioSuma->getNumUsos()) + 1;
			usuarioSuma->setNumUsos(num);

			MessageBox::Show("Orden de impresi�n a�adida correctamente. \n" + "Espere a su impresi�n");
			this->Close();
			
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Bot�n cancelar
		this-> Close();
	}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	//Bot�n limpiar
	this->textBox1->Clear(); //(Y)
	this->textBox2->Clear(); //nombre
	//this->textBox3->Clear(); //fecah
	//this->textBox4->Clear(); //autor
	this->textBox5->Clear(); // (Z)
	this->textBox6->Clear(); //(X)
	this->textBox7->Clear(); //Codigo

}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//Bot�n limpiar datos figura seleccionada
	codigoImpresion = 0;
	this->textBox8->Clear();
	this->textBox9->Clear();
	this->textBox10->Clear();
	this->textBox11->Clear();
	this->textBox12->Clear();
	this->textBox13->Clear();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//Bot�n buscar
	figuraCorte^ objFiguraCCorte = gcnew figuraCorte();

	b_operacion_ImprimirFigura_Seleccion^ seleccionarVentana = gcnew b_operacion_ImprimirFigura_Seleccion(objFiguraCCorte, codigoUsuario);
	seleccionarVentana->ShowDialog();
	figuraController^ fgContorller = gcnew figuraController();
	figuraCorte^ objFC = fgContorller->buscar1FiguraxCodigo(objFiguraCCorte->getCodigo());
	this->textBox8->Text = Convert::ToString(objFC->getCodigo());
	this->textBox9->Text = objFC->getNombreAutor();
	this->textBox10->Text = objFC->getNombreDise�o();;
	material^ objMat = objFC->getObjMaterial();
	this->textBox11->Text = objMat->getNombre();

	double distancia = fgContorller->distanciaTotal(objFC);
	double velocidad = objMat->getVelocidadCorte();
	int tiempo = ceil(distancia / velocidad);
	this->textBox12->Text = Convert::ToString(tiempo);

	List<corteLinea^>^ lista1 = objFC->getListCorteLinea();
	int pasos = lista1->Count;
	this->textBox13->Text = Convert::ToString(pasos);

	
	



}
private: System::Void b_operacion_ImprimirFigura_Load(System::Object^ sender, System::EventArgs^ e) {
	//CARGA
	usuarioController^ userController = gcnew usuarioController();
	usuario^ user = userController->buscarUsuarioxCodigo(codigoUsuario);
	this->textBox4->Text = user->getUser();
	DateTime Hoy = DateTime::Now;
	String^ hoyFormato = Hoy.ToString("dd//MM//yyyy");
		this->textBox3->Text = hoyFormato;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//verificar que el codigo de la impresion no se repita
	String^ cadenaComprar = this->textBox7->Text;
	impresionController^ imContr = gcnew impresionController();
	int esValido = imContr->repetido(Convert::ToInt32(cadenaComprar));
	if (esValido) {
		MessageBox::Show("Datos v�lidos");
	}
	else {
		MessageBox::Show("C�digo no v�lido");
		this->textBox1->Clear(); //(Y)
		this->textBox2->Clear(); //nombre
		//this->textBox3->Clear(); //fecah
		//this->textBox4->Clear(); //autor
		this->textBox5->Clear(); // (Z)
		this->textBox6->Clear(); //(X)
		this->textBox7->Clear(); //Codigo

	}
}
};
}
