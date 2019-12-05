//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
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
TForm2 *Form2;
int naset=0;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormClose(TObject *Sender, TCloseAction &Action)
{
if (naset==0) {
Form1->Enabled=True;
} else {
Form11->Enabled=True;
Form1->rybinset--;
Form11->Label1->Caption="В сети "+IntToStr(Form1->rybinset)+" рыб";
 Form11->Button1->Caption="OK";
 if (Form1->rybinset>0) {
   Form11->Button1->Caption="Посмотреть";
 }
}
 Button4->Visible=True;
 Button6->Visible=False;
 Button3->Visible=False;
 Form1->ves=0;
 Form1->kol_catch=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{

Form2->Close();
 Form1->d+=StrToInt(Label6->Caption);
 if ((Label2->Caption=="Белый амур")&&(Form1->mis[3]<5)&&(Form1->lm==2))
  Form1->mis[3]++;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
 Form2->Close();

if ((Label2->Caption=="Карась")&&(Form1->mis[0]<10))
{
  Form1->mis[0]++;
  Form4->Label4->Caption=IntToStr(Form1->mis[0]);
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
Form2->Close();
Form3->Show();
Form3->Label10->Visible=True;
Form1->q=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
 Form2->Close();
Form1->kn[3]++;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
 if (Form1->t_level==1) {
  if (Form1->ves > Form9->your) {
   Form9->your=Form1->ves;
   Form9->Label1->Caption=IntToStr(Form9->your);
  }
 }
 if (Form1->t_level==2) {
  if (Label2->Caption=="Плотва") {
   Form9->your++;
   Form9->Label1->Caption=IntToStr(Form9->your);
  }
 }
 if (Form1->t_level==3) {
  if ((Label2->Caption=="Ёрш")&&(Form1->ves > Form9->your)) {
   Form9->your=Form1->ves;
   Form9->Label1->Caption=IntToStr(Form9->your);
  }
 }
 if (Form1->t_level==4) {
  if ((Label2->Caption=="Судак")&&(Form1->ves >599)) {
   Form9->your++;
   Form9->Label1->Caption=IntToStr(Form9->your);
  }
 }
 if (Form1->t_level==5) {
  if ((Label2->Caption=="Карп")&&(Form1->ves <1000)&&(Form1->ves > Form9->your)) {
   Form9->your=Form1->ves;
   Form9->Label1->Caption=IntToStr(Form9->your);
  }
 }
   Form2->Close();
Form1->Enabled=True;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button6Click(TObject *Sender)
{
if (Form13->find[Form1->item]==0) {
  Form13->find[Form1->item]=1;
  if (Form1->item==0) {
	Form13->Image2->Visible=True;
  }
  if (Form1->item==1) {
	Form13->Image3->Visible=True;
  }
  if (Form1->item==2) {
	Form13->Image4->Visible=True;
  }
  if (Form1->item==3) {
	Form13->Image5->Visible=True;
  }
  if (Form1->item==4) {
	Form13->Image6->Visible=True;
  }
  if (Form1->item==5) {
	Form13->Image7->Visible=True;
  }
  if (Form1->item==6) {
	Form13->Image8->Visible=True;
  }
  if (Form1->item==7) {
	Form13->Image9->Visible=True;
  }
  if (Form1->item==8) {
	Form13->Image10->Visible=True;
  }
  if (Form1->item==9) {
	Form13->Image11->Visible=True;
  }
  if (Form1->item==10) {
	Form13->Image12->Visible=True;
  }
  if (Form1->item==11) {
	Form13->Image13->Visible=True;
  }
  if (Form1->item==12) {
	Form13->Image14->Visible=True;
  }
  if (Form1->item==13) {
	Form13->Image15->Visible=True;
  }
  if (Form1->item==14) {
	Form13->Image16->Visible=True;
  }
  if (Form1->item==15) {
	Form13->Image17->Visible=True;
  }
}
Form2->Close();
}
//---------------------------------------------------------------------------


