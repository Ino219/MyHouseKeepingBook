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
	/// MyForm �̊T�v
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
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
	private: System::Windows::Forms::ToolStripMenuItem^  �t�@�C��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ۑ�SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  �I��XToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ҏWEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ǉ�AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  �ύXCToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  �폜DToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �\��VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ꗗ�\��LToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  �W�v�\��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �w���vHToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �o�[�W�������VToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  sumGridView;





	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->main_menu = (gcnew System::Windows::Forms::MenuStrip());
			this->�t�@�C��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ۑ�SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�I��XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ҏWEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ǉ�AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�ύXCToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�폜DToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�\��VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ꗗ�\��LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�W�v�\��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�w���vHToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�o�[�W�������VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->�t�@�C��ToolStripMenuItem,
					this->�ҏWEToolStripMenuItem, this->�\��VToolStripMenuItem, this->�w���vHToolStripMenuItem
			});
			this->main_menu->Location = System::Drawing::Point(0, 0);
			this->main_menu->Name = L"main_menu";
			this->main_menu->Size = System::Drawing::Size(374, 24);
			this->main_menu->TabIndex = 0;
			this->main_menu->Text = L"menuStrip1";
			// 
			// �t�@�C��ToolStripMenuItem
			// 
			this->�t�@�C��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ۑ�SToolStripMenuItem,
					this->toolStripSeparator1, this->�I��XToolStripMenuItem
			});
			this->�t�@�C��ToolStripMenuItem->Name = L"�t�@�C��ToolStripMenuItem";
			this->�t�@�C��ToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->�t�@�C��ToolStripMenuItem->Text = L"�t�@�C��(&F)";
			// 
			// �ۑ�SToolStripMenuItem
			// 
			this->�ۑ�SToolStripMenuItem->Name = L"�ۑ�SToolStripMenuItem";
			this->�ۑ�SToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->�ۑ�SToolStripMenuItem->Text = L"�ۑ�(&S)";
			this->�ۑ�SToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�ۑ�SToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(110, 6);
			// 
			// �I��XToolStripMenuItem
			// 
			this->�I��XToolStripMenuItem->Name = L"�I��XToolStripMenuItem";
			this->�I��XToolStripMenuItem->Size = System::Drawing::Size(113, 22);
			this->�I��XToolStripMenuItem->Text = L"�I��(&X)";
			this->�I��XToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�I��XToolStripMenuItem_Click);
			// 
			// �ҏWEToolStripMenuItem
			// 
			this->�ҏWEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->�ǉ�AToolStripMenuItem,
					this->toolStripSeparator2, this->�ύXCToolStripMenuItem, this->toolStripSeparator3, this->�폜DToolStripMenuItem
			});
			this->�ҏWEToolStripMenuItem->Name = L"�ҏWEToolStripMenuItem";
			this->�ҏWEToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->�ҏWEToolStripMenuItem->Text = L"�ҏW(&E)";
			// 
			// �ǉ�AToolStripMenuItem
			// 
			this->�ǉ�AToolStripMenuItem->Name = L"�ǉ�AToolStripMenuItem";
			this->�ǉ�AToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->�ǉ�AToolStripMenuItem->Text = L"�ǉ�(&A)";
			this->�ǉ�AToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�ǉ�AToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(111, 6);
			// 
			// �ύXCToolStripMenuItem
			// 
			this->�ύXCToolStripMenuItem->Name = L"�ύXCToolStripMenuItem";
			this->�ύXCToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->�ύXCToolStripMenuItem->Text = L"�ύX(&C)";
			this->�ύXCToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�ύXCToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(111, 6);
			// 
			// �폜DToolStripMenuItem
			// 
			this->�폜DToolStripMenuItem->Name = L"�폜DToolStripMenuItem";
			this->�폜DToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->�폜DToolStripMenuItem->Text = L"�폜(&D)";
			this->�폜DToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�폜DToolStripMenuItem_Click);
			// 
			// �\��VToolStripMenuItem
			// 
			this->�\��VToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�ꗗ�\��LToolStripMenuItem,
					this->toolStripSeparator4, this->�W�v�\��ToolStripMenuItem
			});
			this->�\��VToolStripMenuItem->Name = L"�\��VToolStripMenuItem";
			this->�\��VToolStripMenuItem->Size = System::Drawing::Size(58, 20);
			this->�\��VToolStripMenuItem->Text = L"�\��(&V)";
			// 
			// �ꗗ�\��LToolStripMenuItem
			// 
			this->�ꗗ�\��LToolStripMenuItem->Name = L"�ꗗ�\��LToolStripMenuItem";
			this->�ꗗ�\��LToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�ꗗ�\��LToolStripMenuItem->Text = L"�ꗗ�\��(&L)";
			this->�ꗗ�\��LToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�ꗗ�\��LToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(177, 6);
			// 
			// �W�v�\��ToolStripMenuItem
			// 
			this->�W�v�\��ToolStripMenuItem->Name = L"�W�v�\��ToolStripMenuItem";
			this->�W�v�\��ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�W�v�\��ToolStripMenuItem->Text = L"�W�v�\��(&S)";
			this->�W�v�\��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�W�v�\��ToolStripMenuItem_Click);
			// 
			// �w���vHToolStripMenuItem
			// 
			this->�w���vHToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�o�[�W�������VToolStripMenuItem });
			this->�w���vHToolStripMenuItem->Name = L"�w���vHToolStripMenuItem";
			this->�w���vHToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->�w���vHToolStripMenuItem->Text = L"�w���v(&H)";
			// 
			// �o�[�W�������VToolStripMenuItem
			// 
			this->�o�[�W�������VToolStripMenuItem->Name = L"�o�[�W�������VToolStripMenuItem";
			this->�o�[�W�������VToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->�o�[�W�������VToolStripMenuItem->Text = L"�o�[�W�������(&V)";
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
			this->button_add->Text = L"�ǉ�";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);
			// 
			// button_change
			// 
			this->button_change->Location = System::Drawing::Point(86, 183);
			this->button_change->Name = L"button_change";
			this->button_change->Size = System::Drawing::Size(75, 23);
			this->button_change->TabIndex = 3;
			this->button_change->Text = L"�ύX";
			this->button_change->UseVisualStyleBackColor = true;
			this->button_change->Click += gcnew System::EventHandler(this, &MyForm::button_change_Click);
			// 
			// button_del
			// 
			this->button_del->Location = System::Drawing::Point(167, 183);
			this->button_del->Name = L"button_del";
			this->button_del->Size = System::Drawing::Size(75, 23);
			this->button_del->TabIndex = 4;
			this->button_del->Text = L"�폜";
			this->button_del->UseVisualStyleBackColor = true;
			this->button_del->Click += gcnew System::EventHandler(this, &MyForm::button_del_Click);
			// 
			// button_end
			// 
			this->button_end->Location = System::Drawing::Point(259, 183);
			this->button_end->Name = L"button_end";
			this->button_end->Size = System::Drawing::Size(75, 23);
			this->button_end->TabIndex = 5;
			this->button_end->Text = L"�I��";
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
			this->tabPage1->Text = L"�ꗗ�\��";
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
			this->tabPage2->Text = L"�W�v�\��";
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
			this->Text = L"�ȈՉƌv��";
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


		//�f�[�^�ǉ��̃T�u���[�`��
		 private:Void Add() {
			 //�����ŕ��ޏ���n���āA�C���X�^���X�쐬
			 MyForm1^ mf1 = gcnew MyForm1(ctgds);
			 //�o�^��ʕ\��
			 mf1->ShowDialog();
			 //OK�������ꂽ��A�ꗗ��ʂɊe����ǉ�
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
		//�f�[�^�O���b�h�r���[�̃f�[�^�ƃv���C�X�f�[�^�r���[�̃f�[�^�`����R�Â���
		dgv->DataSource = pds->DataTable1;

		//���ނ̃��j���[�Ɠ��o�����ނ��Z�b�g
		ctgds = gcnew ctgDS();
		ctgds->ctgDT->AddctgDTRow("����", "����");
		ctgds->ctgDT->AddctgDTRow("�H��", "�o��");
		ctgds->ctgDT->AddctgDTRow("�G��", "�o��");
		ctgds->ctgDT->AddctgDTRow("�Z��", "�o��");

		sds = gcnew summaryDataSet();
		sumGridView->DataSource=sds->SumDataTable;

		//�ۑ�����Ă����f�[�^�̓ǂݍ���
	  LoadData();
	}
	private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e) {
		Add();
	}
		 
		 private:Void Save() {
			 //�ۑ���t�@�C���̃p�X
			 String^ path = "priceData.csv";
			 //1�s���̃f�[�^��������
			 String^ Data = "";
			 //�X�g���[�����C�^�[�̓t�@�C���������ݗp�̃��C�u����
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
					 Data = dr["���t"]->ToString() + ","
						 + dr["����"] + ","
						 + dr["�i��"] + ","
						 + dr["���z"]->ToString() + ","
						 + dr["���l"];
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
		//�t�@�C���̑��ۂ𔻒f
		Boolean exist = System::IO::File::Exists(path);
		if (exist) {
			//�t�@�C�������݂���΁A�ǂ݂���
			StreamReader^ sr = gcnew StreamReader(
				path,
				System::Text::Encoding::Default
			);
			while (sr->Peek() >= 0) {
				//1�s���A�f�[�^��ǂݍ���
				strLine = sr->ReadLine();
				//�J���}�ŕ������Ȃ���A�z��Ɋi�[���Ă���
				strData = strLine->Split(array_delim);
				pds->DataTable1->AddDataTable1Row(
					//�z��Ɋi�[�����f�[�^��擪���珇�Ԃɒǉ����Ă���
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
				//�I�𒆂̍s�̃C���f�b�N�X���擾
				int nowRow = dgv->CurrentRow->Index;
				//���̍s�̃f�[�^���擾���Ă���
				DateTime old_date = DateTime::Parse(dgv->Rows[nowRow]->Cells[0]->Value->ToString());
				String^ old_ctg= dgv->Rows[nowRow]->Cells[1]->Value->ToString();
				String^ old_item= dgv->Rows[nowRow]->Cells[2]->Value->ToString();
				int old_price = int::Parse(dgv->Rows[nowRow]->Cells[3]->Value->ToString());
				String^ old_other = dgv->Rows[nowRow]->Cells[4]->Value->ToString();
				//���炩���߁A�f�[�^�����͂���Ă����Ԃœo�^��ʂ��J��
				MyForm1^ mf1 = gcnew MyForm1(ctgds,old_date,old_ctg,old_item,old_price,old_other);
				mf1->ShowDialog();
				//OK���������ꍇ�A���݂̓��͏���o�^������
				if (mf1->DialogResult == System::Windows::Forms::DialogResult::OK) {
					dgv->Rows[nowRow]->Cells[0]->Value = mf1->monthCalendar1->SelectionRange->Start;
					dgv->Rows[nowRow]->Cells[1]->Value = mf1->cmb_ctg->Text;
					dgv->Rows[nowRow]->Cells[2]->Value = mf1->item->Text;
					dgv->Rows[nowRow]->Cells[3]->Value = int::Parse(mf1->price->Text);
					dgv->Rows[nowRow]->Cells[4]->Value = mf1->other->Text;
				}
			}
			private:void DeleteData() {
				//�I�𒆂̃f�[�^���폜
				int nowData = dgv->CurrentRow->Index;
				dgv->Rows->RemoveAt(nowData);
			}
			private:void Calc() {
				String^ exp;
				//�W�v��ʂ�������
				sds->SumDataTable->Clear();
				//1�s���̃f�[�^�ϐ��ƃf�[�^�e�[�u�����`
				for each(priceDataSet::DataTable1Row^ prices in pds->DataTable1) {
					//���t=**��**��,�Ƃ����`���Ńf�[�^���擾
					exp = "���t='" + prices->���t.ToShortDateString() + "'";
					//��v����f�[�^��z��Ɋi�[
					array<summaryDataSet::SumDataTableRow^>^ cur = (array<summaryDataSet::SumDataTableRow^>^) sds->SumDataTable->Select(exp);
					//��v����f�[�^���Ȃ��ꍇ
					if (cur->Length == 0) {
						array<ctgDS::ctgDTRow^>^ selectDataRow;
						//���ނɈ�v����f�[�^���擾
						selectDataRow = (array<ctgDS::ctgDTRow^>^) ctgds->ctgDT->Select("����='" + prices->���� + "'");
						//���ꂼ��̃f�[�^��0�����A0�o���̃f�[�^���o��
						if (selectDataRow[0]->���o������ == "����") {
							sds->SumDataTable->AddSumDataTableRow(
								prices->���t, prices->���z, 0
							);
						}
						else if(selectDataRow[0]->���o������ == "�o��"){
							sds->SumDataTable->AddSumDataTableRow(
								prices->���t, 0,prices->���z
							);
						}
					}
					//��v����f�[�^������ꍇ
					else {
						array<ctgDS::ctgDTRow^>^ selectedDataRow;
						selectedDataRow = (array<ctgDS::ctgDTRow^>^) ctgds->ctgDT->Select(
							"����='" + prices->���� + "'"
						);
							if (selectedDataRow[0]->���o������ == "����") {
								cur[0]->�������v += prices->���z;
							}
							else if (selectedDataRow[0]->���o������ == "�o��") {
								cur[0]->�o�����v += (int)prices->���z;
							}
					}
				}
			}
private: System::Void button_end_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void �I��XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void �ǉ�AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Add();
}
private: System::Void �ۑ�SToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Save();
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	Save();
}
private: System::Void button_change_Click(System::Object^  sender, System::EventArgs^  e) {
	UpdateData();
}
private: System::Void �ύXCToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	UpdateData();
}
private: System::Void button_del_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteData();
}
private: System::Void �폜DToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteData();
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	Calc();
}
private: System::Void �ꗗ�\��LToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage1);
}
private: System::Void �W�v�\��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	tabControl1->SelectTab(tabPage2);
}
};
}
