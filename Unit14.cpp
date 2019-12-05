//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit14.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm14 *Form14;
//---------------------------------------------------------------------------
__fastcall TForm14::TForm14(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm14::FormClose(TObject *Sender, TCloseAction &Action)
{
Form7->Enabled=True;
Label1->Visible=False;
Label2->Visible=False;
Image1->Visible=False;
Button1->Visible=False;
}
//---------------------------------------------------------------------------
void __fastcall TForm14::Button1Click(TObject *Sender)
{
Form1->eda[0]--;
Form1->bonus1=50;
Form1->Timer6->Enabled=True;
Button1->Enabled=False;
}
//---------------------------------------------------------------------------
