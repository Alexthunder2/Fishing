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
TForm13 *Form13;
int find[16], knops[4];
//---------------------------------------------------------------------------
__fastcall TForm13::TForm13(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm13::FormCreate(TObject *Sender)
{
for (int i=0; i <4; i++)
 Form13->knops[i]=0;
 for (int i=0; i <16; i++)
 Form13->find[i]=0;
}
//---------------------------------------------------------------------------

void __fastcall TForm13::FormShow(TObject *Sender)
{
 if ((knops[0]==0)&&(find[0]*find[1]*find[2]*find[3]==1)) {
   knops[0]=1;
   Button1->Visible=True;
 }
 if ((knops[1]==0)&&(find[4]*find[5]*find[6]*find[7]==1)) {
   knops[1]=1;
   Button2->Visible=True;
 }
 if ((knops[2]==0)&&(find[8]*find[9]*find[10]*find[11]==1)) {
   knops[2]=1;
   Button3->Visible=True;
 }
 if ((knops[3]==0)&&(find[12]*find[13]*find[14]*find[15]==1)) {
   knops[3]=1;
   Button4->Visible=True;
 }
 Form1->Enabled=False;
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Button4Click(TObject *Sender)
{
knops[3]=2;
Button4->Visible=False;
Image25->Visible=True;
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Button1Click(TObject *Sender)
{
 knops[0]=2;
Button1->Visible=False;
Image22->Visible=True;
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Button2Click(TObject *Sender)
{
knops[1]=2;
Button2->Visible=False;
Image23->Visible=True;
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Button3Click(TObject *Sender)
{
knops[2]=2;
Button3->Visible=False;
Image24->Visible=True;
}
//---------------------------------------------------------------------------

void __fastcall TForm13::Image26Click(TObject *Sender)
{
Form13->Close();
Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm13::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Enabled=True;
}
//---------------------------------------------------------------------------

