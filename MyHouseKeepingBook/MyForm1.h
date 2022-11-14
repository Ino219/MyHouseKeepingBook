#pragma once
#include"priceDataSet.h"
#include"ctgDS.h"
//#include"MyForm.h"

namespace MyHouseKeepingBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm1 の概要
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//


		}

	
	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	public:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  OKbutton;
	private: System::Windows::Forms::Button^  Cancel_button;
	public: System::Windows::Forms::ComboBox^  cmb_ctg;
	private:
	public: System::Windows::Forms::TextBox^  item;
	public: System::Windows::Forms::MaskedTextBox^  price;
	public: System::Windows::Forms::TextBox^  other;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->OKbutton = (gcnew System::Windows::Forms::Button());
			this->Cancel_button = (gcnew System::Windows::Forms::Button());
			this->cmb_ctg = (gcnew System::Windows::Forms::ComboBox());
			this->item = (gcnew System::Windows::Forms::TextBox());
			this->price = (gcnew System::Windows::Forms::MaskedTextBox());
			this->other = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(13, 13);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(225, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"分類";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(224, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"品名";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(224, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 12);
			this->label3->TabIndex = 3;
			this->label3->Text = L"金額";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(225, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 12);
			this->label4->TabIndex = 4;
			this->label4->Text = L"備考";
			// 
			// OKbutton
			// 
			this->OKbutton->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->OKbutton->Location = System::Drawing::Point(37, 201);
			this->OKbutton->Name = L"OKbutton";
			this->OKbutton->Size = System::Drawing::Size(75, 23);
			this->OKbutton->TabIndex = 5;
			this->OKbutton->Text = L"登録";
			this->OKbutton->UseVisualStyleBackColor = true;
			// 
			// Cancel_button
			// 
			this->Cancel_button->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Cancel_button->Location = System::Drawing::Point(227, 201);
			this->Cancel_button->Name = L"Cancel_button";
			this->Cancel_button->Size = System::Drawing::Size(75, 23);
			this->Cancel_button->TabIndex = 6;
			this->Cancel_button->Text = L"キャンセル";
			this->Cancel_button->UseVisualStyleBackColor = true;
			// 
			// cmb_ctg
			// 
			this->cmb_ctg->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmb_ctg->FormattingEnabled = true;
			this->cmb_ctg->Location = System::Drawing::Point(267, 13);
			this->cmb_ctg->Name = L"cmb_ctg";
			this->cmb_ctg->Size = System::Drawing::Size(121, 20);
			this->cmb_ctg->TabIndex = 7;
			// 
			// item
			// 
			this->item->Location = System::Drawing::Point(267, 58);
			this->item->Name = L"item";
			this->item->Size = System::Drawing::Size(100, 19);
			this->item->TabIndex = 8;
			// 
			// price
			// 
			this->price->Location = System::Drawing::Point(267, 93);
			this->price->Mask = L"999999";
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(100, 19);
			this->price->TabIndex = 9;
			this->price->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// other
			// 
			this->other->Location = System::Drawing::Point(267, 134);
			this->other->Name = L"other";
			this->other->Size = System::Drawing::Size(100, 19);
			this->other->TabIndex = 10;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 261);
			this->Controls->Add(this->other);
			this->Controls->Add(this->price);
			this->Controls->Add(this->item);
			this->Controls->Add(this->cmb_ctg);
			this->Controls->Add(this->Cancel_button);
			this->Controls->Add(this->OKbutton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->monthCalendar1);
			this->Name = L"MyForm1";
			this->Text = L"登録";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public:MyForm1(ctgDS^ ds) {
			//初期化
			InitializeComponent();
			//コンボボックスのデータ形式にctgDTを採用
			cmb_ctg->DataSource = ds->ctgDT;
			//コンボボックスに分類を表示
			cmb_ctg->DisplayMember = "分類";
		}



		public:MyForm1(ctgDS^ i_ctgds, DateTime i_date, String^ i_ctg, String^ i_item, int i_price, String^ i_other) {
			InitializeComponent();
			cmb_ctg->DataSource = i_ctgds->ctgDT;
			cmb_ctg->DisplayMember = "分類";
			monthCalendar1->SetDate(i_date);
			cmb_ctg->Text = i_ctg;
			item->Text = i_item;
			price->Text = i_price.ToString();
			other->Text = i_other;
		};

			
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}


};
}
