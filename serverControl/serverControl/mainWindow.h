#pragma once
//#include <stdafx.h>

#include <iostream>
#include <string>
#include <msclr/marshal.h>

namespace serverControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for mainWindow
	/// </summary>
	public ref class mainWindow : public System::Windows::Forms::Form
	{
	public:
		mainWindow(void)
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
		~mainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ DataSourceText;

	private: System::Windows::Forms::TextBox^ UserIDText;
	private: System::Windows::Forms::TextBox^ PasswordText;
	private: System::Windows::Forms::TextBox^ DatabaseText;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ TestConnectionBtn;
	private: System::Windows::Forms::Timer^ timer1;







	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ securityOnBtn;
	private: System::Windows::Forms::Button^ securityOffBtn;


	private: System::Windows::Forms::Label^ label9;
	public:
	private:

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->DataSourceText = (gcnew System::Windows::Forms::TextBox());
			this->UserIDText = (gcnew System::Windows::Forms::TextBox());
			this->PasswordText = (gcnew System::Windows::Forms::TextBox());
			this->DatabaseText = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TestConnectionBtn = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->securityOnBtn = (gcnew System::Windows::Forms::Button());
			this->securityOffBtn = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Door Open";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainWindow::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(123, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Door Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainWindow::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Lights On";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainWindow::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(123, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Lights Off";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mainWindow::button4_Click);
			// 
			// DataSourceText
			// 
			this->DataSourceText->Location = System::Drawing::Point(88, 6);
			this->DataSourceText->Name = L"DataSourceText";
			this->DataSourceText->Size = System::Drawing::Size(175, 20);
			this->DataSourceText->TabIndex = 4;
			this->DataSourceText->Text = L"192.168.254.100, 1433";
			// 
			// UserIDText
			// 
			this->UserIDText->Location = System::Drawing::Point(88, 32);
			this->UserIDText->Name = L"UserIDText";
			this->UserIDText->Size = System::Drawing::Size(175, 20);
			this->UserIDText->TabIndex = 5;
			this->UserIDText->Text = L"admin";
			// 
			// PasswordText
			// 
			this->PasswordText->Location = System::Drawing::Point(88, 58);
			this->PasswordText->Name = L"PasswordText";
			this->PasswordText->Size = System::Drawing::Size(175, 20);
			this->PasswordText->TabIndex = 6;
			this->PasswordText->Text = L"1234";
			// 
			// DatabaseText
			// 
			this->DatabaseText->Location = System::Drawing::Point(88, 84);
			this->DatabaseText->Name = L"DatabaseText";
			this->DatabaseText->Size = System::Drawing::Size(175, 20);
			this->DatabaseText->TabIndex = 7;
			this->DatabaseText->Text = L"HomeSystemDB";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Data Source:";
			this->label1->Click += gcnew System::EventHandler(this, &mainWindow::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"User ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Password:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Database:";
			// 
			// TestConnectionBtn
			// 
			this->TestConnectionBtn->Location = System::Drawing::Point(112, 110);
			this->TestConnectionBtn->Name = L"TestConnectionBtn";
			this->TestConnectionBtn->Size = System::Drawing::Size(97, 23);
			this->TestConnectionBtn->TabIndex = 12;
			this->TestConnectionBtn->Text = L"Test Connection";
			this->TestConnectionBtn->UseVisualStyleBackColor = true;
			this->TestConnectionBtn->Click += gcnew System::EventHandler(this, &mainWindow::button5_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &mainWindow::timer1_Tick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(108, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Estimated Power Bill: ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 314);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(96, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Front Door Status: ";
			// 
			// securityOnBtn
			// 
			this->securityOnBtn->Location = System::Drawing::Point(15, 245);
			this->securityOnBtn->Name = L"securityOnBtn";
			this->securityOnBtn->Size = System::Drawing::Size(86, 23);
			this->securityOnBtn->TabIndex = 22;
			this->securityOnBtn->Text = L"Security On";
			this->securityOnBtn->UseVisualStyleBackColor = true;
			this->securityOnBtn->Click += gcnew System::EventHandler(this, &mainWindow::securityOnBtn_Click);
			// 
			// securityOffBtn
			// 
			this->securityOffBtn->Location = System::Drawing::Point(123, 245);
			this->securityOffBtn->Name = L"securityOffBtn";
			this->securityOffBtn->Size = System::Drawing::Size(86, 23);
			this->securityOffBtn->TabIndex = 23;
			this->securityOffBtn->Text = L"Security Off";
			this->securityOffBtn->UseVisualStyleBackColor = true;
			this->securityOffBtn->Click += gcnew System::EventHandler(this, &mainWindow::securityOffBtn_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(228, 250);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(48, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Security:";
			// 
			// mainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 352);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->securityOffBtn);
			this->Controls->Add(this->securityOnBtn);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->TestConnectionBtn);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DatabaseText);
			this->Controls->Add(this->PasswordText);
			this->Controls->Add(this->UserIDText);
			this->Controls->Add(this->DataSourceText);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"mainWindow";
			this->Text = L"mainWindow";
			this->Load += gcnew System::EventHandler(this, &mainWindow::mainWindow_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	int rowCounterReset = 0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

		try
		{
			conDataBase->Open();
			std::cout << "Success";

			SqlCommand^ cmd = gcnew SqlCommand("UPDATE Actuator1 SET Switch=@Switch WHERE Switch=0", conDataBase);
			cmd->Parameters->AddWithValue("@Switch", 1);
			cmd->ExecuteNonQuery();

			conDataBase->Close();

		}

		catch (InvalidOperationException^ e)
		{

		}


		//SerialPort port("COM6", 9600);
		//port.Open();
		//port.Write("A");


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

		try
		{
			conDataBase->Open();
			std::cout << "Success";

			SqlCommand^ cmd = gcnew SqlCommand("UPDATE Actuator1 SET Switch=@Switch WHERE Switch=1", conDataBase);
			cmd->Parameters->AddWithValue("@Switch", 0);
			cmd->ExecuteNonQuery();

			conDataBase->Close();

		}

		catch (InvalidOperationException^ e)
		{

		}


		//SerialPort port("COM6", 9600);
		//port.Open();
		//port.Write("B");

	}

	int prevRLSwitchVal;
	

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		

		SqlConnection^ conDataBase3 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase3->Open();

		SqlCommand^ cmd3 = gcnew SqlCommand("SELECT TOP 1 * FROM RoomLight", conDataBase3);
		SqlDataReader^ rd3 = cmd3->ExecuteReader();
		rd3->Read();
		prevRLSwitchVal = rd3->GetInt32(0);

		conDataBase3->Close();


		SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

		conDataBase->Open();
		std::cout << "Success";

		SqlCommand^ cmd = gcnew SqlCommand("UPDATE RoomLight SET Switch=@Switch WHERE Switch=0", conDataBase);
		//prevRLSwitchVal = 0;
		cmd->Parameters->AddWithValue("@Switch", 1);
		cmd->ExecuteNonQuery();

		conDataBase->Close();


		if (prevRLSwitchVal == 0)
		{

			SqlConnection^ conDataBase2 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
			conDataBase2->Open();
			SqlCommand^ cmd2 = gcnew SqlCommand("INSERT INTO RoomLightTimestamps (LightStatus) VALUES ('On')", conDataBase2);
			cmd2->ExecuteNonQuery();
			conDataBase->Close();

			prevRLSwitchVal = 1;

		}

		//SqlConnection^ conDataBase2 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		//conDataBase2->Open();
		//SqlCommand^ cmd2 = gcnew SqlCommand("INSERT INTO RoomLightTimestamps (LightStatus) VALUES ('On')", conDataBase2);
		//cmd2->ExecuteNonQuery();
		//conDataBase->Close();

		//SerialPort port("COM6", 9600);
		//port.Open();
		//port.Write("C");

		rowCounterReset = 0;


	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ conDataBase3 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase3->Open();

		SqlCommand^ cmd3 = gcnew SqlCommand("SELECT TOP 1 * FROM RoomLight", conDataBase3);
		SqlDataReader^ rd3 = cmd3->ExecuteReader();
		rd3->Read();
		prevRLSwitchVal = rd3->GetInt32(0);

		conDataBase3->Close();


		SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

		conDataBase->Open();
		std::cout << "Success";

		SqlCommand^ cmd = gcnew SqlCommand("UPDATE RoomLight SET Switch=@Switch WHERE Switch=1", conDataBase);
		//prevRLSwitchVal = 1;
		cmd->Parameters->AddWithValue("@Switch", 0);
		cmd->ExecuteNonQuery();

		conDataBase->Close();


		if (prevRLSwitchVal == 1)
		{

			SqlConnection^ conDataBase2 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
			conDataBase2->Open();
			SqlCommand^ cmd2 = gcnew SqlCommand("INSERT INTO RoomLightTimestamps (LightStatus) VALUES ('Off')", conDataBase2);
			cmd2->ExecuteNonQuery();
			conDataBase2->Close();

			prevRLSwitchVal = 0;

		}


		//SerialPort port("COM6", 9600);
		//port.Open();
		//port.Write("D");

		rowCounterReset = 0;

		SqlConnection^ conDataBase5 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase5->Open();
		SqlCommand^ cmd5 = gcnew SqlCommand("DBCC CHECKIDENT('TimeDifferences', RESEED, 0)", conDataBase5);
		cmd5->ExecuteNonQuery();
		conDataBase5->Close();

		SqlConnection^ conDataBase6 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase6->Open();
		SqlCommand^ cmd6 = gcnew SqlCommand("TRUNCATE TABLE TimeDifferences", conDataBase6);
		cmd6->ExecuteNonQuery();
		conDataBase6->Close();

		SqlConnection^ conDataBase4 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase4->Open();
		SqlCommand^ cmd4 = gcnew SqlCommand("SELECT * FROM RoomLightTimestamps", conDataBase4);
		SqlDataReader^ rd4 = cmd4->ExecuteReader();

		rowCount = 0;

		while (rd4->Read() && rowCounterReset == 0)
		{
			rowCount++;
		}

		rowCounterReset = 0;

		std::cout << rowCount << std::endl;//===

		if (rowCounterReset == 0)
		{
			timeOnTurn = 1;
			timeOffTurn = 0;


			for (int i = 1; i <= rowCount; i++)
			{

				SqlConnection^ conDataBase7 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
				conDataBase7->Open();

				SqlCommand^ cmd7 = gcnew SqlCommand("SELECT LightStatus, TimeStamp FROM RoomLightTimestamps WHERE ID = " + i, conDataBase7);
				SqlDataReader^ rd7 = cmd7->ExecuteReader();
				rd7->Read();
				LS = rd7->GetString(rd7->GetOrdinal("LightStatus"));
				//TS = rd3->GetTimeSpan(rd3->GetOrdinal("TimeStamp"));



				//std::cout << i << std::endl;//====
				//Console::WriteLine(word);//=======


				if (i == 1 && LS == "Off       ")
				{
					std::cout << "Skipped!" << std::endl;
				}

				else
				{

					if (LS == "On        " && timeOnTurn == 1)
					{
						timeOnInput = rd7->GetTimeSpan(rd7->GetOrdinal("TimeStamp"));

						conDataBase7->Close();

						timeOnTurn = 0;
						timeOffTurn = 1;

						//std::cout << "time on input success" << std::endl;//======
					}

					else if (LS == "Off       " && timeOffTurn == 1)
					{
						timeOffInput = rd7->GetTimeSpan(rd7->GetOrdinal("TimeStamp"));

						conDataBase7->Close();

						timeOnTurn = 1;
						timeOffTurn = 0;

						timeSpanInputFlag = 1;

						//std::cout << "time off input success" << std::endl;//==========
					}

					if (timeSpanInputFlag == 1)
					{
						SqlConnection^ conDataBase5 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
						conDataBase5->Open();

						SqlCommand^ cmd5 = gcnew SqlCommand("INSERT INTO TimeDifferences (TimeOn, TimeOff) VALUES (@TimeOn, @TimeOff)", conDataBase5);
						cmd5->Parameters->AddWithValue("@TimeOn", timeOnInput);
						cmd5->Parameters->AddWithValue("@TimeOff", timeOffInput);
						cmd5->ExecuteNonQuery();
						conDataBase5->Close();

						timeSpanInputFlag = 0;

						std::cout << "row inserted" << std::endl;
					}

				}

			}
		}


	}

	private: System::Void mainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {


		SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = "+DataSourceText->Text+"; Initial Catalog = "+DatabaseText->Text+"; User ID = "+UserIDText->Text+"; Password = "+PasswordText->Text);

		try
		{
			conDataBase->Open();
			std::cout << "Success";
			
		}

		catch(InvalidOperationException^ e)
		{
			
		}

		timer1->Start();


		/*String^ timein = "11:36:02.9666667";
		String^ timeoff = "11:36:03.5600000";

		SqlConnection^ conDataBase2 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase2->Open();
		SqlCommand^ cmd2 = gcnew SqlCommand("INSERT INTO TimeDifferences (TimeOn, TimeOff) VALUES (@TimeOn, @TimeOff)", conDataBase2);
		cmd2->Parameters->AddWithValue("@TimeOn", timein);
		cmd2->Parameters->AddWithValue("@TimeOff", timeoff);
		cmd2->ExecuteNonQuery();
		conDataBase->Close();*/

	}

	int A1switchVal;
	int RLswitchVal;
	int rowCount = 0;
	
	TimeSpan TS;

	TimeSpan timeOnInput;
	TimeSpan timeOffInput;

	int timeOnTurn;
	int timeOffTurn;
	double energyBillPrediction;

	int timeSpanInputFlag = 0;

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase->Open();
		
		SqlCommand^ cmd = gcnew SqlCommand("SELECT TOP 1 * FROM Actuator1", conDataBase);
		SqlDataReader^ rd = cmd->ExecuteReader();
		rd->Read();
		A1switchVal = rd->GetInt32(0);

		conDataBase->Close();

		SqlConnection^ conDataBase2 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase2->Open();

		SqlCommand^ cmd2 = gcnew SqlCommand("SELECT TOP 1 * FROM RoomLight", conDataBase2);
		SqlDataReader^ rd2 = cmd2->ExecuteReader();
		rd2->Read();
		RLswitchVal = rd2->GetInt32(0);

		conDataBase2->Close();

		//std::cout << "A1: " << A1switchVal << std::endl;
		//std::cout << "RL: " << RLswitchVal << std::endl;

		if (RLswitchVal == 1)
		{
			SerialPort port("COM6", 250000);
			port.Open();
			port.Write("A");
		}

		if (RLswitchVal == 0)
		{
			SerialPort port("COM6", 250000);
			port.Open();
			port.Write("B");
		}

		if (A1switchVal == 1)
		{
			SerialPort port("COM6", 250000);
			port.Open();
			port.Write("C");
		}

		if (A1switchVal == 0)
		{
			SerialPort port("COM6", 250000);
			port.Open();
			port.Write("D");

		}

		SerialPort port("COM6", 250000);
		port.Open();
		String^ test = port.ReadLine();

		//label8->Text = test;

		Console::WriteLine("SensorVal: "+test);

		SqlConnection^ conDataBase5 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase5->Open();

		SqlCommand^ cmd5 = gcnew SqlCommand("SELECT TOP 1 * FROM SecuritySwitch", conDataBase5);
		SqlDataReader^ rd5 = cmd5->ExecuteReader();
		rd5->Read();
		int securitySwitch = rd5->GetInt32(0);

		conDataBase->Close();

		if (securitySwitch == 1)
		{
			label9->Text = "Security: ON";
		}

		else
		{
			label9->Text = "Security: OFF";
		}


		int ultrasonicNum;

		if (System::Int32::TryParse(test, ultrasonicNum))
		{
			SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

			conDataBase->Open();
			//std::cout << "Success";

			SqlCommand^ cmd = gcnew SqlCommand("UPDATE UltrasonicSensor SET sensorVal=@sensorVal WHERE sensorVal > -1", conDataBase);
			//prevRLSwitchVal = 0;
			cmd->Parameters->AddWithValue("@sensorVal", System::Int32::Parse(test));
			cmd->ExecuteNonQuery();

			conDataBase->Close();

			if (System::Int32::Parse(test) < 11)
			{
				label8->Text = "Front Door Status: Someone is at the door";

				if (securitySwitch == 1)
				{
					SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

					conDataBase->Open();
					std::cout << "Success";

					SqlCommand^ cmd = gcnew SqlCommand("UPDATE Actuator1 SET Switch=@Switch WHERE Switch=1", conDataBase);
					cmd->Parameters->AddWithValue("@Switch", 0);
					cmd->ExecuteNonQuery();

					conDataBase->Close();
				}

				SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

				conDataBase->Open();
				SqlCommand^ cmd = gcnew SqlCommand("UPDATE SecurityTrigger SET sensorVal=@sensorVal WHERE sensorVal=0", conDataBase);
				cmd->Parameters->AddWithValue("@sensorVal", 1);
				cmd->ExecuteNonQuery();

				conDataBase->Close();

			}

			else
			{
				label8->Text = "Front Door Status: Nothing is at the door";

				SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

				conDataBase->Open();
				SqlCommand^ cmd = gcnew SqlCommand("UPDATE SecurityTrigger SET sensorVal=@sensorVal WHERE sensorVal=1", conDataBase);
				cmd->Parameters->AddWithValue("@sensorVal", 0);
				cmd->ExecuteNonQuery();

				conDataBase->Close();
			}


		}


		SqlConnection^ conDataBase3 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase3->Open();
		SqlCommand^ cmd3 = gcnew SqlCommand("SELECT SUM(DATEDIFF(SECOND, TimeOn, TimeOff)) AS timeDiff FROM TimeDifferences", conDataBase3);
		int totalSecs = (int)cmd3->ExecuteScalar();

		//label5->Text = totalSecs.ToString();

		SqlConnection^ conDataBase4 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase4->Open();
		SqlCommand^ cmd4 = gcnew SqlCommand("SELECT CAST(AVG(Rates) AS float) FROM MeralcoRates", conDataBase4);
		double avg = (double)cmd4->ExecuteScalar();

		//label6->Text = avg.ToString();

		energyBillPrediction = (static_cast<double>(totalSecs)/3600)*0.01;

		label7->Text = "Estimated Power Bill: P" + energyBillPrediction.ToString();

		SqlConnection^ conDataBase6 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase6->Open();

		SqlCommand^ cmd6 = gcnew SqlCommand("UPDATE energyBill SET energyBillVal=@energyBillVal WHERE ID=1", conDataBase6);

		cmd6->Parameters->AddWithValue("@energyBillVal", energyBillPrediction);
		cmd6->ExecuteNonQuery();

		conDataBase6->Close();







		timer1->Start();

	}

	String^ LS;

	/*private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ conDataBase5 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase5->Open();
		SqlCommand^ cmd5 = gcnew SqlCommand("DBCC CHECKIDENT('TimeDifferences', RESEED, 0)", conDataBase5);
		cmd5->ExecuteNonQuery();
		conDataBase5->Close();

		SqlConnection^ conDataBase6 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase6->Open();
		SqlCommand^ cmd6 = gcnew SqlCommand("TRUNCATE TABLE TimeDifferences", conDataBase6);
		cmd6->ExecuteNonQuery();
		conDataBase6->Close();

		SqlConnection^ conDataBase4 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
		conDataBase4->Open();
		SqlCommand^ cmd4 = gcnew SqlCommand("SELECT * FROM RoomLightTimestamps", conDataBase4);
		SqlDataReader^ rd4 = cmd4->ExecuteReader();

		rowCount = 0;

		while (rd4->Read() && rowCounterReset == 0)
		{
			rowCount++;
		}

		rowCounterReset = 0;

		std::cout << rowCount << std::endl;//===

		if (rowCounterReset == 0)
		{
			timeOnTurn = 1;
			timeOffTurn = 0;


			for (int i = 1; i <= rowCount; i++)
			{

				SqlConnection^ conDataBase7 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
				conDataBase7->Open();

				SqlCommand^ cmd7 = gcnew SqlCommand("SELECT LightStatus, TimeStamp FROM RoomLightTimestamps WHERE ID = " + i, conDataBase7);
				SqlDataReader^ rd7 = cmd7->ExecuteReader();
				rd7->Read();
				LS = rd7->GetString(rd7->GetOrdinal("LightStatus"));
				//TS = rd3->GetTimeSpan(rd3->GetOrdinal("TimeStamp"));

	

				//std::cout << i << std::endl;//====
				//Console::WriteLine(word);//=======
				

				if (i == 1 && LS == "Off       ")
				{
					std::cout << "Skipped!" << std::endl;
				}

				else
				{

					if (LS == "On        " && timeOnTurn == 1)
					{
						timeOnInput = rd7->GetTimeSpan(rd7->GetOrdinal("TimeStamp"));

						conDataBase7->Close();

						timeOnTurn = 0;
						timeOffTurn = 1;

						//std::cout << "time on input success" << std::endl;//======
					}

					else if (LS == "Off       " && timeOffTurn == 1)
					{
						timeOffInput = rd7->GetTimeSpan(rd7->GetOrdinal("TimeStamp"));

						conDataBase7->Close();

						timeOnTurn = 1;
						timeOffTurn = 0;

						timeSpanInputFlag = 1;

						//std::cout << "time off input success" << std::endl;//==========
					}

					if (timeSpanInputFlag == 1)
					{
						SqlConnection^ conDataBase5 = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);
						conDataBase5->Open();

						SqlCommand^ cmd5 = gcnew SqlCommand("INSERT INTO TimeDifferences (TimeOn, TimeOff) VALUES (@TimeOn, @TimeOff)", conDataBase5);
						cmd5->Parameters->AddWithValue("@TimeOn", timeOnInput);
						cmd5->Parameters->AddWithValue("@TimeOff", timeOffInput);
						cmd5->ExecuteNonQuery();
						conDataBase5->Close();

						timeSpanInputFlag = 0;

						std::cout << "row inserted" << std::endl;
					}

				}

			}
		}

	}*/

	private: System::Void serialPort1_DataReceived(System::Object^ sender, System::IO::Ports::SerialDataReceivedEventArgs^ e) {


	}

	private: System::Void securityOnBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

		conDataBase->Open();
		SqlCommand^ cmd = gcnew SqlCommand("UPDATE SecuritySwitch SET sensorSwitchVal=@sensorSwitchVal WHERE sensorSwitchVal=0", conDataBase);
		cmd->Parameters->AddWithValue("@sensorSwitchVal", 1);
		cmd->ExecuteNonQuery();

		conDataBase->Close();


	}
	private: System::Void securityOffBtn_Click(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ conDataBase = gcnew SqlConnection("Data Source = " + DataSourceText->Text + "; Initial Catalog = " + DatabaseText->Text + "; User ID = " + UserIDText->Text + "; Password = " + PasswordText->Text);

		conDataBase->Open();
		SqlCommand^ cmd = gcnew SqlCommand("UPDATE SecuritySwitch SET sensorSwitchVal=@sensorSwitchVal WHERE sensorSwitchVal=1", conDataBase);
		cmd->Parameters->AddWithValue("@sensorSwitchVal", 0);
		cmd->ExecuteNonQuery();

		conDataBase->Close();


	}
};
}
