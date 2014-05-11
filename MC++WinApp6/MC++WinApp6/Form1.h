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
			this->dbname=gcnew String("");
			codes = (int*)calloc(0, sizeof(int));
		}
	
	private:MyForm^ form2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
			 System::ComponentModel::Container ^components;
	private: String^ dbname; //Путь к базе данных
			 System::Windows::Forms::MenuStrip^  menuStrip1; //Не нужно
			 Odbc::OdbcConnection^ dbConn; //Активное соединения с БД
			 Odbc::OdbcConnectionStringBuilder^ ConnString; //Строка формулировки соединения с БД
			 System::Windows::Forms::ListBox^  listBox1;
	public: int *codes; //Массив сопоставлений кодов в listBox1(ключ) и кодов в БД(значение)

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
			delete dbname;
			dbConn->Close();
			delete dbConn;
			delete ConnString;
			delete[] codes;
		}

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(101)), 
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Candara", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox1->Location = System::Drawing::Point(430, 79);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(165, 18);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"Введите ключевое слово";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &Form1::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Form1::textBox1_Leave);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(446, 172);
			this->comboBox1->Margin = System::Windows::Forms::Padding(0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"Выберите из списка";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Lavender;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Location = System::Drawing::Point(12, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(640, 530);
			this->panel1->TabIndex = 3;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::White;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->listBox1->ForeColor = System::Drawing::Color::Black;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 21;
			this->listBox1->Location = System::Drawing::Point(17, 16);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(354, 504);
			this->listBox1->Sorted = true;
			this->listBox1->TabIndex = 9;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(610, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(27, 25);
			this->button3->TabIndex = 8;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
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
			this->button2->Text = L"Экспорт контактов";
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
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить новый контакт";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Файл базы данных MicrosoftAccess(*.mdb)|*.mdb";
			this->openFileDialog1->RestoreDirectory = true;
			this->openFileDialog1->SupportMultiDottedExtensions = true;
			this->openFileDialog1->Title = L"Выберите БД";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::openFileDialog1_FileOk);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Margin = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(25, 2, 0, 2);
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(664, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Телефонная книга";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void опрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 DialogResult = MessageBox::Show(this, "Приложение made УПОРОТОСТЬ ПРОДАКШН", "Информация",
				 MessageBoxButtons::OK,
				 MessageBoxIcon::Asterisk);
		 }
private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 form2=gcnew MyForm();                   
			 form2->Show();
		 }
private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text=="Введите ключевое слово")
				 textBox1->Text="";
		 }
