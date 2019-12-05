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
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Enabled=True;
}
//---------------------------------------------------------------------------
void __fastcall TForm8::FormCreate(TObject *Sender)
{
if (Form1->d>=StrToInt(Label4->Caption)) {
  Button1->Enabled=True;
} else {
  Button1->Enabled=False;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button1Click(TObject *Sender)
{
for (int i=0; i < 14; i++) {
	Form9->results[i]=0;
}
Form9->your=0;
Form9->Label1->Caption="0";
Form9->Label2->Caption="0";
Form9->Label3->Caption="0";
Form9->Label4->Caption="0";
Form9->Label5->Caption="0";
Form9->Label8->Caption="0";
Form9->Label9->Caption="0";
Form9->Label10->Caption="0";
Form1->t_cond=1;
if (Form1->t_level==1) {
	Form1->minut=10;
	Form1->sec1=0;
	Form1->sec2=0;
	Form1->d-=100;
	Form2->Button5->Visible=True;
	Form1->Timer4->Enabled=True;
	Form1->Image7->Visible=True;
	Form1->Label4->Caption="10";
	Form1->Label5->Caption="0";
	Form1->Label6->Caption="0";
	Form1->Label4->Visible=True;
	Form1->Label5->Visible=True;
	Form1->Label6->Visible=True;
	Form9->Timer1->Enabled=True;
	Form9->Timer1->Interval=30000;
	Form9->ClientHeight=240;
}
if (Form1->t_level==2) {
	Form1->minut=15;
	Form1->sec1=0;
	Form1->sec2=0;
	Form1->d-=200;
	Form2->Button5->Visible=True;
	Form1->Timer4->Enabled=True;
	Form1->Image7->Visible=True;
	Form1->Label4->Caption="15";
	Form1->Label5->Caption="0";
	Form1->Label6->Caption="0";
	Form1->Label4->Visible=True;
	Form1->Label5->Visible=True;
	Form1->Label6->Visible=True;
	Form9->Timer1->Enabled=True;
	Form9->Timer1->Interval=30000;
	Form9->ClientHeight=240;
}
if (Form1->t_level==3) {
	Form1->minut=15;
	Form1->sec1=0;
	Form1->sec2=0;
	Form1->d-=300;
	Form2->Button5->Visible=True;
	Form1->Timer4->Enabled=True;
	Form1->Image7->Visible=True;
	Form1->Label4->Caption="15";
	Form1->Label5->Caption="0";
	Form1->Label6->Caption="0";
	Form1->Label4->Visible=True;
	Form1->Label5->Visible=True;
	Form1->Label6->Visible=True;
	Form9->Timer1->Enabled=True;
	Form9->Timer1->Interval=50000;
	Form9->ClientHeight=240;
}
if (Form1->t_level==4) {
	Form1->minut=20;
	Form1->sec1=0;
	Form1->sec2=0;
	Form1->d-=400;
	Form2->Button5->Visible=True;
	Form1->Timer4->Enabled=True;
	Form1->Image7->Visible=True;
	Form1->Label4->Caption="20";
	Form1->Label5->Caption="0";
	Form1->Label6->Caption="0";
	Form1->Label4->Visible=True;
	Form1->Label5->Visible=True;
	Form1->Label6->Visible=True;
	Form9->Timer1->Enabled=True;
	Form9->Timer1->Interval=20000;
	Form9->ClientHeight=240;
}
if (Form1->t_level==5) {
	Form1->minut=15;
	Form1->sec1=0;
	Form1->sec2=0;
	Form1->d-=500;
	Form2->Button5->Visible=True;
	Form1->Timer4->Enabled=True;
	Form1->Image7->Visible=True;
	Form1->Label4->Caption="15";
	Form1->Label5->Caption="0";
	Form1->Label6->Caption="0";
	Form1->Label4->Visible=True;
	Form1->Label5->Visible=True;
	Form1->Label6->Visible=True;
	Form9->Timer1->Interval=40000;
	Form9->Timer1->Enabled=True;
	Form9->ClientHeight=360;
}
Form8->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm8::FormShow(TObject *Sender)
{
  if (Form1->d>=StrToInt(Label4->Caption)) {
  Button1->Enabled=True;
} else {
  Button1->Enabled=False;
  }
}
//---------------------------------------------------------------------------

