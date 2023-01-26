#pragma once
#include<iostream>
#include<iomanip>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ c11;
	private: System::Windows::Forms::TextBox^ r31;
	protected:


	private: System::Windows::Forms::TextBox^ mc32;

	private: System::Windows::Forms::TextBox^ mc31;

	private: System::Windows::Forms::TextBox^ mc21;

	private: System::Windows::Forms::TextBox^ mc11;


	private: System::Windows::Forms::TextBox^ c33;

	private: System::Windows::Forms::TextBox^ c32;

	private: System::Windows::Forms::TextBox^ c31;

	private: System::Windows::Forms::TextBox^ c23;

	private: System::Windows::Forms::TextBox^ c22;

	private: System::Windows::Forms::TextBox^ c21;

	private: System::Windows::Forms::TextBox^ c13;
	private: System::Windows::Forms::TextBox^ c12;
	private: System::Windows::Forms::TextBox^ r32;




	private: System::Windows::Forms::TextBox^ mc13;
	private: System::Windows::Forms::TextBox^ mc23;
	private: System::Windows::Forms::TextBox^ mc33;



	private: System::Windows::Forms::TextBox^ mc12;
	private: System::Windows::Forms::TextBox^ mc22;
	private: System::Windows::Forms::TextBox^ r33;



	private: System::Windows::Forms::TextBox^ r23;

	private: System::Windows::Forms::TextBox^ r22;

	private: System::Windows::Forms::TextBox^ r21;

	private: System::Windows::Forms::TextBox^ r13;

	private: System::Windows::Forms::TextBox^ r12;

	private: System::Windows::Forms::TextBox^ r11;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ sumar;
	private: System::Windows::Forms::Button^ restar;


	private: System::Windows::Forms::Button^ tras;

	private: System::Windows::Forms::Button^ dett;
	private: System::Windows::Forms::Button^ mult;


	private: System::Windows::Forms::Button^ inversa;
	private: System::Windows::Forms::Label^ icon;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ traspuesta2;
	private: System::Windows::Forms::Button^ determinante2;
	private: System::Windows::Forms::Button^ Inversa2;


	private: System::Windows::Forms::TextBox^ determinante;
	private: System::Windows::Forms::Button^ Adjunta;
