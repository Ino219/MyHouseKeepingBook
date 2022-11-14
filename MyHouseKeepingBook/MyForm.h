#pragma once
#include"MyForm1.h"
#include"priceDataSet.h"
#include"summaryDataSet.h"
#include"ctgDS.h"


namespace MyHouseKeepingBook {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  main_menu;
	protected:
	private: System::Windows::Forms::DataGridView^  dgv;
	private: System::Windows::Forms::Button^  button_add;
	private: System::Windows::Forms::Button^  button_change;
	private: System::Windows::Forms::Button^  button_del;
	private: System::Windows::Forms::Button^  button_end;
	private: System::Windows::Forms::ToolStripMenuItem^  ファイルToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  終了XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  編集EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  追加AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  変更CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  削除DToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  表示VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  一覧表示LToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  集計表示ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ヘルプHToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  バージョン情報VToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  sumGridView;





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
			this->main_menu = (gcnew System::Windows::Forms::MenuStrip());
			this->ファイルToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->終了XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->編集EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->追加AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->変更CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->削除DToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->表示VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->一覧表示LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->集計表示ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ヘルプHToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->バージョン情報VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_change = (gcnew System::Windows::Forms::Button());
			this->button_del = (gcnew System::Windows::Forms::Button());
			this->button_end = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->sumGridView = (gcnew System::Windows::Forms::DataGridView());
			this->main_menu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sumGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// main_menu
			// 
			this->main_menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ファイルToolStripMenuItem,
					this->編集EToolStripMenuItem, this->表示VToolStripMenuItem, this->ヘルプHToolStripMenuItem
			});
			this->main_menu->Location = System::Drawing::Point(0, 0);
			this->main_menu->Name = L"main_menu";
			this->main_menu->Size = System::Drawing::Size(374, 24);
			this->main_menu->TabIndex = 0;
			this->main_menu->Text = L"menuStrip1";
			// 
			// ファイルToolStripMenuItem
			// 
			this->ファイルToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->保存SToolStripMenuItem,
					this->toolStripSeparator1, this->終了XToolStripMenuItem
			});
			this->ファイルToolStripMenuItem->Name = L"ファイルToolStripMenuItem";
			this->ファイルToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->ファイルToolStripMenuItem->Text = L"ファイル(&F)";
			// 
			// 保存SToolStripMenuItem
			// 
			this->保存SToolStripMenuItem->Name = L"保存SToolStripMenuItem";
			this->保存SToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->保存SToolStripMenuItem->Text = L"保存(&S)";
			this->保存SToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::保存SToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(110, 6);
			// 
			// 終了XToolStripMenuItem
			// 
			this->終了XToolStripMenuItem->Name = L"終了XToolStripMenuItem";
			this->終了XToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->終了XToolStripMenuItem->Text = L"終了(&X)";
			this->終了XToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::終了XToolStripMenuItem_Click);
			// 
			// 編集EToolStripMenuItem
			// 
			this->編集EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->追加AToolStripMenuItem,
					this->toolStripSeparator2, this->変更CToolStripMenuItem, this->toolStripSeparator3, this->削除DToolStripMenuItem
			});
			this->編集EToolStripMenuItem->Name = L"編集EToolStripMenuItem";
			this->編集EToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->編集EToolStripMenuItem->Text = L"編集(&E)";
			// 
			// 追加AToolStripMenuItem
			// 
			this->追加AToolStripMenuItem->Name = L"追加AToolStripMenuItem";
			this->追加AToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->追加AToolStripMenuItem->Text = L"追加(&A)";
			this->追加AToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::追加AToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(111, 6);
			// 
			// 変更CToolStripMenuItem
			// 
			this->変更CToolStripMenuItem->Name = L"変更CToolStripMenuItem";
			this->変更CToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->変更CToolStripMenuItem->Text = L"変更(&C)";
			this->変更CToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::変更CToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(111, 6);
			// 
			// 削除DToolStripMenuItem
			// 
			this->削除DToolStripMenuItem->Name = L"削除DToolStripMenuItem";
			this->削除DToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->削除DToolStripMenuItem->Text = L"削除(&D)";
			this->削除DToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::削除DToolStripMenuItem_Click);
			// 
			// 表示VToolStripMenuItem
			// 
			this->表示VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->一覧表示LToolStripMenuItem,
					this->toolStripSeparator4, this->集計表示ToolStripMenuItem
			});
			this->表示VToolStripMenuItem->Name = L"表示VToolStripMenuItem";
			this->表示VToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->表示VToolStripMenuItem->Text = L"表示(&V)";
			// 
			// 一覧表示LToolStripMenuItem
			// 
			this->一覧表示LToolStripMenuItem->Name = L"一覧表示LToolStripMenuItem";
			this->一覧表示LToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->一覧表示LToolStripMenuItem->Text = L"一覧表示(&L)";
			this->一覧表示LToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::一覧表示LToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(177, 6);
			// 
			// 集計表示ToolStripMenuItem
			// 
			this->集計表示ToolStripMenuItem->Name = L"集計表示ToolStripMenuItem";
			this->集計表示ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->集計表示ToolStripMenuItem->Text = L"集計表示(&S)";
			this->集計表示ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::集計表示ToolStripMenuItem_Click);
			// 
			// ヘルプHToolStripMenuItem
			// 
			this->ヘルプHToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->バージョン情報VToolStripMenuItem });
			this->ヘルプHToolStripMenuItem->Name = L"ヘルプHToolStripMenuItem";
			this->ヘルプHToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ヘルプHToolStripMenuItem->Text = L"ヘルプ(&H)";
			// 
			// バージョン情報VToolStripMenuItem
			// 
			this->バージョン情報VToolStripMenuItem->Name = L"バージョン情報VToolStripMenuItem";
			this->バージョン情報VToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->バージョン情報VToolStripMenuItem->Text = L"バージョン情報(&V)";
			// 
			// dgv
			// 
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Location = System::Drawing::Point(3, 3);
			this->dgv->Name = L"dgv";
			this->dgv->RowTemplate->Height = 21;
			this->dgv->Size = System::Drawing::Size(331, 178);
			this->dgv->TabIndex = 1;
			// 
			// button_add
			// 
			this->button_add->Location = System::Drawing::Point(5, 184);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(75, 23);
			this->button_add->TabIndex = 2;
			this->button_add->Text = L"追加";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_change
			// 
			this->button_change->Location = System::Drawing::Point(86, 183);
			this->button_change->Name = L"button_change";
			this->button_change->Size = System::Drawing::Size(75, 23);
			this->button_change->TabIndex = 3;
			this->button_change->Text = L"変更";
			this->button_change->UseVisualStyleBackColor = true;
			this->button_change->Click += gcnew System::EventHandler(this, &MyForm::button_change_Click);
			// 
			// button_del
			// 
			this->button_del->Location = System::Drawing::Point(167, 183);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(75, 23);
			this->button_del->TabIndex = 4;
			this->button_del->Text = L"削除";
			this->button_del->UseVisualStyleBackColor = true;
			this->button_del->Click += gcnew System::EventHandler(this, &MyForm::button_del_Click);
			// 
			// button_end
			// 
			this->button_end->Location = System::Drawing::Point(259, 183);
			this->button_end->Name = L"button_end";
			this->button_end->Size = System::Drawing::Size(75, 23);
			this->button_end->TabIndex = 5;
			this->button_end->Text = L"終了";
			this->button_end->UseVisualStyleBackColor = true;
			this->button_end->Click += gcnew System::EventHandler(this, &MyForm::button_end_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(17, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(345, 238);
			this->tabControl1->TabIndex = 6;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dgv);
			this->tabPage1->Controls->Add(this->button_change);
			this->tabPage1->Controls->Add(this->button_end);
			this->tabPage1->Controls->Add(this->button_del);
			this->tabPage1->Controls->Add(this->button_add);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(337, 212);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"一覧表示";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->sumGridView);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(337, 212);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"集計表示";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// sumGridView
			// 
			this->sumGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->sumGridView->Location = System::Drawing::Point(7, 7);
			this->sumGridView->Name = L"sumGridView";
			this->sumGridView->RowTemplate->Height = 21;
			this->sumGridView->Size = System::Drawing::Size(324, 162);
			this->sumGridView->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(374, 292);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->main_menu);
			this->MainMenuStrip = this->main_menu;
			this->Name = L"MyForm";
			this->Text = L"簡易家計簿";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->main_menu->ResumeLayout(false);
			this->main_menu->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sumGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
		priceDataSet^ pds;
		ctgDS^ ctgds;
		summaryDataSet^ sds;


		//データ追加のサブルーチン
		 private:Void Add() {
			 //引数で分類情報を渡して、インスタンス作成
			 MyForm1^ mf1 = gcnew MyForm1(ctgds);
			 //登録画面表示
			 mf1->ShowDialog();
			 //OKが押されたら、一覧画面に各情報を追加
			 if (mf1->DialogResult == System::Windows::Forms::DialogResult::OK) {
				 pds->DataTable1->AddDataTable1Row(
					 mf1->monthCalendar1->SelectionRange->Start,
					 mf1->cmb_ctg->Text,
					 mf1->item->Text,
					 int::Parse(mf1->price->Text),
					 mf1->other->Text
				 );
			 }
		 }

		
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		pds = gcnew priceDataSet();
		//データグリッドビューのデータとプライスデータビューのデータ形式を紐づける
		dgv->DataSource = pds->DataTable1;

		//分類のメニューと入出金分類をセット
		ctgds = gcnew ctgDS();
		ctgds->ctgDT->AddctgDTRow("給料", "入金");
		ctgds->ctgDT->AddctgDTRow("食費", "出金");
		ctgds->ctgDT->AddctgDTRow("雑費", "出金");
		ctgds->ctgDT->AddctgDTRow("住居", "出金");

		sds = gcnew summaryDataSet();
		sumGridView->DataSource=sds->SumDataTable;

		//保存されていたデータの読み込み
	  LoadData();
	}
	private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e) {
		Add();
	}
		 
		 private:Void Save() {
			 //保存先ファイルのパス
			 String^ path = "priceData.csv";
			 //1行分のデータを初期化
			 String^ Data = "";
			 //ストリームライターはファイル書き込み用のライブラリ
			 StreamWriter^ sw = gcnew StreamWriter(
				 path,
				 false,
				 System::Text::Encoding::Default
			 );

			 if (pds->Tables["DataTable1"]->Rows->Count == 0) {
				 return;
			 }
			 else {
				 for each(DataRow^ dr in pds->Tables["DataTable1"]->Rows) {
					 Data = dr["日付"]->ToString() + ","
						 + dr["分類"] + ","
						 + dr["品名"] + ","
						 + dr["金額"]->ToString() + ","
						 + dr["備考"];
					 sw->WriteLine(Data);
				 }
			 }
			 sw->Close();

		 }
	private:void LoadData() {
		String^ path = "priceData.csv";
		String^ delim = ",";
		array<Char>^ array_delim = delim->ToCharArray();
		array<String^>^ strData;
		String^ strLine;
		//ファイルの存否を判断
		Boolean exist = System::IO::File::Exists(path);
		if (exist) {
			//ファイルが存在すれば、読みこむ
			StreamReader^ sr = gcnew StreamReader(
				path,
				System::Text::Encoding::Default
			);
			while (sr->Peek() >= 0) {
				//1行分、データを読み込む
				strLine = sr->ReadLine();
				//カンマで分割しながら、配列に格納していく
				strData = strLine->Split(array_delim);
				pds->DataTable1->AddDataTable1Row(
					//配列に格納したデータを先頭から順番に追加していく
					DateTime::Parse(strData[0]),
					strData[1],
					strData[2],
					int::Parse(strData[3]),
					strData[4]
				);
			}
			sr->Close();
		}
	}
			private:void UpdateData() {
				//選択中の行のインデックスを取得
				int nowRow = dgv->CurrentRow->Index;
				//その行のデータを取得していく
				DateTime old_date = DateTime::Parse(dgv->Rows[nowRow]->Cells[0]->Value->ToString());
				String^ old_ctg= dgv->Rows[nowRow]->Cells[1]->Value->ToString();
				String^ old_item= dgv->Rows[nowRow]->Cells[2]->Value->ToString();
				int old_price = int::Parse(dgv->Rows[nowRow]->Cells[3]->Value->ToString());
				String^ old_other = dgv->Rows[nowRow]->Cells[4]->Value->ToString();
				//あらかじめ、データが入力されている状態で登録画面を開く
				MyForm1^ mf1 = gcnew MyForm1(ctgds,old_date,old_ctg,old_item,old_price,old_other);
				mf1->ShowDialog();
				//OKを押した場合、現在の入力情報を登録し直す
				if (mf1->DialogResult == System::Windows::Forms::DialogResult::OK) {
					dgv->Rows[nowRow]->Cells[0]->Value = mf1->monthCalendar1->SelectionRange->Start;
					dgv->Rows[nowRow]->Cells[1]->Value = mf1->cmb_ctg->Text;
					dgv->Rows[nowRow]->Cells[2]->Value = mf1->item->Text;
					dgv->Rows[nowRow]->Cells[3]->Value = int::Parse(mf1->price->Text);
					dgv->Rows[nowRow]->Cells[4]->Value = mf1->other->Text;
				}
			}
			private:void DeleteData() {
				//選択中のデータを削除
				int nowData = dgv->CurrentRow->Index;
				dgv->Rows->RemoveAt(nowData);
			}
			private:void Calc() {
				String^ exp;
				//集計画面を初期化
				sds->SumDataTable->Clear();
				//1行分のデータ変数とデータテーブルを定義
				for each(priceDataSet::DataTable1Row^ prices in pds->DataTable1) {
					//日付=**月**日,という形式でデータを取得
					exp = "日付='" + prices->日付.ToShortDateString() + "'";
					//一致するデータを配列に格納
					array<summaryDataSet::SumDataTableRow^>^ cur = (array<summaryDataSet::SumDataTableRow^>^) sds->SumDataTable->Select(exp);
					//一致するデータがない場合
					if (cur->Length == 0) {
						array<ctgDS::ctgDTRow^>^ selectDataRow;
						//分類に一致するデータを取得
						selectDataRow = (array<ctgDS::ctgDTRow^>^) ctgds->ctgDT->Select("分類='" + prices->分類 + "'");
						//それぞれのデータに0入金、0出金のデータを出力
						if (selectDataRow[0]->入出金分類 == "入金") {
							sds->SumDataTable->AddSumDataTableRow(
								prices->日付, prices->金額, 0
							);
						}
						else if(selectDataRow[0]->入出金分類 == "出金"){
							sds->SumDataTable->AddSumDataTableRow(
								prices->日付, 0,prices->金額
							);
						}
					}
					//一致するデータがある場合
					else {
						array<ctgDS::ctgDTRow^>^ selectedDataRow;
						selectedDataRow = (array<ctgDS::ctgDTRow^>^) ctgds->ctgDT->Select(
							"分類='" + prices->分類 + "'"
						);
							if (selectedDataRow[0]->入出金分類 == "入金") {
								cur[0]->入金合計 += prices->金額;
							}
							else if (selectedDataRow[0]->入出金分類 == "出金") {
								cur[0]->出金合計 += (int)prices->金額;
							}
					}
				}
			}
private: System::Void button_end_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void 終了XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void 追加AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Add();
}
private: System::Void 保存SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Save();
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	Save();
}
private: System::Void button_change_Click(System::Object^  sender, System::EventArgs^  e) {
	UpdateData();
}
private: System::Void 変更CToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	UpdateData();
}
private: System::Void button_del_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteData();
}
private: System::Void 削除DToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteData();
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	Calc();
}
private: System::Void 一覧表示LToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage1);
}
private: System::Void 集計表示ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage2);
}
};
}
