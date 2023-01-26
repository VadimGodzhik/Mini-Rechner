#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_ergebniss;
	protected:

	protected:

	private: System::Windows::Forms::Label^ lb_erg;
	private: System::Windows::Forms::Label^ lb_zahl_1;
	private: System::Windows::Forms::Label^ lb_zahl_2;
	private: System::Windows::Forms::GroupBox^ gb_operationen;
	private: System::Windows::Forms::RadioButton^ rb_division;
	private: System::Windows::Forms::RadioButton^ rb_multiplikation;
	private: System::Windows::Forms::RadioButton^ rb_subtraktion;
	private: System::Windows::Forms::RadioButton^ rb_addition;
	private: System::Windows::Forms::TextBox^ tb_zahl_1;
	private: System::Windows::Forms::TextBox^ tb_zahl_2;
	private: System::Windows::Forms::Button^ bt_berechnen;


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
			this->panel_ergebniss = (gcnew System::Windows::Forms::Panel());
			this->lb_erg = (gcnew System::Windows::Forms::Label());
			this->lb_zahl_1 = (gcnew System::Windows::Forms::Label());
			this->lb_zahl_2 = (gcnew System::Windows::Forms::Label());
			this->gb_operationen = (gcnew System::Windows::Forms::GroupBox());
			this->rb_division = (gcnew System::Windows::Forms::RadioButton());
			this->rb_multiplikation = (gcnew System::Windows::Forms::RadioButton());
			this->rb_subtraktion = (gcnew System::Windows::Forms::RadioButton());
			this->rb_addition = (gcnew System::Windows::Forms::RadioButton());
			this->tb_zahl_1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_zahl_2 = (gcnew System::Windows::Forms::TextBox());
			this->bt_berechnen = (gcnew System::Windows::Forms::Button());
			this->panel_ergebniss->SuspendLayout();
			this->gb_operationen->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_ergebniss
			// 
			this->panel_ergebniss->BackColor = System::Drawing::SystemColors::HotTrack;
			this->panel_ergebniss->Controls->Add(this->lb_erg);
			this->panel_ergebniss->Location = System::Drawing::Point(12, 12);
			this->panel_ergebniss->Name = L"panel_ergebniss";
			this->panel_ergebniss->Size = System::Drawing::Size(308, 41);
			this->panel_ergebniss->TabIndex = 1;
			// 
			// lb_erg
			// 
			this->lb_erg->AutoSize = true;
			this->lb_erg->BackColor = System::Drawing::Color::Transparent;
			this->lb_erg->Dock = System::Windows::Forms::DockStyle::Right;
			this->lb_erg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_erg->ForeColor = System::Drawing::SystemColors::Window;
			this->lb_erg->Location = System::Drawing::Point(244, 0);
			this->lb_erg->Name = L"lb_erg";
			this->lb_erg->Size = System::Drawing::Size(64, 39);
			this->lb_erg->TabIndex = 0;
			this->lb_erg->Text = L"0,0";
			this->lb_erg->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lb_zahl_1
			// 
			this->lb_zahl_1->AutoSize = true;
			this->lb_zahl_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_zahl_1->Location = System::Drawing::Point(13, 78);
			this->lb_zahl_1->Name = L"lb_zahl_1";
			this->lb_zahl_1->Size = System::Drawing::Size(59, 20);
			this->lb_zahl_1->TabIndex = 2;
			this->lb_zahl_1->Text = L"Zahl 1:";
			// 
			// lb_zahl_2
			// 
			this->lb_zahl_2->AutoSize = true;
			this->lb_zahl_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_zahl_2->Location = System::Drawing::Point(13, 183);
			this->lb_zahl_2->Name = L"lb_zahl_2";
			this->lb_zahl_2->Size = System::Drawing::Size(59, 20);
			this->lb_zahl_2->TabIndex = 2;
			this->lb_zahl_2->Text = L"Zahl 2:";
			// 
			// gb_operationen
			// 
			this->gb_operationen->Controls->Add(this->rb_division);
			this->gb_operationen->Controls->Add(this->rb_multiplikation);
			this->gb_operationen->Controls->Add(this->rb_subtraktion);
			this->gb_operationen->Controls->Add(this->rb_addition);
			this->gb_operationen->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->gb_operationen->Location = System::Drawing::Point(16, 104);
			this->gb_operationen->Name = L"gb_operationen";
			this->gb_operationen->Size = System::Drawing::Size(251, 62);
			this->gb_operationen->TabIndex = 3;
			this->gb_operationen->TabStop = false;
			this->gb_operationen->Text = L"Operation";
			// 
			// rb_division
			// 
			this->rb_division->AutoSize = true;
			this->rb_division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_division->ForeColor = System::Drawing::SystemColors::InfoText;
			this->rb_division->Location = System::Drawing::Point(160, 29);
			this->rb_division->Name = L"rb_division";
			this->rb_division->Size = System::Drawing::Size(33, 22);
			this->rb_division->TabIndex = 0;
			this->rb_division->Text = L"/";
			this->rb_division->UseVisualStyleBackColor = true;
			// 
			// rb_multiplikation
			// 
			this->rb_multiplikation->AutoSize = true;
			this->rb_multiplikation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_multiplikation->ForeColor = System::Drawing::SystemColors::InfoText;
			this->rb_multiplikation->Location = System::Drawing::Point(110, 29);
			this->rb_multiplikation->Name = L"rb_multiplikation";
			this->rb_multiplikation->Size = System::Drawing::Size(35, 22);
			this->rb_multiplikation->TabIndex = 0;
			this->rb_multiplikation->Text = L"*";
			this->rb_multiplikation->UseVisualStyleBackColor = true;
			// 
			// rb_subtraktion
			// 
			this->rb_subtraktion->AutoSize = true;
			this->rb_subtraktion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_subtraktion->ForeColor = System::Drawing::SystemColors::InfoText;
			this->rb_subtraktion->Location = System::Drawing::Point(60, 29);
			this->rb_subtraktion->Name = L"rb_subtraktion";
			this->rb_subtraktion->Size = System::Drawing::Size(34, 22);
			this->rb_subtraktion->TabIndex = 0;
			this->rb_subtraktion->Text = L"-";
			this->rb_subtraktion->UseVisualStyleBackColor = true;
			// 
			// rb_addition
			// 
			this->rb_addition->AutoSize = true;
			this->rb_addition->Checked = true;
			this->rb_addition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rb_addition->ForeColor = System::Drawing::SystemColors::InfoText;
			this->rb_addition->Location = System::Drawing::Point(10, 29);
			this->rb_addition->Name = L"rb_addition";
			this->rb_addition->Size = System::Drawing::Size(38, 22);
			this->rb_addition->TabIndex = 0;
			this->rb_addition->TabStop = true;
			this->rb_addition->Text = L"+";
			this->rb_addition->UseVisualStyleBackColor = true;
			// 
			// tb_zahl_1
			// 
			this->tb_zahl_1->Location = System::Drawing::Point(78, 76);
			this->tb_zahl_1->Name = L"tb_zahl_1";
			this->tb_zahl_1->Size = System::Drawing::Size(144, 22);
			this->tb_zahl_1->TabIndex = 4;
			// 
			// tb_zahl_2
			// 
			this->tb_zahl_2->Location = System::Drawing::Point(78, 181);
			this->tb_zahl_2->Name = L"tb_zahl_2";
			this->tb_zahl_2->Size = System::Drawing::Size(144, 22);
			this->tb_zahl_2->TabIndex = 4;
			// 
			// bt_berechnen
			// 
			this->bt_berechnen->BackColor = System::Drawing::SystemColors::Window;
			this->bt_berechnen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bt_berechnen->Location = System::Drawing::Point(126, 232);
			this->bt_berechnen->Name = L"bt_berechnen";
			this->bt_berechnen->Size = System::Drawing::Size(96, 29);
			this->bt_berechnen->TabIndex = 5;
			this->bt_berechnen->TabStop = false;
			this->bt_berechnen->Text = L"&Berechnen";
			this->bt_berechnen->UseVisualStyleBackColor = false;
			this->bt_berechnen->Click += gcnew System::EventHandler(this, &Form1::bt_berechnen_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(332, 285);
			this->Controls->Add(this->bt_berechnen);
			this->Controls->Add(this->tb_zahl_2);
			this->Controls->Add(this->tb_zahl_1);
			this->Controls->Add(this->gb_operationen);
			this->Controls->Add(this->lb_zahl_2);
			this->Controls->Add(this->lb_zahl_1);
			this->Controls->Add(this->panel_ergebniss);
			this->Name = L"Form1";
			this->Text = L"Mini-Rechner";
			this->Activated += gcnew System::EventHandler(this, &Form1::Form1_Activated);
			this->panel_ergebniss->ResumeLayout(false);
			this->panel_ergebniss->PerformLayout();
			this->gb_operationen->ResumeLayout(false);
			this->gb_operationen->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void bt_berechnen_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double technisch_result_zahl1 = 0.0, technisch_result_zahl2 = 0.0;
		double result_zahl1 = 0.0, result_zahl2 = 0.0;
		double ergebniss = 0.0;
		
		bool try_parse_zahl1 = false, try_parse_zahl2 = false;

		try_parse_zahl1 = double::TryParse(this->tb_zahl_1->Text, technisch_result_zahl1); // damit die Funktion double::TryParse realisieren könnte, nutz man eine technische Doublevariable
		try_parse_zahl2 = double::TryParse(this->tb_zahl_2->Text, technisch_result_zahl1);

		if (try_parse_zahl1 && try_parse_zahl2) {
			result_zahl1 = double::Parse(this->tb_zahl_1->Text);
			result_zahl2 = double::Parse(this->tb_zahl_2->Text);

			if (this->rb_addition->Checked) {

				ergebniss = result_zahl1 + result_zahl2;
				this->lb_erg->Text = String::Join("", ergebniss);

			} else if (this->rb_subtraktion->Checked) {
				
				ergebniss = result_zahl1 - result_zahl2;
				this->lb_erg->Text = String::Join("", ergebniss);

			} else if (this->rb_multiplikation->Checked) {

				ergebniss = result_zahl1 * result_zahl2;
				this->lb_erg->Text = String::Join("", ergebniss);

			} else if(this->rb_division->Checked) {

				ergebniss = result_zahl1 / result_zahl2;
				this->lb_erg->Text = String::Join("", ergebniss);

			}

		} else if (!try_parse_zahl1 || !try_parse_zahl2) {

			MessageBox::Show("Nur die Zahlen sind zum Eintragen erlaubt!",
				"Anwendungsmeldung!",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);

			if (!try_parse_zahl1 && !try_parse_zahl2) {
				this->tb_zahl_1->Text = "";
				this->tb_zahl_2->Text = "";

				this->tb_zahl_1->Focus();
			} else if (!try_parse_zahl1 && try_parse_zahl2) {
				this->tb_zahl_1->Text = "";

				this->tb_zahl_1->Focus();
			} else if (try_parse_zahl1 && !try_parse_zahl2) {
				this->tb_zahl_2->Text = "";

				this->tb_zahl_2->Focus();
			}
		}

		
	}

	private: System::Void Form1_Activated(System::Object^ sender, System::EventArgs^ e) {
		this->tb_zahl_1->Focus();
	}

};
}
