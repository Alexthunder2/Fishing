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
TForm4 *Form4;
Graphics::TBitmap *mma=new Graphics::TBitmap();
Graphics::TBitmap *uda2=new Graphics::TBitmap(), *uda3=new Graphics::TBitmap(),*uda4=new Graphics::TBitmap(), *uda5=new Graphics::TBitmap(), *uda6=new Graphics::TBitmap();
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Enabled=True;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Timer1Timer(TObject *Sender)
{

if (Form1->lm==1)
{
Label4->Caption=IntToStr(Form1->mis[0]);
Label5->Caption=IntToStr(Form1->mis[1]);
if (Form1->mis[0]==10)
Image3->Visible=True;
if (Form1->mis[1]==1)
Image4->Visible=True;
if ((Form1->mis[0]==10)&&(Form1->mis[1]==1))
Button1->Visible=True;
}
if (Form1->lm==2)
{

Label4->Caption=IntToStr(Form1->mis[2]);
Label5->Caption=IntToStr(Form1->mis[3]);
if (Form1->mis[2]==10)
Image3->Visible=True;
if (Form1->mis[3]==5)
Image4->Visible=True;
if ((Form1->mis[2]==10)&&(Form1->mis[3]==5))
Button1->Visible=True;
}
if (Form1->lm==3)
{

Label4->Caption=IntToStr(Form1->mis[4]);
Label5->Caption=IntToStr(Form1->mis[5]);
if (Form1->mis[4]==1)
Image3->Visible=True;
if (Form1->mis[5]==10)
Image4->Visible=True;
if ((Form1->mis[4]==1)&&(Form1->mis[5]==10))
Button1->Visible=True;
}
if (Form1->lm==4)
{

Label4->Caption=IntToStr(Form1->mis[6]);
Label5->Caption=IntToStr(Form1->mis[7]);
if (Form1->mis[6]==15)
Image3->Visible=True;
if (Form1->mis[7]==10)
Image4->Visible=True;
if ((Form1->mis[6]==15)&&(Form1->mis[7]==10))
Button1->Visible=True;
}
if (Form1->lm==5)
{
Label5->Caption=IntToStr(Form1->mis[9]);
if (Form1->record>=1150)
Image3->Visible=True;
if (Form1->mis[9]==7000)
Image4->Visible=True;
if ((Form1->record>=1150)&&(Form1->mis[9]==7000))
Button1->Visible=True;
}
if (Form1->lm==6)
{

Label4->Caption=IntToStr(Form1->mis[10]);
Label5->Caption=IntToStr(Form1->mis[11]);
if (Form1->mis[10]==10)
Image3->Visible=True;
if (Form1->mis[11]==2)
Image4->Visible=True;
if ((Form1->mis[10]==10)&&(Form1->mis[11]==2))
Button1->Visible=True;
}
if (Form1->lm==7)
{

Label4->Caption=IntToStr(Form1->mis[12]);
Label5->Caption=IntToStr(Form1->mis[13]);
if (Form1->mis[12]==10)
Image3->Visible=True;
if (Form1->mis[13]==1)
Image4->Visible=True;
if ((Form1->mis[12]==10)&&(Form1->mis[13]==1))
Button1->Visible=True;
}
if (Form1->lm==8)
{
Label4->Caption=IntToStr(Form1->mis[14]);
if (Form1->mis[14]==1)
Image3->Visible=True;
if (Form1->t_level>=5)
Image4->Visible=True;
if ((Form1->mis[14]==1)&&(Form1->t_level>=5))
Button1->Visible=True;
}
if (Form1->lm==9)
{
Label4->Caption=IntToStr(Form1->mis[16]);
Label5->Caption=IntToStr(Form1->mis[17]);
if (Form1->mis[16]==1)
Image3->Visible=True;
if (Form1->mis[17]==1)
Image4->Visible=True;
if ((Form1->mis[16]==1)&&(Form1->mis[17]==1))
Button1->Visible=True;
}
if (Form1->lm==10)
{
Label4->Caption=IntToStr(Form1->mis[18]);
Label5->Caption=IntToStr(Form1->mis[19]);
if (Form1->mis[18]==5)
Image3->Visible=True;
if (Form1->mis[19]==10)
Image4->Visible=True;
if ((Form1->mis[18]==5)&&(Form1->mis[19]==10))
Button1->Visible=True;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
Form5->Show();
Form4->Close();
if (Form1->lm==1) {
Form1->Image5->Visible=True;
Form1->Label3->Visible=True;
Form1->Button3->Visible=True;
}
if (Form1->lm==2) {
	Form1->N5->Enabled=True;
	Form5->Image1->Visible=False;
	Form5->Label1->Caption="Теперь вам доступна локация Кавказ";
}
if (Form1->lm==3) {
	Form1->N14->Enabled=True;
	Form5->Image1->Visible=True;
	mma->Transparent=True;
	Form5->Image1->Canvas->Draw(0,0,mma);
	Form5->Label1->Caption="Теперь вам доступна наживка Маленький живец";
}
if (Form1->lm==4) {
	Form5->Image1->Canvas->Draw(0,0,uda2);
	Form7->Image1->Canvas->Draw(285,175,uda2);
	Form7->Button2->Visible=True;
	Form1->uddraw[1]=1;
	Form5->Label1->Caption="Вы разблокировали новую удочку";
}
if (Form1->lm==5) {
	Form1->N7->Enabled=True;
	Form5->Image1->Visible=False;
	Form5->Label1->Caption="Теперь вам доступна локация Нева";
}
if (Form1->lm==6) {
	Form1->Image6->Visible=True;
	Form5->Image1->Visible=False;
	Form5->Label1->Caption="Теперь вам доступен режим турнира";
}
if (Form1->lm==7) {
	Form7->Image3->Visible=True;
	Form1->set_level=1;
	Form1->Button5->Visible=True;
	Form5->Image1->Visible=False;
	Form8->Label7->Visible=True;
	Form5->Label1->Caption="Теперь вам доступны сети первого уровня. Их можно найти в доме.";
}
if (Form1->lm==8) {
	Form5->Image1->Visible=True;
	Form5->Image1->Canvas->Draw(0,0,uda3);
	Form7->Image1->Canvas->Draw(395,175,uda3);
	Form7->Button4->Visible=True;
	Form1->uddraw[1]=1;
	Form5->Label1->Caption="Вы разблокировали новую удочку";
}
if (Form1->lm==9) {
	Form5->Image1->Visible=False;
	Form1->kol_open=1;
	Form3->Image3->Visible=True;
	Form5->Label1->Caption="Теперь вы можете коллекционировать разные вещи";
}
if (Form1->lm==10) {
	Form1->N2->Enabled=True;
	Form5->Image1->Visible=False;
	Form5->Label1->Caption="Теперь вам доступна локация Бавария";
	Form7->Image4->Visible=True;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormCreate(TObject *Sender)
{
mma->LoadFromFile("mmal.bmp");
uda2->LoadFromFile("uda2.bmp");
  uda3->LoadFromFile("uda3.bmp");
  uda4->LoadFromFile("uda4.bmp");
  uda5->LoadFromFile("uda5.bmp");
  uda6->LoadFromFile("uda6.bmp");
}
//---------------------------------------------------------------------------

