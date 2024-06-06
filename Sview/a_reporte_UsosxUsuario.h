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
	/// Summary for a_reporte_UsosxUsuario
	/// </summary>
	public ref class a_reporte_UsosxUsuario : public System::Windows::Forms::Form
	{
	public:
		a_reporte_UsosxUsuario(void)
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
		~a_reporte_UsosxUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(38, 37);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(452, 348);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// a_reporte_UsosxUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(516, 417);
			this->Controls->Add(this->chart1);
			this->Name = L"a_reporte_UsosxUsuario";
			this->Text = L"a_reporte_UsosxUsuario";
			this->Load += gcnew System::EventHandler(this, &a_reporte_UsosxUsuario::a_reporte_UsosxUsuario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void a_reporte_UsosxUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		//LOAD
		aReporteController^ objReporteController = gcnew aReporteController();
		List<numeroUsosxUsuario^>^ listaParaReporte = objReporteController->generaaReporte();
		this->chart1->Series["Series1"];
		for (int i = 0; i < listaParaReporte->Count; i++) {
			this->chart1->Series["Series1"]->Points->Add(listaParaReporte[i]->getNumeroUsos());
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaParaReporte[i]->getNombreUsuario();
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaParaReporte[i]->getNombreUsuario();
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(listaParaReporte[i]->getNumeroUsos());

		}
	}
	};
}