private: System::Void textBox1_Leave(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text=="")
				 textBox1->Text="Введите ключевое слово";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 exit(0);
		 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 this->dbname=openFileDialog1->FileName;
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->ShowDialog();
			 if(this->dbname==""){
				 MessageBox::Show("Вы не выбрали базу данных!\n В целях повышения безопастности программа завершает работу",
								  "Информация");
				 exit(1);
			 }
			 ConnString = gcnew Odbc::OdbcConnectionStringBuilder();
			 ConnString->Driver = "Microsoft Access Driver (*.mdb)";
			 ConnString->Add("Dbq",this->dbname);
			 this->dbConn = gcnew Odbc::OdbcConnection();
			 dbConn->ConnectionString=ConnString->ConnectionString;
			 try
			 {
				 dbConn->Open();
			 }
			 catch(...)
			 {
				 MessageBox::Show("Неверная строка соединения!\n" + 
								  Convert::ToString(dbConn->ConnectionString) +"\n",
								  "Ошибка",MessageBoxButtons::OK);
				 exit(1);
			 }
			 if (dbConn->State == Data::ConnectionState::Open)
			 {
				 this->comboBox1->Items->Add("[Любая группа]");
				 Odbc::OdbcCommand^ appDBCommand=gcnew Odbc::OdbcCommand("SELECT `Группа` FROM `Группы` ORDER BY `Код`");
				 appDBCommand->Connection = this->dbConn;
				 Odbc::OdbcDataReader^ appReader = appDBCommand->ExecuteReader();
				 while(appReader->Read())
				 {
					 this->comboBox1->Items->Add(appReader->GetString(0));
				 }
				 appDBCommand->CommandText="SELECT `Код`,`Фамилия`, `Имя`, `Отчество` " + 
										   "FROM `Телефонна книга` ORDER BY `Фамилия`;";
				 appReader->Close();
				 appReader->~OdbcDataReader();
				 delete appReader;
				 appReader = appDBCommand->ExecuteReader();
				 int i=0;
				 while(appReader->Read())
				 {
					 this->codes = (int*)realloc(this->codes, sizeof(int)*(++i));
					 this->codes[i-1]=appReader->GetInt32(0);
					 String^ tmp = gcnew String(appReader->GetString(1));
					 if(!appReader->IsDBNull(2)){
						 tmp+=" " + appReader->GetString(2);
					 }
					 if(!appReader->IsDBNull(3)){
						 tmp+=" " + appReader->GetString(3);
					 }
					 this->listBox1->Items->Add(tmp);
					 delete tmp;
				 }
				 appReader->Close();
				 appReader->~OdbcDataReader();
				 appDBCommand->~OdbcCommand();
				 delete appReader;
				 delete appDBCommand;
			 }
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  if (dbConn->State == Data::ConnectionState::Open)
			  {
				  Odbc::OdbcCommand^ appDBCommand=gcnew Odbc::OdbcCommand();
				  if(comboBox1->SelectedIndex==0)
					  appDBCommand->CommandText="SELECT `Код`,`Фамилия`, `Имя`, `Отчество` " + 
												"FROM `Телефонна книга` ORDER BY `Фамилия`;";
				  else
					  appDBCommand->CommandText="SELECT `Код`,`Фамилия`, `Имя`, `Отчество` " + 
												"FROM `Телефонна книга` " + 
												"WHERE (`Группа`=" + Convert::ToString(comboBox1->SelectedIndex) +												
												") ORDER BY `Фамилия`;";
				  //Очистим основное поле вывода
				  this->listBox1->Items->Clear();
				  //Очистим коды сопоставлений
				  int i=0;
				  free(this->codes);
				  this->codes = (int*)calloc(0, sizeof(int));
				  //Выполним запрос
				  appDBCommand->Connection = this->dbConn;
				  Odbc::OdbcDataReader^ appReader = appDBCommand->ExecuteReader();
				  while(appReader->Read())
				  {
					 this->codes = (int*)realloc(this->codes, sizeof(int)*(++i));
					 this->codes[i-1]=appReader->GetInt32(0);
					 String^ tmp = gcnew String(appReader->GetString(1));
					 if(!appReader->IsDBNull(2)){
						 tmp+=" " + appReader->GetString(2);
					 }
					 if(!appReader->IsDBNull(3)){
						 tmp+=" " + appReader->GetString(3);
					 }
					 if(textBox1->Text!="" && textBox1->Text!="Введите ключевое слово"){
						 int ind = tmp->IndexOf(textBox1->Text, StringComparison::OrdinalIgnoreCase);
						 if((ind>0 && tmp[ind-1]==' ') || (ind==0))
							 this->listBox1->Items->Add(tmp);
					 } else {
						this->listBox1->Items->Add(tmp);
					 }
					 delete tmp;
				  }
				  appReader->Close();
				  delete appReader;
				  delete appDBCommand;
			  }
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox1->Text=="Введите ключевое слово")
				 return;
			 if (dbConn->State == Data::ConnectionState::Open)
			 {
				  Odbc::OdbcCommand^ appDBCommand=gcnew Odbc::OdbcCommand();
				  //Начнем формирование сложного запроса на выборку
				  //Опишем поля выборки из таблицы
				  appDBCommand->CommandText="SELECT `Код`,`Фамилия`, `Имя`, `Отчество` FROM `Телефонна книга` ";
				  //Опишем условие выборки по группам(если нужно)
				  if(comboBox1->SelectedIndex>0)
					appDBCommand->CommandText= appDBCommand->CommandText + 
											   "WHERE (`Группа`=" + Convert::ToString(comboBox1->SelectedIndex) + ")";
				  //Опишем порядок выборки
				  appDBCommand->CommandText= appDBCommand->CommandText + " ORDER BY `Фамилия`;";
				  
				  Clipboard::SetText(Convert::ToString(appDBCommand->CommandText));
				  //Очистим основное поле вывода
				  this->listBox1->Items->Clear();
				  //Очистим коды сопоставлений
				  int i=0;
				  free(this->codes);
				  this->codes = (int*)calloc(0, sizeof(int));
				  //Выполним запрос
				  appDBCommand->Connection = this->dbConn;
				  Odbc::OdbcDataReader^ appReader = appDBCommand->ExecuteReader();
				  while(appReader->Read())
				  {
					 this->codes = (int*)realloc(this->codes, sizeof(int)*(++i));
					 this->codes[i-1]=appReader->GetInt32(0);
					 String^ tmp = gcnew String(appReader->GetString(1));
					 if(!appReader->IsDBNull(2)){
						 tmp+=" " + appReader->GetString(2);
					 }
					 if(!appReader->IsDBNull(3)){
						 tmp+=" " + appReader->GetString(3);
					 }
					 if(textBox1->Text!=""){
						 int ind = tmp->IndexOf(textBox1->Text, StringComparison::OrdinalIgnoreCase);
						 if((ind>0 && tmp[ind-1]==' ') || (ind==0))
							 this->listBox1->Items->Add(tmp);
					 } else {
						this->listBox1->Items->Add(tmp);
					 }
					 delete tmp;
				  }
				  appReader->Close();
				  delete appReader;
				  delete appDBCommand;
			  }
	
		}
};
}

