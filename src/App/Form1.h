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

		private: System::String^ Name;
		private: int Age;

		private: System::Windows::Forms::Label^ labelName;
		private: System::Windows::Forms::Label^ labelEdad;
		private: System::Windows::Forms::TextBox^ inputName;
		private: System::Windows::Forms::Button^ buttonShow;
		private: System::Windows::Forms::TextBox^ inputAge;
		private: System::Windows::Forms::TextBox^ txtShow;
	private: System::Windows::Forms::Button^ buttonEraser;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelEdad = (gcnew System::Windows::Forms::Label());
			this->inputName = (gcnew System::Windows::Forms::TextBox());
			this->buttonShow = (gcnew System::Windows::Forms::Button());
			this->inputAge = (gcnew System::Windows::Forms::TextBox());
			this->txtShow = (gcnew System::Windows::Forms::TextBox());
			this->buttonEraser = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->ForeColor = System::Drawing::Color::Orange;
			this->labelName->Location = System::Drawing::Point(12, 19);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(95, 13);
			this->labelName->TabIndex = 0;
			this->labelName->Text = L"Ingresa tu nombre:";
			this->labelName->Click += gcnew System::EventHandler(this, &Form1::labelName_Click);
			// 
			// labelEdad
			// 
			this->labelEdad->AutoSize = true;
			this->labelEdad->ForeColor = System::Drawing::Color::Orange;
			this->labelEdad->Location = System::Drawing::Point(12, 76);
			this->labelEdad->Name = L"labelEdad";
			this->labelEdad->Size = System::Drawing::Size(84, 13);
			this->labelEdad->TabIndex = 1;
			this->labelEdad->Text = L"Ingresa tu edad:";
			this->labelEdad->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// inputName
			// 
			this->inputName->Location = System::Drawing::Point(15, 35);
			this->inputName->Multiline = true;
			this->inputName->Name = L"inputName";
			this->inputName->Size = System::Drawing::Size(100, 20);
			this->inputName->TabIndex = 2;
			this->inputName->TextChanged += gcnew System::EventHandler(this, &Form1::inputName_TextChanged);
			// 
			// buttonShow
			// 
			this->buttonShow->ForeColor = System::Drawing::Color::Navy;
			this->buttonShow->Location = System::Drawing::Point(15, 131);
			this->buttonShow->Name = L"buttonShow";
			this->buttonShow->Size = System::Drawing::Size(75, 23);
			this->buttonShow->TabIndex = 4;
			this->buttonShow->Text = L"Mostrar";
			this->buttonShow->UseVisualStyleBackColor = true;
			this->buttonShow->Click += gcnew System::EventHandler(this, &Form1::buttonShow_Click);
			// 
			// inputAge
			// 
			this->inputAge->Location = System::Drawing::Point(15, 92);
			this->inputAge->Multiline = true;
			this->inputAge->Name = L"inputAge";
			this->inputAge->Size = System::Drawing::Size(100, 20);
			this->inputAge->TabIndex = 5;
			this->inputAge->TextChanged += gcnew System::EventHandler(this, &Form1::inputAge_TextChanged);
			// 
			// txtShow
			// 
			this->txtShow->Location = System::Drawing::Point(15, 172);
			this->txtShow->Multiline = true;
			this->txtShow->Name = L"txtShow";
			this->txtShow->Size = System::Drawing::Size(205, 66);
			this->txtShow->TabIndex = 6;
			this->txtShow->TextChanged += gcnew System::EventHandler(this, &Form1::txtShow_TextChanged);
			// 
			// buttonEraser
			// 
			this->buttonEraser->ForeColor = System::Drawing::Color::Red;
			this->buttonEraser->Location = System::Drawing::Point(120, 131);
			this->buttonEraser->Name = L"buttonEraser";
			this->buttonEraser->Size = System::Drawing::Size(75, 23);
			this->buttonEraser->TabIndex = 7;
			this->buttonEraser->Text = L"Borrar";
			this->buttonEraser->UseVisualStyleBackColor = true;
			this->buttonEraser->Click += gcnew System::EventHandler(this, &Form1::buttonEraser_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->buttonEraser);
			this->Controls->Add(this->txtShow);
			this->Controls->Add(this->inputAge);
			this->Controls->Add(this->buttonShow);
			this->Controls->Add(this->inputName);
			this->Controls->Add(this->labelEdad);
			this->Controls->Add(this->labelName);
			this->Icon = gcnew System::Drawing::Icon("C:/Users/David Garcia/Documents/Proyectos .NET/[C++]/Interface/Interface/src/App/user.ico");
			this->Name = L"Form1";
			this->Text = L"REGISTRO";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void labelName_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void inputName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			Name = inputName->Text;
		}
		private: System::Void inputAge_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			Int32::TryParse(inputAge->Text, Age);
		}

		private: System::Void buttonShow_Click(System::Object^ sender, System::EventArgs^ e) {
			// Verificar si tanto el nombre como la edad tienen valores válidos.
			if (Name != nullptr && Age != 0) {
				// Crear un mensaje que incluya el nombre y la edad.
				String^ mensaje = "Nombre: " + Name + "\r\nEdad: " + Age.ToString();

				// Mostrar el mensaje en el campo de texto campoMostrar.
				txtShow->Text = mensaje;
			}
			else {
				// Manejar el caso en el que falta el nombre o la edad.
				txtShow->Text = "Falta información.";
			}
		}
	
		private: System::Void txtShow_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void buttonEraser_Click(System::Object^ sender, System::EventArgs^ e) {
			
			String^ valorDefault = " ";
			inputName->Text = valorDefault;
			inputAge->Text = valorDefault;
			txtShow->Text = valorDefault;
		}
	};
}
