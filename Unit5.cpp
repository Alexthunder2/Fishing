//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "Unit11.h"
#include "Unit12.h"
#include "Unit13.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
Graphics::TBitmap *mma=new Graphics::TBitmap(), *mas=new Graphics::TBitmap();
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::FormClose(TObject *Sender, TCloseAction &Action)
{
Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
Form1->lm++;
if (Form1->lm==2) {
Form4->Image3->Visible=False;
Form4->Image4->Visible=False;
Form4->Label2->Caption="5";
Form4->Label4->Caption="0";
Form4->Label5->Caption="0";
Form4->Button1->Visible=False;
Form4->Label6->Caption="������� 10 ����������";
Form4->Label7->Caption="������� 5 ����� ������";
Form5->Close();
Form4->Show();
}
if (Form1->lm==3) {
Form4->Image3->Visible=False;
Form4->Image4->Visible=False;
Form4->Label3->Caption="1";
Form4->Label2->Caption="10";
Form4->Label4->Caption="0";
Form4->Label5->Caption="0";
Form4->Button1->Visible=False;
Form4->Label6->Caption="��������������� ������� 1 ���";
Form4->Label7->Caption="������� 10 ���, �������������� � �������";
Form5->Close();
Form4->Show();
}
if (Form1->lm==4) {
Form4->Image3->Visible=False;
Form4->Image4->Visible=False;
Form4->Label3->Caption="15";
Form4->Label2->Caption="10";
Form4->Label4->Caption="0";
Form4->Label5->Caption="0";
Form4->Button1->Visible=False;
Form4->Label6->Caption="�������� ��� 15-�� ������ �����";
Form4->Label7->Caption="������� 10 ���";
Form5->Close();
Form4->Show();
}
if (Form1->lm==5) {
Form4->Image3->Visible=False;
Form4->Image4->Visible=False;
Form4->Label3->Caption="1150";
Form4->Label2->Caption="7000";
Form4->Label4->Caption=IntToStr(Form1->record);
Form4->Label5->Caption="0";
Form4->Button1->Visible=False;
Form4->Label6->Caption="���������� ����� ������ ��� ������� 1150 �����";
Form4->Label7->Caption="�������� ������ ����� ����� 7000 �����";
Form4->Label2->Font->Size=10;
Form4->Label5->Font->Size=10;
Form4->Label3->Font->Size=10;
Form4->Label4->Font->Size=10;
Form5->Close();
Form4->Show();
}
if (Form1->lm==6) {
Form4->Image3->Visible=False;
Form4->Image4->Visible=False;
Form4->Label3->Caption="10";
Form4->Label2->Caption="2";
Form4->Label4->Caption="0";
Form4->Label5->Caption="0";
Form4->Button1->Visible=False;
Form4->Label6->Caption="������� 10 ��� ����� �� ����� 60 �����";
Form4->Label7->Caption="����� 2 ��������� ����� �� �����";
Form4->Label2->Font->Size=20;
Form4->Label5->Font->Size=20;
Form4->Label3->Font->Size=20;
Form4->Label4->Font->Size=20;
Form5->Close();
Form4->Show();
}
if (Form1->lm==7) {
Form4->Image3->Visible=False;
Form4->Image4->Visible=False;
Form4->Label3->Caption="10";
Form4->Label2->Caption="1";
Form4->Label4->Caption="0";
Form4->Label5->Caption="0";
Form4->Button1->Visible=False;
Form4->Label6->Caption="������� 10 ��� ����� �� ����� 1000 �����";
Form4->Label7->Caption="������� ���� ���������� ����� 36 ������";
Form4->Label2->Font->Size=20;
Form4->Label5->Font->Size=20;
Form4->Label3->Font->Size=20;
Form4->Label4->Font->Size=20;
Form5->Close();
Form4->Show();
}
if (Form1->lm==8) {
Form4->Image3->Visible=False;
Form4->Image4->Visible=False;
Form4->Label3->Caption="1";
Form4->Label2->Caption="5";
Form4->Label4->Caption="0";
Form4->Label5->Caption="0";
Form4->Button1->Visible=False;
Form4->Label6->Caption="������� ��� ��� ������ ����";
Form4->Label7->Caption="������� ������ ������ �������";
Form4->Label2->Font->Size=20;
Form4->Label5->Font->Size=20;
Form4->Label3->Font->Size=20;
Form4->Label4->Font->Size=20;
if (Form1->t_level>5) {
  Form4->Label5->Caption="5";
} else {
  Form4->Label5->Caption=IntToStr(Form1->t_level);
}
Form5->Close();
Form4->Show();
}
if (Form1->lm==9) {
Form4->Image3->Visible=False;
Form4->Image4->Visible=False;
Form4->Label3->Caption="1";
Form4->Label2->Caption="1";
Form4->Label4->Caption="0";
Form4->Label5->Caption="0";
Form4->Button1->Visible=False;
Form4->Label6->Caption="������� 20 ��� �� ���� ������ ����";
Form4->Label7->Caption="������� ���� ����� �� ����� 1500 �����";
Form4->Label2->Font->Size=20;
Form4->Label5->Font->Size=20;
Form4->Label3->Font->Size=20;
Form4->Label4->Font->Size=20;
Form5->Close();
Form4->Show();
}
if (Form1->lm==10) {
Form4->Image3->Visible=False;
Form4->Image4->Visible=False;
Form4->Label3->Caption="5";
Form4->Label2->Caption="10";
Form4->Label4->Caption="0";
Form4->Label5->Caption="0";
Form4->Button1->Visible=False;
Form4->Label6->Caption="������� 5 ��������� ���������";
Form4->Label7->Caption="������� 10 �����";
Form4->Label2->Font->Size=20;
Form4->Label5->Font->Size=20;
Form4->Label3->Font->Size=20;
Form4->Label4->Font->Size=20;
Form5->Close();
Form4->Show();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormCreate(TObject *Sender)
{
mas->LoadFromFile("mash.bmp");
}
//---------------------------------------------------------------------------

