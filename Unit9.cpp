//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <time.h>
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
TForm9 *Form9;
int results[14];
int your=0;
int time_=0;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormClose(TObject *Sender, TCloseAction &Action)
{
Form1->Enabled=True;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Timer1Timer(TObject *Sender)
{
if (Form1->t_level==1) {
  for (int i=0; i < 4; i++) {
	  int ves1=rand()%1100+1;
	  int ves2=rand()%ves1+1;
	  int ves3=rand()%ves2+1;
	  if (ves3>results[i]) {
		  results[i]=ves3;
	  }
  }
  Label2->Caption=IntToStr(results[0]);
  Label3->Caption=IntToStr(results[1]);
  Label4->Caption=IntToStr(results[2]);
  Label5->Caption=IntToStr(results[3]);
}
if (Form1->t_level==2) {
  for (int i=0; i < 4; i++) {
	  int ves1=rand()%5;
	  if (ves1==1) {
		  results[i]++;
	  }
  }
  Label2->Caption=IntToStr(results[0]);
  Label3->Caption=IntToStr(results[1]);
  Label4->Caption=IntToStr(results[2]);
  Label5->Caption=IntToStr(results[3]);
}
if (Form1->t_level==3) {
  for (int i=0; i < 4; i++) {
	  int ves1=rand()%2;
	  if (ves1==1) {
		  int ves2=rand()%250;
		  if (ves2>results[i])
		  results[i]=ves2;
	  }
  }
  Label2->Caption=IntToStr(results[0]);
  Label3->Caption=IntToStr(results[1]);
  Label4->Caption=IntToStr(results[2]);
  Label5->Caption=IntToStr(results[3]);
}
if (Form1->t_level==4) {
  for (int i=0; i < 4; i++) {
	  int ves1=rand()%6;
	  if (ves1==1) {
		  results[i]++;
	  }
  }
  Label2->Caption=IntToStr(results[0]);
  Label3->Caption=IntToStr(results[1]);
  Label4->Caption=IntToStr(results[2]);
  Label5->Caption=IntToStr(results[3]);
}
if (Form1->t_level==5) {
  for (int i=0; i < 7; i++) {
	  int ves1=rand()%999+1;
	  int ves2=rand()%ves1+1;
	  if (ves2>results[i]) {
		  results[i]=ves2;
	  }
  }
  Label2->Caption=IntToStr(results[0]);
  Label3->Caption=IntToStr(results[1]);
  Label4->Caption=IntToStr(results[2]);
  Label5->Caption=IntToStr(results[3]);
  Label8->Caption=IntToStr(results[4]);
  Label9->Caption=IntToStr(results[5]);
  Label10->Caption=IntToStr(results[6]);
}
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
if (Form1->t_level==1) {
  Form1->t_cond=0;
  if (StrToInt(Label7->Caption)==1) {
	Form1->d+=500;
	Form1->t_level++;
	if (Form1->lm==8) {
	  Form4->Label5->Caption=IntToStr(Form1->t_level);
	}
	Form8->Label1->Caption="2";
	Form8->Label2->Caption="Наловить как можно больше плотвы (в штуках)";
	Form8->Label4->Caption="200";
	Form8->Label5->Caption="800";
	Form8->Label6->Caption="15 минут";
  }
  Label6->Visible=False;
  Label7->Visible=False;
  Button1->Visible=False;
  Form9->Close();
  Form1->Enabled=True;
} else if (Form1->t_level==2) {
		 Form1->t_cond=0;
		 if (StrToInt(Label7->Caption)==1) {
		   Form1->d+=800;
		   Form1->t_level++;
		   if (Form1->lm==8) {
			 Form4->Label5->Caption=IntToStr(Form1->t_level);
		   }
		   Form8->Label1->Caption="3";
		   Form8->Label2->Caption="Поймать ерша как можно большего веса";
		   Form8->Label4->Caption="300";
		   Form8->Label5->Caption="1000";
		   Form8->Label6->Caption="15 минут";
		 }
		 Label6->Visible=False;
		 Label7->Visible=False;
		 Button1->Visible=False;
		 Form9->Close();
		 Form1->Enabled=True;
  } else if (Form1->t_level==3) {
		 Form1->t_cond=0;
		 if (StrToInt(Label7->Caption)==1) {
		   Form1->d+=1000;
		   Form1->t_level++;
		   if (Form1->lm==8) {
			 Form4->Label5->Caption=IntToStr(Form1->t_level);
		   }
		   Form8->Label1->Caption="4";
		   Form8->Label2->Caption="Наловить как можно больше судаков весом не менее 600 грамм ";
		   Form8->Label4->Caption="400";
		   Form8->Label5->Caption="1200";
		   Form8->Label6->Caption="20 минут";
		 }
		 Label6->Visible=False;
		 Label7->Visible=False;
		 Button1->Visible=False;
		 Form9->Close();
		 Form1->Enabled=True;
	   } else if (Form1->t_level==4) {
		 Form1->t_cond=0;
		 if (StrToInt(Label7->Caption)==1) {
		   Form1->d+=1200;
		   Form1->t_level++;
		   if (Form1->lm==8) {
			 Form4->Label5->Caption=IntToStr(Form1->t_level);
		   }
		   Form8->Label1->Caption="5";
		   Form8->Label2->Caption="Поймать карпа как можно большего веса, но легче 1000 грамм";
		   Form8->Label3->Caption="8";
		   Form8->Label4->Caption="500";
		   Form8->Label5->Caption="1500";
		   Form8->Label6->Caption="15 минут";
		 }
		 Label6->Visible=False;
		 Label7->Visible=False;
		 Button1->Visible=False;
		 Form9->Close();
		 Form1->Enabled=True;
	   } else if (Form1->t_level==5) {
		 Form1->t_cond=0;
		 if (StrToInt(Label7->Caption)==1) {
		   Form1->d+=1500;
		   Form1->t_level++;

		   Form8->Label1->Caption="5";
		   Form8->Label2->Caption="Поймать карпа как можно большего веса, но легче 1000 грамм";
		   Form8->Label3->Caption="8";
		   Form8->Label4->Caption="500";
		   Form8->Label5->Caption="1500";
		   Form8->Label6->Caption="15 минут";
		 }
		 Label6->Visible=False;
		 Label7->Visible=False;
		 Button1->Visible=False;
		 Form9->Close();
		 Form1->Enabled=True;
	   }
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormCreate(TObject *Sender)
{
if (time_==0) {
  time_=1;
  srand(time(0));
}
}
//---------------------------------------------------------------------------
