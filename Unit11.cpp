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
#include <map>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm11 *Form11;
using namespace std;
std::vector<std::string> rybyinset;
std::vector<int> vesinset;
std::vector<int> priceinset;
map<string, Graphics::TBitmap*> mapa;
//---------------------------------------------------------------------------
__fastcall TForm11::TForm11(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm11::Button1Click(TObject *Sender)
{
 if (Button1->Caption=="OK") {
	Form11->Close();
	Form1->Enabled=True;
 }
 if (Form1->rybinset>0) {
	 Form2->Show();
	 Form11->Enabled=False;
	 Form2->Button5->Visible=False;
	 Form2->naset=1;
	 Form2->Label2->Caption=String(rybyinset[Form1->rybinset-1].c_str());
	 if ((Form1->N14->Enabled==True)&&(vesinset[Form1->rybinset-1]<=200)&&(vesinset[Form1->rybinset-1]>0)&&(Form2->Label2->Caption!="Флаг Беларуси")&&(Form2->Label2->Caption!="Флаг флота России"))
	Form2->Button3->Visible=True;
	if ((Form1->lm==8)&&(Form1->mis[14]==0)&&(rybyinset[Form1->rybinset-1]=="Язь")) {
	  Form1->mis[14]++;
	}
	if (vesinset[Form1->rybinset-1] > Form1->record) {
	Form1->record=vesinset[Form1->rybinset-1];
	Form2->Label7->Visible=True;
	}
	Form2->Image1->Canvas->Draw(0, 0, mapa[rybyinset[Form1->rybinset-1]]);
	Form2->Label5->Caption=vesinset[Form1->rybinset-1];
   Form2->Label6->Caption=priceinset[Form1->rybinset-1];
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm11::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Enabled=True;
Form1->rybinset=0;
rybyinset.clear();
vesinset.clear();
priceinset.clear();
Form1->brokeset=0;
Form2->naset=0;
}
//---------------------------------------------------------------------------
