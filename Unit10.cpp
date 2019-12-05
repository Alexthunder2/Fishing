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
TForm10 *Form10;
//---------------------------------------------------------------------------
__fastcall TForm10::TForm10(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Timer1Timer(TObject *Sender)
{
Label1->Caption=IntToStr(Form1->sets[0]);
Label2->Caption=IntToStr(Form1->sets[1]);
Label3->Caption=IntToStr(Form1->sets[2]);
if (Form1->d<300) {
  Button1->Enabled=False;
} else {
  Button1->Enabled=True;
  }
if (Form1->d<500) {
  Button3->Enabled=False;
} else {
  Button3->Enabled=True;
  }
if (Form1->d<900) {
  Button5->Enabled=False;
} else {
  Button5->Enabled=True;
  }


if (Form1->knopset==1) {
  Button2->Enabled=False;
  Button4->Enabled=False;
  Button6->Enabled=False;
} else {
  if (Form1->sets[0]==0) {
	Button2->Enabled=False;
  } else {
	Button2->Enabled=True;
  }
  if (Form1->sets[1]==0) {
	Button4->Enabled=False;
  } else {
	Button4->Enabled=True;
  }
  if (Form1->sets[2]==0) {
	Button6->Enabled=False;
  } else {
	Button6->Enabled=True;
  }
}
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button1Click(TObject *Sender)
{
Form1->d-=300;
Form1->sets[0]++;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button3Click(TObject *Sender)
{
 Form1->d-=500;
Form1->sets[1]++;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button5Click(TObject *Sender)
{
Form1->d-=900;
Form1->sets[2]++;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button2Click(TObject *Sender)
{
Form1->curset=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button4Click(TObject *Sender)
{
Form1->curset=1;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Button6Click(TObject *Sender)
{
Form1->curset=2;
}
//---------------------------------------------------------------------------
void __fastcall TForm10::FormClose(TObject *Sender, TCloseAction &Action)
{
if (Form2->naset==0) {
Form1->Enabled=True;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm10::Image2Click(TObject *Sender)
{
Form10->Close();
Form7->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm10::FormShow(TObject *Sender)
{
Form1->Enabled=False;
}
//---------------------------------------------------------------------------
