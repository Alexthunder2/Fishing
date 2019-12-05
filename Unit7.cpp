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
TForm7 *Form7;
Graphics::TBitmap *kom=new Graphics::TBitmap(), *ho=new Graphics::TBitmap(), *hc=new Graphics::TBitmap();
int qsa=0;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Image2Click(TObject *Sender)
{
Form7->Close();
Form3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormClose(TObject *Sender, TCloseAction &Action)
{
if (Form2->naset==0) {
Form1->Enabled=True;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormShow(TObject *Sender)
{
 Form1->Enabled=False;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
if (Form1->d>=2000)
{
Button3->Visible=True;
Form1->d-=2000;
Button2->Visible=False;
Form1->udbuyd[1]=1;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button1Click(TObject *Sender)
{
Form1->lud=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button3Click(TObject *Sender)
{
Form1->lud=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormCreate(TObject *Sender)
{
kom->LoadFromFile("komn.bmp");
Image1->Canvas->Draw(0,0,kom);
ho->LoadFromFile("hol_open.bmp");
hc->LoadFromFile("hol_close.bmp");
Image4->Canvas->Draw(0, 0, hc);
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image3Click(TObject *Sender)
{
Form7->Close();
Form10->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button4Click(TObject *Sender)
{
 if (Form1->d>=8000)
{
Button5->Visible=True;
Form1->d-=8000;
Button4->Visible=False;
Form1->udbuyd[2]=1;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button5Click(TObject *Sender)
{
 Form1->lud=3;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image4MouseLeave(TObject *Sender)
{
Image4->Canvas->Draw(0, 0, hc);
qsa=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image4MouseMove(TObject *Sender, TShiftState Shift, int X,
		  int Y)
{
if (qsa==0) {
Image4->Canvas->Draw(0, 0, ho);
qsa=1;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm7::Image4Click(TObject *Sender)
{
Form7->Enabled=False;
if (Form1->eda[0]==0) {
	Form14->Label1->Visible=True;
} else {
  Form14->Image1->Visible=True;
  Form14->Button1->Visible=True;
  Form14->Label2->Visible=True;
  Form14->Label2->Caption=IntToStr(Form1->eda[0]);
}
Form14->Show();
}
//---------------------------------------------------------------------------

