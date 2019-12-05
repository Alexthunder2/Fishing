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
#include <vector>
#include <string>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//using namespace std;
Graphics::TBitmap *Ram=new Graphics::TBitmap(), *Ry=new Graphics::TBitmap();
TRect P1,P2,P3,P4,P5,P6,P7,P8,P9,PP;
std::vector<std::string> kartiny(9, "?fish");
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
 Ram->LoadFromFile("rama.bmp");
 Image1->Canvas->Draw(357,20,Ram);
 Image1->Canvas->Draw(150,20,Ram);
 Image1->Canvas->Draw(564,20,Ram);
  Image1->Canvas->Draw(357,147,Ram);
 Image1->Canvas->Draw(150,147,Ram);
 Image1->Canvas->Draw(564,147,Ram);
 Image1->Canvas->Draw(357,274,Ram);
 Image1->Canvas->Draw(150,274,Ram);
 Image1->Canvas->Draw(564,274,Ram);
 P1=Bounds(170,37,165,90);
 P2=Bounds(377,37,165,90);
 P3=Bounds(584,37,165,90);
 P4=Bounds(170,164,165,90);
 P5=Bounds(377,164,165,90);
 P6=Bounds(584,164,165,90);
 P7=Bounds(170,291,165,90);
 P8=Bounds(377,291,165,90);
 P9=Bounds(584,291,165,90);
 PP=Bounds(0,0,220,120);
 Ry->Width=220;
 Ry->Height=120;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{
if (Form2->naset==0) {
Form1->Enabled=True;
}
Label10->Visible=False;
Form1->q=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
  if ((Form1->q==1)&&(X>150)&&(X<357)&&(Y>20)&&(Y<147)) {
	Ry->Canvas->CopyRect(PP,Form2->Image1->Canvas,PP);
	Image1->Canvas->StretchDraw(P1,Ry);
	Label1->Caption=Form2->Label5->Caption;
	Form1->vesdom[0]=StrToInt(Form2->Label5->Caption);
	kartiny[0]=AnsiString(Form2->Label2->Caption).c_str();
	Form1->q=0;
	Label10->Visible=False;
	if ((Form1->mis[11]<2)&&(Form1->lm==6)) {
	int f1=0;
	int f2=0;
	for (int i=0; i<9; i++) {
	  if (kartiny[i]=="Флаг Беларуси") {
		f1=1;
	  }
	  if (kartiny[i]=="Флаг флота России") {
		f2=1;
	  }
	}
	Form1->mis[11]=f1+f2;
  }
  }
   if ((Form1->q==1)&&(X>357)&&(X<564)&&(Y>20)&&(Y<147)) {
	Ry->Canvas->CopyRect(PP,Form2->Image1->Canvas,PP);
	Image1->Canvas->StretchDraw(P2,Ry);
	Label2->Caption=Form2->Label5->Caption;
	Form1->vesdom[1]=StrToInt(Form2->Label5->Caption);
	kartiny[1]=AnsiString(Form2->Label2->Caption).c_str();
	Form1->q=0;
	Label10->Visible=False;
	if ((Form1->mis[11]<2)&&(Form1->lm==6)) {
	int f1=0;
	int f2=0;
	for (int i=0; i<9; i++) {
	  if (kartiny[i]=="Флаг Беларуси") {
		f1=1;
	  }
	  if (kartiny[i]=="Флаг флота России") {
		f2=1;
	  }
	}
	Form1->mis[11]=f1+f2;
  }
  }
   if ((Form1->q==1)&&(X>564)&&(X<771)&&(Y>20)&&(Y<147)) {
	Ry->Canvas->CopyRect(PP,Form2->Image1->Canvas,PP);
	Image1->Canvas->StretchDraw(P3,Ry);
	Label3->Caption=Form2->Label5->Caption;
	Form1->vesdom[2]=StrToInt(Form2->Label5->Caption);
	kartiny[2]=AnsiString(Form2->Label2->Caption).c_str();
	Form1->q=0;
	Label10->Visible=False;
	if ((Form1->mis[11]<2)&&(Form1->lm==6)) {
	int f1=0;
	int f2=0;
	for (int i=0; i<9; i++) {
	  if (kartiny[i]=="Флаг Беларуси") {
		f1=1;
	  }
	  if (kartiny[i]=="Флаг флота России") {
		f2=1;
	  }
	}
	Form1->mis[11]=f1+f2;
  }
  }
   if ((Form1->q==1)&&(X>150)&&(X<357)&&(Y>147)&&(Y<274)) {
	Ry->Canvas->CopyRect(PP,Form2->Image1->Canvas,PP);
	Image1->Canvas->StretchDraw(P4,Ry);
	Label4->Caption=Form2->Label5->Caption;
	Form1->vesdom[3]=StrToInt(Form2->Label5->Caption);
	kartiny[3]=AnsiString(Form2->Label2->Caption).c_str();
	Form1->q=0;
	Label10->Visible=False;
	if ((Form1->mis[11]<2)&&(Form1->lm==6)) {
	int f1=0;
	int f2=0;
	for (int i=0; i<9; i++) {
	  if (kartiny[i]=="Флаг Беларуси") {
		f1=1;
	  }
	  if (kartiny[i]=="Флаг флота России") {
		f2=1;
	  }
	}
	Form1->mis[11]=f1+f2;
  }
  }
   if ((Form1->q==1)&&(X>357)&&(X<564)&&(Y>147)&&(Y<274)) {
	Ry->Canvas->CopyRect(PP,Form2->Image1->Canvas,PP);
	Image1->Canvas->StretchDraw(P5,Ry);
	Label5->Caption=Form2->Label5->Caption;
	Form1->vesdom[4]=StrToInt(Form2->Label5->Caption);
	kartiny[4]=AnsiString(Form2->Label2->Caption).c_str();
	Form1->q=0;
	Label10->Visible=False;
	if ((Form1->mis[11]<2)&&(Form1->lm==6)) {
	int f1=0;
	int f2=0;
	for (int i=0; i<9; i++) {
	  if (kartiny[i]=="Флаг Беларуси") {
		f1=1;
	  }
	  if (kartiny[i]=="Флаг флота России") {
		f2=1;
	  }
	}
	Form1->mis[11]=f1+f2;
  }
  }
   if ((Form1->q==1)&&(X>564)&&(X<771)&&(Y>147)&&(Y<274)) {
	Ry->Canvas->CopyRect(PP,Form2->Image1->Canvas,PP);
	Image1->Canvas->StretchDraw(P6,Ry);
	Label6->Caption=Form2->Label5->Caption;
	Form1->vesdom[5]=StrToInt(Form2->Label5->Caption);
	kartiny[5]=AnsiString(Form2->Label2->Caption).c_str();
	Form1->q=0;
	Label10->Visible=False;
	if ((Form1->mis[11]<2)&&(Form1->lm==6)) {
	int f1=0;
	int f2=0;
	for (int i=0; i<9; i++) {
	  if (kartiny[i]=="Флаг Беларуси") {
		f1=1;
	  }
	  if (kartiny[i]=="Флаг флота России") {
		f2=1;
	  }
	}
	Form1->mis[11]=f1+f2;
  }
  }
   if ((Form1->q==1)&&(X>150)&&(X<357)&&(Y>274)&&(Y<401)) {
	Ry->Canvas->CopyRect(PP,Form2->Image1->Canvas,PP);
	Image1->Canvas->StretchDraw(P7,Ry);
	Label7->Caption=Form2->Label5->Caption;
	Form1->vesdom[6]=StrToInt(Form2->Label5->Caption);
	kartiny[6]=AnsiString(Form2->Label2->Caption).c_str();
	Form1->q=0;
	Label10->Visible=False;
	if ((Form1->mis[11]<2)&&(Form1->lm==6)) {
	int f1=0;
	int f2=0;
	for (int i=0; i<9; i++) {
	  if (kartiny[i]=="Флаг Беларуси") {
		f1=1;
	  }
	  if (kartiny[i]=="Флаг флота России") {
		f2=1;
	  }
	}
	Form1->mis[11]=f1+f2;
  }
  }
   if ((Form1->q==1)&&(X>357)&&(X<564)&&(Y>274)&&(Y<401)) {
	Ry->Canvas->CopyRect(PP,Form2->Image1->Canvas,PP);
	Image1->Canvas->StretchDraw(P8,Ry);
	Label8->Caption=Form2->Label5->Caption;
	Form1->vesdom[7]=StrToInt(Form2->Label5->Caption);
	kartiny[7]=AnsiString(Form2->Label2->Caption).c_str();
	Form1->q=0;
	Label10->Visible=False;
	if ((Form1->mis[11]<2)&&(Form1->lm==6)) {
	int f1=0;
	int f2=0;
	for (int i=0; i<9; i++) {
	  if (kartiny[i]=="Флаг Беларуси") {
		f1=1;
	  }
	  if (kartiny[i]=="Флаг флота России") {
		f2=1;
	  }
	}
	Form1->mis[11]=f1+f2;
  }
  }
   if ((Form1->q==1)&&(X>564)&&(X<771)&&(Y>274)&&(Y<401)) {
	Ry->Canvas->CopyRect(PP,Form2->Image1->Canvas,PP);
	Image1->Canvas->StretchDraw(P9,Ry);
	Label9->Caption=Form2->Label5->Caption;
	Form1->vesdom[8]=StrToInt(Form2->Label5->Caption);
	kartiny[8]=AnsiString(Form2->Label2->Caption).c_str();
	Form1->q=0;
	Label10->Visible=False;
	if ((Form1->mis[11]<2)&&(Form1->lm==6)) {
	int f1=0;
	int f2=0;
	for (int i=0; i<9; i++) {
	  if (kartiny[i]=="Флаг Беларуси") {
		f1=1;
	  }
	  if (kartiny[i]=="Флаг флота России") {
		f2=1;
	  }
	}
	Form1->mis[11]=f1+f2;
  }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Image2Click(TObject *Sender)
{
Form3->Close();
Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
Form1->Enabled=False;
Label11->Caption=IntToStr(Form1->record);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image3Click(TObject *Sender)
{
 Form3->Close();
 Form13->Show();
}
//---------------------------------------------------------------------------

