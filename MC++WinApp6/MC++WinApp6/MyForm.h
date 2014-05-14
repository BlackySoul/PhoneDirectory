#pragma once
#include <cstdlib>

static bool open=0;

namespace MCWinApp6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(Odbc::OdbcConnection^ dbConn, int max)
		{
			open=true;
			InitializeComponent();
			this->Text = L"Добавление";
			this->button1->Text="Добавить";
			lookOrCreate=-1;
			editSomething=1;
			this->maxIndex=max;
			this->dbConn = dbConn;
			if(this->dbConn->State != Data::ConnectionState::Open){
				try
				{
					 this->dbConn->Open();
				}
				catch(...)
				{
					 MessageBox::Show("Неверная строка соединения!\n" + 
									  Convert::ToString(dbConn->ConnectionString) +"\n",
									  "Ошибка",MessageBoxButtons::OK);
					 exit(1);
				}
			}
		}
		MyForm(int key, Odbc::OdbcConnection^ dbConn)
		{
			open=true;
			InitializeComponent();
			this->Text = L"Просмотр/Изменение";
			this->button1->Text="Закончить просмотр";
			this->dbConn = dbConn;
			if(this->dbConn->State != Data::ConnectionState::Open){
				try
				{
					 this->dbConn->Open();
				}
				catch(...)
				{
					 MessageBox::Show("Неверная строка соединения!\n" + 
									  Convert::ToString(dbConn->ConnectionString) +"\n",
									  "Ошибка",MessageBoxButtons::OK);
					 exit(1);
				}
			}
			lookOrCreate=key;
			editSomething=0;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			open=false;
		}
	
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::ComponentModel::Container ^components;
	private: Odbc::OdbcConnection^ dbConn;
	private: int lookOrCreate;
			 bool editSomething;
			 int maxIndex;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox1->Location = System::Drawing::Point(75, 173);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 23);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox2->Location = System::Drawing::Point(75, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(117, 23);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::InfoText;
			this->textBox3->Location = System::Drawing::Point(75, 254);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(141, 23);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox2->ForeColor = System::Drawing::SystemColors::InfoText;
			this->richTextBox2->Location = System::Drawing::Point(246, 125);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(125, 45);
			this->richTextBox2->TabIndex = 5;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::InfoText;
			this->richTextBox1->Location = System::Drawing::Point(246, 202);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(125, 25);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(116, 323);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Добавить ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(246, 256);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(116, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Text = L"Выберите группу";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
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
			this->button3->Location = System::Drawing::Point(358, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(27, 25);
			this->button3->TabIndex = 8;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(394, 412);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->AcceptButton = button1;
			 this->button1->Focus();
			 if (this->dbConn->State == Data::ConnectionState::Open)
			 {
				 Odbc::OdbcCommand^ appDBCommand=gcnew Odbc::OdbcCommand("SELECT `Группа` FROM `Группы` ORDER BY `Код`");
				 appDBCommand->Connection = this->dbConn;
				 this->comboBox1->Items->Add("[Без группы]");
				 Odbc::OdbcDataReader^ appReader = appDBCommand->ExecuteReader();
				 while(appReader->Read())
				 {
					 this->comboBox1->Items->Add(appReader->GetString(0));
				 }
				 appReader->Close();
				 appReader->~OdbcDataReader();
				 delete appReader;
				 delete appReader;
				 if(this->lookOrCreate>=0){
					 int store = this->lookOrCreate;
					 this->lookOrCreate=-1;//Чтобы не срабатывали отработчики изменений
					 appDBCommand->CommandText= "SELECT `Телефонна книга`.`Фамилия`, `Телефонна книга`.`Имя`, " + 
												"`Телефонна книга`.`Отчество`, `Телефонна книга`.`Группа`, " + 
												"`Номера`.`Номер телефона`, `Номера`.`Email`" +
												"FROM `Телефонна книга` LEFT JOIN `Номера` ON `Телефонна книга`.`Код`=`Номера`.`Код`" +
												"WHERE `Телефонна книга`.`Код`="+store+";";
					 try{
						appReader = appDBCommand->ExecuteReader();
					 } catch(...) {
						Display("Невозможно произвести считывание из БД");
				     }
					 while(appReader->Read())
					 {
						 if(!appReader->IsDBNull(0)){
							this->textBox1->Text = appReader->GetString(0);
						 }
						 if(!appReader->IsDBNull(1)){
							this->textBox2->Text = appReader->GetString(1);
						 }
						 if(!appReader->IsDBNull(2)){
							 this->textBox3->Text = appReader->GetString(2);
						 }
						 if(!appReader->IsDBNull(3)){
							 this->comboBox1->SelectedIndex = appReader->GetInt32(3)<=0?0:appReader->GetInt32(3);
						 }
						 if(!appReader->IsDBNull(4)){
							 this->richTextBox1->Text = appReader->GetString(4);
						 }
						 if(!appReader->IsDBNull(5)){
							 this->richTextBox2->Text = appReader->GetString(5);
						 }
					 }
					 this->lookOrCreate = store;
				 }
			 }
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->lookOrCreate>=0){
				 this->editSomething = true;
				 button1->Text = "Сохранить";
			 }
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->lookOrCreate>=0){
				 this->editSomething = true;
				 button1->Text = "Сохранить";
			 }
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->lookOrCreate>=0){
				 this->editSomething = true;
				 button1->Text = "Сохранить";
			 }
		 }
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->lookOrCreate>=0){
				 this->editSomething = true;
				 button1->Text = "Сохранить";
			 }
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->lookOrCreate>=0){
				 this->editSomething = true;
				 button1->Text = "Сохранить";
			 }
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(this->lookOrCreate>=0){
				 this->editSomething = true;
				 button1->Text = "Сохранить";
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->lookOrCreate>=0 && this->editSomething == false){
				 this->Close();
			 } else if (this->lookOrCreate>=0 && this->editSomething == true){
				 if(this->textBox1->Text == "" || this->richTextBox1->Text == ""){
					 MessageBox::Show("Пожалуйста, заполните поля \"Фамилия\" и \"Номер телефона\"!", "Ошибка");
					 return;
				 }
				 Odbc::OdbcCommand^ appDBCommand=gcnew Odbc::OdbcCommand();
				 appDBCommand->CommandText = "UPDATE  `Телефонна книга` SET " +
												 "`Фамилия`='" + textBox1->Text + "', " +
												 "`Имя`='" + textBox2->Text + "', " +
												 "`Отчество`='" + textBox3->Text + "', " +
												 "`Группа`=" + comboBox1->SelectedIndex + 
												 " WHERE `Код` = " + lookOrCreate + ";";
				 appDBCommand->Connection = this->dbConn;
				 appDBCommand->ExecuteNonQuery();
				 appDBCommand->CommandText = "UPDATE  `Номера` SET " +
												 "`Номер телефона`='" + richTextBox1->Text + "', " +
												 "`Email`='" + richTextBox2->Text + "'" +
												 " WHERE `Код` = " + lookOrCreate + ";";
				 appDBCommand->ExecuteNonQuery();
				 this->editSomething = false;
				 button1->Text = "Закончить";
			 } else {
				 if(this->textBox1->Text == "" || this->richTextBox1->Text == ""){
					 MessageBox::Show("Пожалуйста, заполните поля \"Фамилия\" и \"Номер телефона\"!", "Ошибка");
					 return;
				 }
				 Odbc::OdbcCommand^ appDBCommand=gcnew Odbc::OdbcCommand();
				 appDBCommand->CommandText = "INSERT INTO  `Телефонна книга`" +
											 "(`Фамилия`, `Имя`, `Отчество`, `Группа`) " +
											 "VALUES ('" +textBox1->Text+ "', '" +
											 textBox2->Text+"', '" +  textBox3->Text+
											 "'," +  comboBox1->SelectedIndex + ");";

				 appDBCommand->Connection = this->dbConn;
				 appDBCommand->ExecuteNonQuery();
				 appDBCommand->CommandText = "INSERT INTO  `Номера`" +
											 "(`Номер телефона`, `Email`) " +
											 "VALUES ('" +
											 richTextBox1->Text + "', '" +
											 richTextBox2->Text + "');";
				 appDBCommand->ExecuteNonQuery();
				 this->editSomething = false;
				 button1->Text = "Закончить";
				 this->lookOrCreate=this->maxIndex;
				 }
		 }
};
}
