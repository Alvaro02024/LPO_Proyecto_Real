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
	/// Summary for b_Reporte_ImpresionesxFiguraCorte
	/// </summary>
	public ref class b_Reporte_ImpresionesxFiguraCorte : public System::Windows::Forms::Form
	{
	public:
		b_Reporte_ImpresionesxFiguraCorte(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		b_Reporte_ImpresionesxFiguraCorte(String^ nombreUser)
		{
			InitializeComponent();
			this->nombreUser = nombreUser;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~b_Reporte_ImpresionesxFiguraCorte()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: String^ nombreUser;
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
			this->chart1->Location = System::Drawing::Point(25, 26);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(668, 322);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// b_Reporte_ImpresionesxFiguraCorte
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 383);
			this->Controls->Add(this->chart1);
			this->Name = L"b_Reporte_ImpresionesxFiguraCorte";
			this->Text = L"b_Reporte_ImpresionesxFiguraCorte";
			this->Load += gcnew System::EventHandler(this, &b_Reporte_ImpresionesxFiguraCorte::b_Reporte_ImpresionesxFiguraCorte_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void b_Reporte_ImpresionesxFiguraCorte_Load(System::Object^ sender, System::EventArgs^ e) {
		//CArga
		bReporteController^ reporteController = gcnew bReporteController();
		List<ImpresionesxFiguraCorte^>^ listaParaReporte = reporteController->generaReport(nombreUser);
		this->chart1->Series["Series1"];
		for (int i = 0; i < listaParaReporte->Count;i++) {
			this->chart1->Series["Series1"]->Points->Add(listaParaReporte[i]->getCantidadImpresiones());
			this->chart1->Series["Series1"]->Points[i]->AxisLabel = listaParaReporte[i]->getNombreFC();
			this->chart1->Series["Series1"]->Points[i]->LegendText = listaParaReporte[i]->getNombreFC();
			this->chart1->Series["Series1"]->Points[i]->Label = Convert::ToString(listaParaReporte[i]->getCantidadImpresiones());
		}
		
	}
	};
}
