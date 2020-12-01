#pragma once
#include "integrate.h"

namespace lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::ComboBox^ comboBox1;







	private: ZedGraph::ZedGraphControl^ zedGraphControl2;







	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ y;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ vi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ uv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v1v2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;














	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->y = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->uv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v1v2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(22, 20);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(456, 379);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(22, 484);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(286, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(187, 445);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"10";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->number,
					this->x, this->y, this->vi, this->v2i, this->uv, this->v1v2, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(998, 20);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(362, 379);
			this->dataGridView1->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Тестовая", L"Основная" });
			this->comboBox1->Location = System::Drawing::Point(22, 444);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox1_SelectedIndexChanged);
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(515, 20);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(455, 379);
			this->zedGraphControl2->TabIndex = 5;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column4,
					this->Column5, this->Column1, this->Column2, this->Column3, this->Column7
			});
			this->dataGridView2->Location = System::Drawing::Point(515, 422);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(845, 149);
			this->dataGridView2->TabIndex = 6;
			// 
			// number
			// 
			this->number->HeaderText = L"№ узла";
			this->number->MinimumWidth = 3;
			this->number->Name = L"number";
			this->number->Width = 50;
			// 
			// x
			// 
			this->x->HeaderText = L"xi";
			this->x->MinimumWidth = 3;
			this->x->Name = L"x";
			this->x->Width = 50;
			// 
			// y
			// 
			this->y->HeaderText = L"u(xi)";
			this->y->MinimumWidth = 6;
			this->y->Name = L"y";
			this->y->Width = 125;
			// 
			// vi
			// 
			this->vi->HeaderText = L"v(xi)";
			this->vi->Name = L"vi";
			// 
			// v2i
			// 
			this->v2i->HeaderText = L"v2(xi)";
			this->v2i->Name = L"v2i";
			// 
			// uv
			// 
			this->uv->HeaderText = L"u(xi)-v(xi)";
			this->uv->Name = L"uv";
			this->uv->Width = 200;
			// 
			// v1v2
			// 
			this->v1v2->HeaderText = L"v(xi)-v2(xi)";
			this->v1v2->Name = L"v1v2";
			this->v1v2->Width = 200;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"";
			this->Column6->Name = L"Column6";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Для решения задачи использована равномерная сетка с числом разбиений n:";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Задача должна быть решена с погрешностью не более eps:";
			this->Column5->Name = L"Column5";
			// 
			// Column1
			// 
			this->Column1->FillWeight = 200;
			this->Column1->HeaderText = L"Задача решена с погрешностью eps1:";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 200;
			this->Column2->HeaderText = L"Задача решена с погрешностью eps2:";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 200;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Максимальное отклонение аналитического и численного решения наблюдается в точке x"
				L":";
			this->Column3->Name = L"Column3";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Максимальное разность численных решений в общих узлах сетки наблюдается в точке х"
				L":";
			this->Column7->Name = L"Column7";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 425);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Выбор задачи:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(187, 424);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Размерность сетки:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1381, 582);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		//button1_Click.Enabled = false;
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		panel2->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();
		double xmin_limit = -0.1;
		double xmax_limit = 1.1;
		int n = Convert::ToInt32(textBox1->Text);
		double h = 1. / n;

		double x = 0;
		vector<double> a, b, c, f, result1, result2;
		double eps = 0;
		double abs_difference = 0;
		int selected_task = comboBox1->SelectedIndex;//0 - тестовая или 1 - основная

		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		int control_x = 0;
		if (selected_task == 0)
		{
			panel->Title->Text = "Графики аналитического и численного решений";
			panel->XAxis->Title->Text = "х ";
			panel->YAxis->Title->Text = "";
			panel2->Title->Text = "Разность аналитического и численного решения";
			panel2->XAxis->Title->Text = "х ";
			panel2->YAxis->Title->Text = "";
			diagonals(n, a, c, b, k1_test, k2_test, q1_test, q2_test);
			f = free_comp(n, f1_test, f2_test);
			result2 = fun(n);

			result1 = progonka(n, a, c, b, f);
			
			for (int i = 0; i < n + 1; i++)
			{
				f1_list->Add(x, result2[i]);
				f2_list->Add(x, result1[i]);
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x;
				dataGridView1->Rows[i]->Cells[2]->Value = result2[i];
				dataGridView1->Rows[i]->Cells[3]->Value = result1[i];
				abs_difference = abs(result1[i] - result2[i]);
				f3_list->Add(x, abs_difference);
				if (abs_difference > eps)
				{
					eps = abs_difference;
					control_x = i;
				}
				dataGridView1->Rows[i]->Cells[5]->Value = abs_difference;
				x = x + h;
			}
			dataGridView2->Rows[0]->Cells[0]->Value = n;
			dataGridView2->Rows[0]->Cells[1]->Value = "0.5e-6";
			dataGridView2->Rows[0]->Cells[2]->Value = eps;
			dataGridView2->Rows[0]->Cells[4]->Value = control_x*h;
			LineItem Curve1 = panel->AddCurve("u(xi)", f1_list, Color::Red, SymbolType::None);
			LineItem Curve2 = panel->AddCurve("v(xi)", f2_list, Color::Blue, SymbolType::None);
			panel->XAxis->Scale->Min = xmin_limit;
			panel->XAxis->Scale->Max = xmax_limit;
			LineItem Curve3 = panel2->AddCurve("u(xi)-v(xi)", f3_list, Color::Red, SymbolType::None);
			zedGraphControl1->AxisChange();
			// Обновляем график
			zedGraphControl1->Invalidate();
			zedGraphControl2->AxisChange();
			// Обновляем график
			zedGraphControl2->Invalidate();
		}
		else
		{

			panel->Title->Text = "Графики численного решения и численного решения с половинным шагом";
			panel->XAxis->Title->Text = "х ";
			panel->YAxis->Title->Text = "";
			panel2->Title->Text = "Разность численных решений в общих узлах";
			panel2->XAxis->Title->Text = "х ";
			panel2->YAxis->Title->Text = "";
			diagonals(n, a, c, b, k1, k2, q1, q2);
			f = free_comp(n, f1, f2);

			result1 = progonka(n, a, c, b, f);
			diagonals(2 * n, a, c, b, k1, k2, q1, q2);
			f = free_comp(2 * n, f1, f2);
			result2 = progonka(2 * n, a, c, b, f);

			
			for (int i = 0; i < n + 1; i++)
			{
				f1_list->Add(x, result1[i]);
				f2_list->Add(x, result2[2 * i]);
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x;
				dataGridView1->Rows[i]->Cells[3]->Value = result1[i];
				dataGridView1->Rows[i]->Cells[4]->Value = result2[2 * i];
				abs_difference = abs(result1[i] - result2[2 * i]);
				f3_list->Add(x, abs_difference);
				if (abs_difference > eps)
				{
					eps = abs_difference;
					control_x = i;
				}
				dataGridView1->Rows[i]->Cells[6]->Value = abs_difference;
				x = x + h;
			}
			dataGridView2->Rows[0]->Cells[0]->Value = n;
			dataGridView2->Rows[0]->Cells[1]->Value = "0.5e-6";
			dataGridView2->Rows[0]->Cells[3]->Value = eps;
			dataGridView2->Rows[0]->Cells[5]->Value = control_x*h;
			LineItem Curve1 = panel->AddCurve("v(xi)", f1_list, Color::Red, SymbolType::None);
			LineItem Curve2 = panel->AddCurve("v2(xi)", f2_list, Color::Blue, SymbolType::None);
			panel->XAxis->Scale->Min = xmin_limit;
			panel->XAxis->Scale->Max = xmax_limit;
			LineItem Curve3 = panel2->AddCurve("v(xi)-v2(xi)", f3_list, Color::Red, SymbolType::None);
			zedGraphControl1->AxisChange();
			// Обновляем график
			zedGraphControl1->Invalidate();
			zedGraphControl2->AxisChange();
			// Обновляем график
			zedGraphControl2->Invalidate();
		}

		//result1 = fun(n);

	}
	private: System::Void ComboBox1_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e) {
		if (comboBox1->SelectedIndex != -1)
		{
			this->button1->Enabled = true;
		}
	}
	
	};
}
