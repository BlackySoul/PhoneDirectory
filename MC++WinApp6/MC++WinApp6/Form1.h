#pragma once
#include "MyForm.h"

namespace MCWinApp6 {

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
		private:MyForm^ form2;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;

	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîçäàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îòêðûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõðàíèòüToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;



	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem;









	private: System::Windows::Forms::ToolStripMenuItem^  ñåðâèñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  íàñòðîéêèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïàðàìåòðûToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïðàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îïðîãðàììåToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;








	private: 





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêðûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ñîõðàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñåðâèñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàñòðîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàðàìåòðûToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïðàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îïðîãðàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column1, 
				this->Column2, this->Column3});
			this->dataGridView1->Location = System::Drawing::Point(14, 17);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(360, 494);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Ôàìèëèÿ";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Èìÿ";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Îò÷åñòâî";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(101)), 
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Candara", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->textBox1->HideSelection = false;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(430, 79);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 18);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Ââåäèòå êëþ÷åâîå ñëîâî";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Ñåìüÿ", L"Äðóçüÿ", L"Êîëëåãè"});
			this->comboBox1->Location = System::Drawing::Point(446, 172);
			this->comboBox1->Margin = System::Windows::Forms::Padding(0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"Âûáåðèòå èç ñïèñêà";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Lavender;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Location = System::Drawing::Point(12, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(640, 530);
			this->panel1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(472, 405);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Ýêñïîðò êîíòàêòîâ";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(461, 263);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 58);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Äîáàâèòü íîâûé êîíòàêò";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ôàéëToolStripMenuItem, 
				this->ñåðâèñToolStripMenuItem, this->ñïðàâêàToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Margin = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(25, 2, 0, 2);
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(664, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->ñîçäàòüToolStripMenuItem, 
				this->îòêðûòüToolStripMenuItem, this->toolStripSeparator, this->ñîõðàíèòüToolStripMenuItem, this->toolStripSeparator1, this->âûõîäToolStripMenuItem});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"&Ôàéë";
			// 
			// ñîçäàòüToolStripMenuItem
			// 
			this->ñîçäàòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñîçäàòüToolStripMenuItem.Image")));
			this->ñîçäàòüToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîçäàòüToolStripMenuItem->Name = L"ñîçäàòüToolStripMenuItem";
			this->ñîçäàòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->ñîçäàòüToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->ñîçäàòüToolStripMenuItem->Text = L"&Ñîçäàòü";
			// 
			// îòêðûòüToolStripMenuItem
			// 
			this->îòêðûòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"îòêðûòüToolStripMenuItem.Image")));
			this->îòêðûòüToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->îòêðûòüToolStripMenuItem->Name = L"îòêðûòüToolStripMenuItem";
			this->îòêðûòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->îòêðûòüToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->îòêðûòüToolStripMenuItem->Text = L"&Îòêðûòü";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(169, 6);
			// 
			// ñîõðàíèòüToolStripMenuItem
			// 
			this->ñîõðàíèòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñîõðàíèòüToolStripMenuItem.Image")));
			this->ñîõðàíèòüToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîõðàíèòüToolStripMenuItem->Name = L"ñîõðàíèòüToolStripMenuItem";
			this->ñîõðàíèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->ñîõðàíèòüToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->ñîõðàíèòüToolStripMenuItem->Text = L"&Ñîõðàíèòü";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(169, 6);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::X));
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(172, 22);
			this->âûõîäToolStripMenuItem->Text = L"Âû&õîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::âûõîäToolStripMenuItem_Click);
			// 
			// ñåðâèñToolStripMenuItem
			// 
			this->ñåðâèñToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->íàñòðîéêèToolStripMenuItem, 
				this->ïàðàìåòðûToolStripMenuItem});
			this->ñåðâèñToolStripMenuItem->Name = L"ñåðâèñToolStripMenuItem";
			this->ñåðâèñToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ñåðâèñToolStripMenuItem->Text = L"&Ñåðâèñ";
			// 
			// íàñòðîéêèToolStripMenuItem
			// 
			this->íàñòðîéêèToolStripMenuItem->Name = L"íàñòðîéêèToolStripMenuItem";
			this->íàñòðîéêèToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->íàñòðîéêèToolStripMenuItem->Text = L"&Íàñòðîéêè";
			// 
			// ïàðàìåòðûToolStripMenuItem
			// 
			this->ïàðàìåòðûToolStripMenuItem->Name = L"ïàðàìåòðûToolStripMenuItem";
			this->ïàðàìåòðûToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ïàðàìåòðûToolStripMenuItem->Text = L"&Ïàðàìåòðû";
			// 
			// ñïðàâêàToolStripMenuItem
			// 
			this->ñïðàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->îïðîãðàììåToolStripMenuItem});
			this->ñïðàâêàToolStripMenuItem->Name = L"ñïðàâêàToolStripMenuItem";
			this->ñïðàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïðàâêàToolStripMenuItem->Text = L"Ñïðà&âêà";
			// 
			// îïðîãðàììåToolStripMenuItem
			// 
			this->îïðîãðàììåToolStripMenuItem->Name = L"îïðîãðàììåToolStripMenuItem";
			this->îïðîãðàììåToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->îïðîãðàììåToolStripMenuItem->Text = L"&Î ïðîãðàììå...";
			this->îïðîãðàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::îïðîãðàììåToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(664, 563);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 
				 /*if (textBox1->Text == "Ââåäèòå êëþ÷åâîå ñëîâî")
					{
						pictureBox1->Visible=true;
						//textBox1->CursorChanged
					 }
				 else
				 {
					 pictureBox1->Visible=false;
				 }*/

		
			 }
private: System::Void îïðîãðàììåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 DialogResult = MessageBox::Show(this, "Ïðèëîæåíèå made ÓÏÎÐÎÒÎÑÒÜ ÏÐÎÄÀÊØÍ", "Èíôîðìàöèÿ",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Asterisk);
		 }
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 form2=gcnew MyForm();  // gcnew – âûäåëåíèå ïàìÿòè, 
                                              //Form2() - êîíñòðóêòîð
				 form2->Show();

		 }
};
}