private: System::Windows::Forms::Button^ Adjunta2;









	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->c11 = (gcnew System::Windows::Forms::TextBox());
			this->r31 = (gcnew System::Windows::Forms::TextBox());
			this->mc32 = (gcnew System::Windows::Forms::TextBox());
			this->mc31 = (gcnew System::Windows::Forms::TextBox());
			this->mc21 = (gcnew System::Windows::Forms::TextBox());
			this->mc11 = (gcnew System::Windows::Forms::TextBox());
			this->c33 = (gcnew System::Windows::Forms::TextBox());
			this->c32 = (gcnew System::Windows::Forms::TextBox());
			this->c31 = (gcnew System::Windows::Forms::TextBox());
			this->c23 = (gcnew System::Windows::Forms::TextBox());
			this->c22 = (gcnew System::Windows::Forms::TextBox());
			this->c21 = (gcnew System::Windows::Forms::TextBox());
			this->c13 = (gcnew System::Windows::Forms::TextBox());
			this->c12 = (gcnew System::Windows::Forms::TextBox());
			this->r32 = (gcnew System::Windows::Forms::TextBox());
			this->mc13 = (gcnew System::Windows::Forms::TextBox());
			this->mc23 = (gcnew System::Windows::Forms::TextBox());
			this->mc33 = (gcnew System::Windows::Forms::TextBox());
			this->mc12 = (gcnew System::Windows::Forms::TextBox());
			this->mc22 = (gcnew System::Windows::Forms::TextBox());
			this->r33 = (gcnew System::Windows::Forms::TextBox());
			this->r23 = (gcnew System::Windows::Forms::TextBox());
			this->r22 = (gcnew System::Windows::Forms::TextBox());
			this->r21 = (gcnew System::Windows::Forms::TextBox());
			this->r13 = (gcnew System::Windows::Forms::TextBox());
			this->r12 = (gcnew System::Windows::Forms::TextBox());
			this->r11 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->sumar = (gcnew System::Windows::Forms::Button());
			this->restar = (gcnew System::Windows::Forms::Button());
			this->tras = (gcnew System::Windows::Forms::Button());
			this->dett = (gcnew System::Windows::Forms::Button());
			this->mult = (gcnew System::Windows::Forms::Button());
			this->inversa = (gcnew System::Windows::Forms::Button());
			this->icon = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->traspuesta2 = (gcnew System::Windows::Forms::Button());
			this->determinante2 = (gcnew System::Windows::Forms::Button());
			this->Inversa2 = (gcnew System::Windows::Forms::Button());
			this->determinante = (gcnew System::Windows::Forms::TextBox());
			this->Adjunta = (gcnew System::Windows::Forms::Button());
			this->Adjunta2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// c11
			// 
			this->c11->Location = System::Drawing::Point(51, 38);
			this->c11->Multiline = true;
			this->c11->Name = L"c11";
			this->c11->Size = System::Drawing::Size(35, 31);
			this->c11->TabIndex = 0;
			this->c11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// r31
			// 
			this->r31->Location = System::Drawing::Point(396, 112);
			this->r31->Multiline = true;
			this->r31->Name = L"r31";
			this->r31->Size = System::Drawing::Size(52, 31);
			this->r31->TabIndex = 1;
			this->r31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mc32
			// 
			this->mc32->Location = System::Drawing::Point(246, 112);
			this->mc32->Multiline = true;
			this->mc32->Name = L"mc32";
			this->mc32->Size = System::Drawing::Size(35, 31);
			this->mc32->TabIndex = 2;
			this->mc32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mc31
			// 
			this->mc31->Location = System::Drawing::Point(205, 112);
			this->mc31->Multiline = true;
			this->mc31->Name = L"mc31";
			this->mc31->Size = System::Drawing::Size(35, 31);
			this->mc31->TabIndex = 3;
			this->mc31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mc21
			// 
			this->mc21->Location = System::Drawing::Point(205, 75);
			this->mc21->Multiline = true;
			this->mc21->Name = L"mc21";
			this->mc21->Size = System::Drawing::Size(35, 31);
			this->mc21->TabIndex = 4;
			this->mc21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mc11
			// 
			this->mc11->Location = System::Drawing::Point(205, 38);
			this->mc11->Multiline = true;
			this->mc11->Name = L"mc11";
			this->mc11->Size = System::Drawing::Size(35, 31);
			this->mc11->TabIndex = 5;
			this->mc11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// c33
			// 
			this->c33->Location = System::Drawing::Point(133, 112);
			this->c33->Multiline = true;
			this->c33->Name = L"c33";
			this->c33->Size = System::Drawing::Size(35, 31);
			this->c33->TabIndex = 6;
			this->c33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// c32
			// 
			this->c32->Location = System::Drawing::Point(92, 112);
			this->c32->Multiline = true;
			this->c32->Name = L"c32";
			this->c32->Size = System::Drawing::Size(35, 31);
			this->c32->TabIndex = 7;
			this->c32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// c31
			// 
			this->c31->Location = System::Drawing::Point(51, 112);
			this->c31->Multiline = true;
			this->c31->Name = L"c31";
			this->c31->Size = System::Drawing::Size(35, 31);
			this->c31->TabIndex = 8;
			this->c31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// c23
			// 
			this->c23->Location = System::Drawing::Point(133, 75);
			this->c23->Multiline = true;
			this->c23->Name = L"c23";
			this->c23->Size = System::Drawing::Size(35, 31);
			this->c23->TabIndex = 9;
			this->c23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// c22
			// 
			this->c22->Location = System::Drawing::Point(92, 75);
			this->c22->Multiline = true;
			this->c22->Name = L"c22";
			this->c22->Size = System::Drawing::Size(35, 31);
			this->c22->TabIndex = 10;
			this->c22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// c21
			// 
			this->c21->Location = System::Drawing::Point(51, 75);
			this->c21->Multiline = true;
			this->c21->Name = L"c21";
			this->c21->Size = System::Drawing::Size(35, 31);
			this->c21->TabIndex = 11;
			this->c21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// c13
			// 
			this->c13->Location = System::Drawing::Point(133, 38);
			this->c13->Multiline = true;
			this->c13->Name = L"c13";
			this->c13->Size = System::Drawing::Size(35, 31);
			this->c13->TabIndex = 12;
			this->c13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// c12
			// 
			this->c12->Location = System::Drawing::Point(92, 38);
			this->c12->Multiline = true;
			this->c12->Name = L"c12";
			this->c12->Size = System::Drawing::Size(35, 31);
			this->c12->TabIndex = 13;
			this->c12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// r32
			// 
			this->r32->Location = System::Drawing::Point(454, 112);
			this->r32->Multiline = true;
			this->r32->Name = L"r32";
			this->r32->Size = System::Drawing::Size(52, 31);
			this->r32->TabIndex = 14;
			this->r32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mc13
			// 
			this->mc13->Location = System::Drawing::Point(287, 38);
			this->mc13->Multiline = true;
			this->mc13->Name = L"mc13";
			this->mc13->Size = System::Drawing::Size(35, 31);
			this->mc13->TabIndex = 15;
			this->mc13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mc23
			// 
			this->mc23->Location = System::Drawing::Point(287, 75);
			this->mc23->Multiline = true;
			this->mc23->Name = L"mc23";
			this->mc23->Size = System::Drawing::Size(35, 31);
			this->mc23->TabIndex = 16;
			this->mc23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mc33
			// 
			this->mc33->Location = System::Drawing::Point(287, 112);
			this->mc33->Multiline = true;
			this->mc33->Name = L"mc33";
			this->mc33->Size = System::Drawing::Size(35, 31);
			this->mc33->TabIndex = 17;
			this->mc33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mc12
			// 
			this->mc12->Location = System::Drawing::Point(246, 38);
			this->mc12->Multiline = true;
			this->mc12->Name = L"mc12";
			this->mc12->Size = System::Drawing::Size(35, 31);
			this->mc12->TabIndex = 18;
			this->mc12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mc22
			// 
			this->mc22->Location = System::Drawing::Point(246, 75);
			this->mc22->Multiline = true;
			this->mc22->Name = L"mc22";
			this->mc22->Size = System::Drawing::Size(35, 31);
			this->mc22->TabIndex = 19;
			this->mc22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// r33
			// 
			this->r33->Location = System::Drawing::Point(512, 75);
			this->r33->Multiline = true;
			this->r33->Name = L"r33";
			this->r33->Size = System::Drawing::Size(52, 31);
			this->r33->TabIndex = 20;
			this->r33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// r23
			// 
			this->r23->Location = System::Drawing::Point(512, 112);
			this->r23->Multiline = true;
			this->r23->Name = L"r23";
			this->r23->Size = System::Drawing::Size(52, 31);
			this->r23->TabIndex = 21;
			this->r23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// r22
			// 
			this->r22->Location = System::Drawing::Point(454, 75);
			this->r22->Multiline = true;
			this->r22->Name = L"r22";
			this->r22->Size = System::Drawing::Size(52, 31);
			this->r22->TabIndex = 22;
			this->r22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// r21
			// 
			this->r21->Location = System::Drawing::Point(396, 75);
			this->r21->Multiline = true;
			this->r21->Name = L"r21";
			this->r21->Size = System::Drawing::Size(52, 31);
			this->r21->TabIndex = 23;
			this->r21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// r13
			// 
			this->r13->Location = System::Drawing::Point(512, 38);
			this->r13->Multiline = true;
			this->r13->Name = L"r13";
			this->r13->Size = System::Drawing::Size(52, 31);
			this->r13->TabIndex = 24;
			this->r13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// r12
			// 
			this->r12->Location = System::Drawing::Point(454, 38);
			this->r12->Multiline = true;
			this->r12->Name = L"r12";
			this->r12->Size = System::Drawing::Size(52, 31);
			this->r12->TabIndex = 25;
			this->r12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->r12->TextChanged += gcnew System::EventHandler(this, &Form1::r12_TextChanged);
			// 
			// r11
			// 
			this->r11->Location = System::Drawing::Point(396, 38);
			this->r11->Multiline = true;
			this->r11->Name = L"r11";
			this->r11->Size = System::Drawing::Size(52, 31);
			this->r11->TabIndex = 26;
			this->r11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(119, 4);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 31);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Calculadora de Matricez";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(352, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 39);
			this->label2->TabIndex = 28;
			this->label2->Text = L"=";
			// 
			// sumar
			// 
			this->sumar->BackColor = System::Drawing::SystemColors::Menu;
			this->sumar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sumar->Location = System::Drawing::Point(51, 167);
			this->sumar->Name = L"sumar";
			this->sumar->Size = System::Drawing::Size(117, 34);
			this->sumar->TabIndex = 29;
			this->sumar->Text = L"Sumar";
			this->sumar->UseVisualStyleBackColor = false;
			this->sumar->Click += gcnew System::EventHandler(this, &Form1::sumar_Click);
			// 
			// restar
			// 
			this->restar->BackColor = System::Drawing::SystemColors::Menu;
			this->restar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->restar->Location = System::Drawing::Point(205, 167);
			this->restar->Name = L"restar";
			this->restar->Size = System::Drawing::Size(117, 34);
			this->restar->TabIndex = 30;
			this->restar->Text = L"Restar";
			this->restar->UseVisualStyleBackColor = false;
			this->restar->Click += gcnew System::EventHandler(this, &Form1::restar_Click);
			// 
			// tras
			// 
			this->tras->BackColor = System::Drawing::SystemColors::Menu;
			this->tras->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tras->Location = System::Drawing::Point(51, 247);
			this->tras->Name = L"tras";
			this->tras->Size = System::Drawing::Size(117, 34);
			this->tras->TabIndex = 31;
			this->tras->Text = L"Traspuesta";
			this->tras->UseVisualStyleBackColor = false;
			this->tras->Click += gcnew System::EventHandler(this, &Form1::tras_Click);
			// 
			// dett
			// 
			this->dett->BackColor = System::Drawing::SystemColors::Menu;
			this->dett->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dett->Location = System::Drawing::Point(51, 287);
			this->dett->Name = L"dett";
			this->dett->Size = System::Drawing::Size(117, 34);
			this->dett->TabIndex = 33;
			this->dett->Text = L"Determinante";
			this->dett->UseVisualStyleBackColor = false;
			this->dett->Click += gcnew System::EventHandler(this, &Form1::dett_Click);
			// 
			// mult
			// 
			this->mult->BackColor = System::Drawing::SystemColors::Menu;
			this->mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mult->Location = System::Drawing::Point(51, 207);
			this->mult->Name = L"mult";
			this->mult->Size = System::Drawing::Size(271, 34);
			this->mult->TabIndex = 34;
			this->mult->Text = L"Multiplicar";
			this->mult->UseVisualStyleBackColor = false;
			this->mult->Click += gcnew System::EventHandler(this, &Form1::mult_Click);
			// 
			// inversa
			// 
			this->inversa->BackColor = System::Drawing::SystemColors::Menu;
			this->inversa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->inversa->Location = System::Drawing::Point(51, 367);
			this->inversa->Name = L"inversa";
			this->inversa->Size = System::Drawing::Size(117, 34);
			this->inversa->TabIndex = 35;
			this->inversa->Text = L"Inversa";
			this->inversa->UseVisualStyleBackColor = false;
			this->inversa->Click += gcnew System::EventHandler(this, &Form1::inversa_Click);
			// 
			// icon
			// 
			this->icon->AutoSize = true;
			this->icon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->icon->Location = System::Drawing::Point(406, 167);
			this->icon->Name = L"icon";
			this->icon->Size = System::Drawing::Size(141, 108);
			this->icon->TabIndex = 36;
			this->icon->Text = L":D";
			this->icon->Click += gcnew System::EventHandler(this, &Form1::icon_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(328, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 31);
			this->label3->TabIndex = 37;
			this->label3->Text = L">>>>>>>";
			// 
			// traspuesta2
			// 
			this->traspuesta2->BackColor = System::Drawing::SystemColors::Menu;
			this->traspuesta2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->traspuesta2->Location = System::Drawing::Point(196, 247);
			this->traspuesta2->Name = L"traspuesta2";
			this->traspuesta2->Size = System::Drawing::Size(126, 34);
			this->traspuesta2->TabIndex = 39;
			this->traspuesta2->Text = L"Traspuesta";
			this->traspuesta2->UseVisualStyleBackColor = false;
			this->traspuesta2->Click += gcnew System::EventHandler(this, &Form1::traspuesta2_Click);
			// 
			// determinante2
			// 
			this->determinante2->BackColor = System::Drawing::SystemColors::Menu;
			this->determinante2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->determinante2->Location = System::Drawing::Point(196, 287);
			this->determinante2->Name = L"determinante2";
			this->determinante2->Size = System::Drawing::Size(126, 34);
			this->determinante2->TabIndex = 40;
			this->determinante2->Text = L"Determinante";
			this->determinante2->UseVisualStyleBackColor = false;
			this->determinante2->Click += gcnew System::EventHandler(this, &Form1::determinante2_Click);
			// 
			// Inversa2
			// 
			this->Inversa2->BackColor = System::Drawing::SystemColors::Menu;
			this->Inversa2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Inversa2->Location = System::Drawing::Point(196, 367);
			this->Inversa2->Name = L"Inversa2";
			this->Inversa2->Size = System::Drawing::Size(126, 34);
			this->Inversa2->TabIndex = 41;
			this->Inversa2->Text = L"Inversa";
			this->Inversa2->UseVisualStyleBackColor = false;
			this->Inversa2->Click += gcnew System::EventHandler(this, &Form1::Inversa2_Click);
			// 
			// determinante
			// 
			this->determinante->Location = System::Drawing::Point(478, 287);
			this->determinante->Multiline = true;
			this->determinante->Name = L"determinante";
			this->determinante->Size = System::Drawing::Size(38, 27);
			this->determinante->TabIndex = 38;
			// 
			// Adjunta
			// 
			this->Adjunta->BackColor = System::Drawing::SystemColors::Menu;
			this->Adjunta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Adjunta->Location = System::Drawing::Point(51, 327);
			this->Adjunta->Name = L"Adjunta";
			this->Adjunta->Size = System::Drawing::Size(117, 34);
			this->Adjunta->TabIndex = 42;
			this->Adjunta->Text = L"Adjunta";
			this->Adjunta->UseVisualStyleBackColor = false;
			this->Adjunta->Click += gcnew System::EventHandler(this, &Form1::Adjunta_Click);
			// 
			// Adjunta2
			// 
			this->Adjunta2->BackColor = System::Drawing::SystemColors::Menu;
			this->Adjunta2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Adjunta2->Location = System::Drawing::Point(196, 327);
			this->Adjunta2->Name = L"Adjunta2";
			this->Adjunta2->Size = System::Drawing::Size(126, 34);
			this->Adjunta2->TabIndex = 43;
			this->Adjunta2->Text = L"Adjunta";
			this->Adjunta2->UseVisualStyleBackColor = false;
			this->Adjunta2->Click += gcnew System::EventHandler(this, &Form1::Adjunta2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(605, 466);
			this->Controls->Add(this->Adjunta2);
			this->Controls->Add(this->Adjunta);
			this->Controls->Add(this->Inversa2);
			this->Controls->Add(this->determinante2);
			this->Controls->Add(this->traspuesta2);
			this->Controls->Add(this->determinante);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->icon);
			this->Controls->Add(this->inversa);
			this->Controls->Add(this->mult);
			this->Controls->Add(this->dett);
			this->Controls->Add(this->tras);
			this->Controls->Add(this->restar);
			this->Controls->Add(this->sumar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->r11);
			this->Controls->Add(this->r12);
			this->Controls->Add(this->r13);
			this->Controls->Add(this->r21);
			this->Controls->Add(this->r22);
			this->Controls->Add(this->r23);
			this->Controls->Add(this->r33);
			this->Controls->Add(this->mc22);
			this->Controls->Add(this->mc12);
			this->Controls->Add(this->mc33);
			this->Controls->Add(this->mc23);
			this->Controls->Add(this->mc13);
			this->Controls->Add(this->r32);
			this->Controls->Add(this->c12);
			this->Controls->Add(this->c13);
			this->Controls->Add(this->c21);
			this->Controls->Add(this->c22);
			this->Controls->Add(this->c23);
			this->Controls->Add(this->c31);
			this->Controls->Add(this->c32);
			this->Controls->Add(this->c33);
			this->Controls->Add(this->mc11);
			this->Controls->Add(this->mc21);
			this->Controls->Add(this->mc31);
			this->Controls->Add(this->mc32);
			this->Controls->Add(this->r31);
			this->Controls->Add(this->c11);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void icon_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void sumar_Click(System::Object^ sender, System::EventArgs^ e) {
	//sumar
	double num1, num2,num3,num4,num5,num6,num7,num8,num9, sumar11,sumar12,sumar13,sumar21,sumar22,sumar23,sumar31,sumar32,sumar33;
	double num11, num12, num13, num21, num22, num23, num31, num32, num33;
	num1 = System::Convert::ToInt32(c11->Text);
	num2 = System::Convert::ToInt32(c12->Text);
	num3 = System::Convert::ToInt32(c13->Text);
	num4 = System::Convert::ToInt32(c21->Text);
	num5 = System::Convert::ToInt32(c22->Text);
	num6 = System::Convert::ToInt32(c23->Text);
	num7 = System::Convert::ToInt32(c31->Text);
	num8 = System::Convert::ToInt32(c32->Text);
	num9 = System::Convert::ToInt32(c33->Text);

	num11 = System::Convert::ToInt32(mc11->Text);
	num12 = System::Convert::ToInt32(mc12->Text);
	num13 = System::Convert::ToInt32(mc13->Text);
	num21 = System::Convert::ToInt32(mc21->Text);
	num22 = System::Convert::ToInt32(mc22->Text);
	num23 = System::Convert::ToInt32(mc23->Text);
	num31 = System::Convert::ToInt32(mc31->Text);
	num32 = System::Convert::ToInt32(mc32->Text);
	num33 = System::Convert::ToInt32(mc33->Text);

	sumar11 = num1 + num11;
	sumar12 = num2 + num12;
	sumar13 = num3 + num13;
	sumar21 = num4 + num21;
	sumar22 = num5 + num22;
	sumar23 = num6 + num23;
	sumar31 = num7 + num31;
	sumar32 = num8 + num32;
	sumar33 = num9 + num33;


	r11->Text = System::Convert::ToString(sumar11);
	r12->Text = System::Convert::ToString(sumar12);
	r13->Text = System::Convert::ToString(sumar13);
	r21->Text = System::Convert::ToString(sumar21);
	r22->Text = System::Convert::ToString(sumar22);
	r23->Text = System::Convert::ToString(sumar23);
	r31->Text = System::Convert::ToString(sumar31);
	r32->Text = System::Convert::ToString(sumar32);
	r33->Text = System::Convert::ToString(sumar33);
	
}
private: System::Void restar_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9, sumar11, sumar12, sumar13, sumar21, sumar22, sumar23, sumar31, sumar32, sumar33;
	double num11, num12, num13, num21, num22, num23, num31, num32, num33;

	num1 = System::Convert::ToInt32(c11->Text);
	num2 = System::Convert::ToInt32(c12->Text);
	num3 = System::Convert::ToInt32(c13->Text);
	num4 = System::Convert::ToInt32(c21->Text);
	num5 = System::Convert::ToInt32(c22->Text);
	num6 = System::Convert::ToInt32(c23->Text);
	num7 = System::Convert::ToInt32(c31->Text);
	num8 = System::Convert::ToInt32(c32->Text);
	num9 = System::Convert::ToInt32(c33->Text);

	num11 = System::Convert::ToInt32(mc11->Text);
	num12 = System::Convert::ToInt32(mc12->Text);
	num13 = System::Convert::ToInt32(mc13->Text);
	num21 = System::Convert::ToInt32(mc21->Text);
	num22 = System::Convert::ToInt32(mc22->Text);
	num23 = System::Convert::ToInt32(mc23->Text);
	num31 = System::Convert::ToInt32(mc31->Text);
	num32 = System::Convert::ToInt32(mc32->Text);
	num33 = System::Convert::ToInt32(mc33->Text);

	sumar11 = num1 - num11;
	sumar12 = num2 - num12;
	sumar13 = num3 - num13;
	sumar21 = num4 - num21;
	sumar22 = num5 - num22;
	sumar23 = num6 - num23;
	sumar31 = num7 - num31;
	sumar32 = num8 - num32;
	sumar33 = num9 - num33;


	r11->Text = System::Convert::ToString(sumar11);
	r12->Text = System::Convert::ToString(sumar12);
	r13->Text = System::Convert::ToString(sumar13);
	r21->Text = System::Convert::ToString(sumar21);
	r22->Text = System::Convert::ToString(sumar22);
	r23->Text = System::Convert::ToString(sumar23);
	r31->Text = System::Convert::ToString(sumar31);
	r32->Text = System::Convert::ToString(sumar32);
	r33->Text = System::Convert::ToString(sumar33);

}
private: System::Void mult_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9, sumar11, sumar12, sumar13, sumar21, sumar22, sumar23, sumar31, sumar32, sumar33;
	double num11, num12, num13, num21, num22, num23, num31, num32, num33;

	num1 = System::Convert::ToInt32(c11->Text);
	num2 = System::Convert::ToInt32(c12->Text);
	num3 = System::Convert::ToInt32(c13->Text);
	num4 = System::Convert::ToInt32(c21->Text);
	num5 = System::Convert::ToInt32(c22->Text);
	num6 = System::Convert::ToInt32(c23->Text);
	num7 = System::Convert::ToInt32(c31->Text);
	num8 = System::Convert::ToInt32(c32->Text);
	num9 = System::Convert::ToInt32(c33->Text);

	num11 = System::Convert::ToInt32(mc11->Text);
	num12 = System::Convert::ToInt32(mc12->Text);
	num13 = System::Convert::ToInt32(mc13->Text);
	num21 = System::Convert::ToInt32(mc21->Text);
	num22 = System::Convert::ToInt32(mc22->Text);
	num23 = System::Convert::ToInt32(mc23->Text);
	num31 = System::Convert::ToInt32(mc31->Text);
	num32 = System::Convert::ToInt32(mc32->Text);
	num33 = System::Convert::ToInt32(mc33->Text);

	sumar11 = (num1 * num11) + (num2 * num21) + (num3 * num31);
	sumar12 = (num1*num12)+(num2*num22)+(num3*num32);
	sumar13 = (num1*num13)+(num2*num23)+(num3*num33);
	sumar21 = (num4*num11)+(num5*num21)+(num6*num31);
	sumar22 = (num4*num12)+(num5*num22)+(num6*num32);
	sumar23 = (num4*num13)+(num5*num23)+(num6*num33);
	sumar31 = (num7 * num11) + (num8 * num21) + (num9 * num31);
	sumar32 = (num7 * num12) + (num8 * num22) + (num9 * num32);
	sumar33 = (num7 * num13) + (num8 * num23) + (num9 * num33);


	r11->Text = System::Convert::ToString(sumar11);
	r12->Text = System::Convert::ToString(sumar12);
	r13->Text = System::Convert::ToString(sumar13);
	r21->Text = System::Convert::ToString(sumar21);
	r22->Text = System::Convert::ToString(sumar22);
	r23->Text = System::Convert::ToString(sumar23);
	r31->Text = System::Convert::ToString(sumar31);
	r32->Text = System::Convert::ToString(sumar32);
	r33->Text = System::Convert::ToString(sumar33);
}
private: System::Void tras_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9;
	double tras,tras2,tras3,tras4,tras5,tras6,tras7,tras8,tras9;

	num1 = System::Convert::ToInt32(c11->Text);
	num2 = System::Convert::ToInt32(c12->Text);
	num3 = System::Convert::ToInt32(c13->Text);
	num4 = System::Convert::ToInt32(c21->Text);
	num5 = System::Convert::ToInt32(c22->Text);
	num6 = System::Convert::ToInt32(c23->Text);
	num7 = System::Convert::ToInt32(c31->Text);
	num8 = System::Convert::ToInt32(c32->Text);
	num9 = System::Convert::ToInt32(c33->Text);

	tras = num1;
	tras2 = num2;
	tras3 = num3;
	tras4 = num4;
	tras5 = num5;
	tras6 = num6;
	tras7 = num7;
	tras8 = num8;
	tras9 = num9;

	num1 = tras;
	num2 = tras4;
	num3 = tras7;
	num4 = tras2;
	num5 = tras5;
	num6 = tras8;
	num7 = tras3;
	num8 = tras6;
	num9 = tras9;


	r11->Text = System::Convert::ToString(num1);
	r12->Text = System::Convert::ToString(num2);
	r13->Text = System::Convert::ToString(num3);
	r21->Text = System::Convert::ToString(num4);
	r22->Text = System::Convert::ToString(num5);
	r23->Text = System::Convert::ToString(num6);
	r31->Text = System::Convert::ToString(num7);
	r32->Text = System::Convert::ToString(num8);
	r33->Text = System::Convert::ToString(num9);
}
private: System::Void dett_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9;
	double tras,tras2,d;

	num1 = System::Convert::ToInt32(c11->Text);
	num2 = System::Convert::ToInt32(c12->Text);
	num3 = System::Convert::ToInt32(c13->Text);
	num4 = System::Convert::ToInt32(c21->Text);
	num5 = System::Convert::ToInt32(c22->Text);
	num6 = System::Convert::ToInt32(c23->Text);
	num7 = System::Convert::ToInt32(c31->Text);
	num8 = System::Convert::ToInt32(c32->Text);
	num9 = System::Convert::ToInt32(c33->Text);

	tras = +(num1 * num5 * num9) + (num2 * num6 * num7) + (num3 * num4 * num8);
	tras2 = -(num7 * num5 * num3) - (num2 * num4 * num9) - (num6 * num8 * num1);
	d = tras + tras2;

	determinante->Text = System::Convert::ToString(d);
}
private: System::Void traspuesta2_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9;
	double tras, tras2, tras3, tras4, tras5, tras6, tras7, tras8, tras9;

	num1 = System::Convert::ToInt32(mc11->Text);
	num2 = System::Convert::ToInt32(mc12->Text);
	num3 = System::Convert::ToInt32(mc13->Text);
	num4 = System::Convert::ToInt32(mc21->Text);
	num5 = System::Convert::ToInt32(mc22->Text);
	num6 = System::Convert::ToInt32(mc23->Text);
	num7 = System::Convert::ToInt32(mc31->Text);
	num8 = System::Convert::ToInt32(mc32->Text);
	num9 = System::Convert::ToInt32(mc33->Text);

	tras = num1;
	tras2 = num2;
	tras3 = num3;
	tras4 = num4;
	tras5 = num5;
	tras6 = num6;
	tras7 = num7;
	tras8 = num8;
	tras9 = num9;

	num1 = tras;
	num2 = tras4;
	num3 = tras7;
	num4 = tras2;
	num5 = tras5;
	num6 = tras8;
	num7 = tras3;
	num8 = tras6;
	num9 = tras9;


	r11->Text = System::Convert::ToString(num1);
	r12->Text = System::Convert::ToString(num2);
	r13->Text = System::Convert::ToString(num3);
	r21->Text = System::Convert::ToString(num4);
	r22->Text = System::Convert::ToString(num5);
	r23->Text = System::Convert::ToString(num6);
	r31->Text = System::Convert::ToString(num7);
	r32->Text = System::Convert::ToString(num8);
	r33->Text = System::Convert::ToString(num9);
}
private: System::Void determinante2_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9;
	double tras, tras2, d;

	num1 = System::Convert::ToInt32(mc11->Text);
	num2 = System::Convert::ToInt32(mc12->Text);
	num3 = System::Convert::ToInt32(mc13->Text);
	num4 = System::Convert::ToInt32(mc21->Text);
	num5 = System::Convert::ToInt32(mc22->Text);
	num6 = System::Convert::ToInt32(mc23->Text);
	num7 = System::Convert::ToInt32(mc31->Text);
	num8 = System::Convert::ToInt32(mc32->Text);
	num9 = System::Convert::ToInt32(mc33->Text);

	tras = +(num1 * num5 * num9) + (num2 * num6 * num7) + (num3 * num4 * num8);
	tras2 = -(num7 * num5 * num3) - (num2 * num4 * num9) - (num6 * num8 * num1);
	d = tras + tras2;

	determinante->Text = System::Convert::ToString(d);
}
private: System::Void Adjunta_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9;
	double num11, num12, num13, num21, num22, num23, num31, num32, num33,k11,k12,k13,k21,k22,k23,k31,k32,k33;

	num1 = System::Convert::ToInt32(c11->Text);
	num2 = System::Convert::ToInt32(c12->Text);
	num3 = System::Convert::ToInt32(c13->Text);
	num4 = System::Convert::ToInt32(c21->Text);
	num5 = System::Convert::ToInt32(c22->Text);
	num6 = System::Convert::ToInt32(c23->Text);
	num7 = System::Convert::ToInt32(c31->Text);
	num8 = System::Convert::ToInt32(c32->Text);
	num9 = System::Convert::ToInt32(c33->Text);

	k11 = (num5 * num9) + (num6 * (-num8));
	k12 = -((num4 * num9) + (num6 * (-num7))); 
	k13 = (num4 * num8) + (num5 * (-num7));
	k21 = -((num2 * num9) + (num3* (-num8)));
	k22 = (num1 * num9) + (num3 * (-num7));
	k23 = -((num1 * num8) + (num2 * (-num7)));
	k31 = (num2 * num6) + (num3 * (-num5));
	k32 = -((num1 * num6) + (num3 * (-num4)));
	k33 = (num1 * num5) + (num2 * (-num4));

	r11->Text = System::Convert::ToString(k11);
	r12->Text = System::Convert::ToString(k12);
	r13->Text = System::Convert::ToString(k13);
	r21->Text = System::Convert::ToString(k21);
	r22->Text = System::Convert::ToString(k22);
	r23->Text = System::Convert::ToString(k33);
	r31->Text = System::Convert::ToString(k31);
	r32->Text = System::Convert::ToString(k32);
	r33->Text = System::Convert::ToString(k23);

}
private: System::Void Adjunta2_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9;
	double num11, num12, num13, num21, num22, num23, num31, num32, num33, k11, k12, k13, k21, k22, k23, k31, k32, k33;

	num1 = System::Convert::ToInt32(mc11->Text);
	num2 = System::Convert::ToInt32(mc12->Text);
	num3 = System::Convert::ToInt32(mc13->Text);
	num4 = System::Convert::ToInt32(mc21->Text);
	num5 = System::Convert::ToInt32(mc22->Text);
	num6 = System::Convert::ToInt32(mc23->Text);
	num7 = System::Convert::ToInt32(mc31->Text);
	num8 = System::Convert::ToInt32(mc32->Text);
	num9 = System::Convert::ToInt32(mc33->Text);

	k11 = (num5 * num9) + (num6 * (-num8));
	k12 = -((num4 * num9) + (num6 * (-num7)));
	k13 = (num4 * num8) + (num5 * (-num7));
	k21 = -((num2 * num9) + (num3 * (-num8)));
	k22 = (num1 * num9) + (num3 * (-num7));
	k23 = -((num1 * num8) + (num2 * (-num7)));
	k31 = (num2 * num6) + (num3 * (-num5));
	k32 = -((num1 * num6) + (num3 * (-num4)));
	k33 = (num1 * num5) + (num2 * (-num4));

	r11->Text = System::Convert::ToString(k11);
	r12->Text = System::Convert::ToString(k12);
	r13->Text = System::Convert::ToString(k13);
	r21->Text = System::Convert::ToString(k21);
	r22->Text = System::Convert::ToString(k22);
	r23->Text = System::Convert::ToString(k33);
	r31->Text = System::Convert::ToString(k31);
	r32->Text = System::Convert::ToString(k32);
	r33->Text = System::Convert::ToString(k23);
}
private: System::Void inversa_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9,k11,k12,k13,k21,k22,k23,k31,k32,k33;
	double tras, tras2, tras3, tras4, tras5, tras6, tras7, tras8, tras9,determinante,var1,var2;

	num1 = System::Convert::ToInt32(c11->Text);
	num2 = System::Convert::ToInt32(c12->Text);
	num3 = System::Convert::ToInt32(c13->Text);
	num4 = System::Convert::ToInt32(c21->Text);
	num5 = System::Convert::ToInt32(c22->Text);
	num6 = System::Convert::ToInt32(c23->Text);
	num7 = System::Convert::ToInt32(c31->Text);
	num8 = System::Convert::ToInt32(c32->Text);
	num9 = System::Convert::ToInt32(c33->Text);

	//DETERMINANTE
	var1 = +(num1 * num5 * num9) + (num2 * num6 * num7) + (num3 * num4 * num8);
	var2 = -(num7 * num5 * num3) - (num2 * num4 * num9) - (num6 * num8 * num1);
	determinante = var1 + var2;

	//ADJUNTA
	tras = (num5 * num9) + (num6 * (-num8));
	tras2 = -((num4 * num9) + (num6 * (-num7)));
	tras3 = (num4 * num8) + (num5 * (-num7));
	tras4 = -((num2 * num9) + (num3 * (-num8)));
	tras5 = (num1 * num9) + (num3 * (-num7));
	tras6 = -((num1 * num8) + (num2 * (-num7)));
	tras7 = (num2 * num6) + (num3 * (-num5));
	tras8 = -((num1 * num6) + (num3 * (-num4)));
	tras9 = (num1 * num5) + (num2 * (-num4));

	//ADJUNTA TRASPUESTA
	k11 = tras;
	k12 = tras4;
	k13 = tras7;
	k21 = tras2;
	k22 = tras5;
	k23 = tras8;
	k31 = tras3;
	k32 = tras6;
	k33 = tras9;

	//Inversa
	tras = ((1 / determinante) * k11);
	tras2 = ((1 / determinante) * k12);
	tras3 = ((1 / determinante) * k13);
	tras4 = ((1 / determinante) * k21);
	tras5 = ((1 / determinante) * k22);
	tras6 = ((1 / determinante) * k23);
	tras7 = ((1 / determinante) * k31);
	tras8 = ((1 / determinante) * k32);
	tras9 = ((1 / determinante) * k33);

	r11->Text = System::Convert::ToString(tras);
	r12->Text = System::Convert::ToString(tras2);
	r13->Text = System::Convert::ToString(tras3);
	r21->Text = System::Convert::ToString(tras4);
	r22->Text = System::Convert::ToString(tras5);
	r23->Text = System::Convert::ToString(tras9);
	r31->Text = System::Convert::ToString(tras7);
	r32->Text = System::Convert::ToString(tras8);
	r33->Text = System::Convert::ToString(tras6);
}
private: System::Void Inversa2_Click(System::Object^ sender, System::EventArgs^ e) {
	double num1, num2, num3, num4, num5, num6, num7, num8, num9, k11, k12, k13, k21, k22, k23, k31, k32, k33;
	double tras, tras2, tras3, tras4, tras5, tras6, tras7, tras8, tras9, determinante, var1, var2;

	num1 = System::Convert::ToInt32(mc11->Text);
	num2 = System::Convert::ToInt32(mc12->Text);
	num3 = System::Convert::ToInt32(mc13->Text);
	num4 = System::Convert::ToInt32(mc21->Text);
	num5 = System::Convert::ToInt32(mc22->Text);
	num6 = System::Convert::ToInt32(mc23->Text);
	num7 = System::Convert::ToInt32(mc31->Text);
	num8 = System::Convert::ToInt32(mc32->Text);
	num9 = System::Convert::ToInt32(mc33->Text);

	//DETERMINANTE
	var1 = +(num1 * num5 * num9) + (num2 * num6 * num7) + (num3 * num4 * num8);
	var2 = -(num7 * num5 * num3) - (num2 * num4 * num9) - (num6 * num8 * num1);
	determinante = var1 + var2;

	//ADJUNTA
	tras = (num5 * num9) + (num6 * (-num8));
	tras2 = -((num4 * num9) + (num6 * (-num7)));
	tras3 = (num4 * num8) + (num5 * (-num7));
	tras4 = -((num2 * num9) + (num3 * (-num8)));
	tras5 = (num1 * num9) + (num3 * (-num7));
	tras6 = -((num1 * num8) + (num2 * (-num7)));
	tras7 = (num2 * num6) + (num3 * (-num5));
	tras8 = -((num1 * num6) + (num3 * (-num4)));
	tras9 = (num1 * num5) + (num2 * (-num4));

	//ADJUNTA TRASPUESTA
	k11 = tras;
	k12 = tras4;
	k13 = tras7;
	k21 = tras2;
	k22 = tras5;
	k23 = tras8;
	k31 = tras3;
	k32 = tras6;
	k33 = tras9;

	//Inversa
	tras = k11 * (1/determinante);
	tras2 = k12 * (1/determinante);
	tras3 = k13 * (1/determinante);
	tras4 = k21 * (1/determinante);
	tras5 = k22 * (1/determinante);
	tras6 = k23 * (1/determinante);
	tras7 = k31 * (1/determinante);
	tras8 = k32 * (1/determinante);
	tras9 = k33 * (1/determinante);


	r11->Text = System::Convert::ToString(tras);
	r12->Text = System::Convert::ToString(tras2);
	r13->Text = System::Convert::ToString(tras3);
	r21->Text = System::Convert::ToString(tras4);
	r22->Text = System::Convert::ToString(tras5);
	r23->Text = System::Convert::ToString(tras9);
	r31->Text = System::Convert::ToString(tras7);
	r32->Text = System::Convert::ToString(tras8);
	r33->Text = System::Convert::ToString(tras6);
}
private: System::Void r12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
