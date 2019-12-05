//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TMenuItem *N8;
	TMenuItem *N9;
	TImage *Image1;
	TButton *Button1;
	TTimer *Timer1;
	TImage *Image2;
	TMenuItem *N10;
	TMenuItem *N11;
	TMenuItem *N12;
	TMenuItem *N13;
	TMenuItem *N14;
	TMenuItem *N15;
	TMenuItem *N16;
	TMenuItem *N17;
	TButton *Button2;
	TScrollBar *ScrollBar1;
	TImage *Image3;
	TLabel *Label1;
	TLabel *Label2;
	TTimer *Timer2;
	TImage *Image4;
	TTimer *Timer3;
	TBitBtn *BitBtn1;
	TImage *Image5;
	TButton *Button3;
	TLabel *Label3;
	TButton *Button4;
	TMenuItem *N18;
	TMenuItem *N19;
	TMenuItem *N20;
	TImage *Image6;
	TImage *Image7;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TTimer *Timer4;
	TButton *Button5;
	TTimer *Timer5;
	TTimer *Timer6;
	void __fastcall N2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall N7Click(TObject *Sender);
	void __fastcall N8Click(TObject *Sender);
	void __fastcall N9Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall N11Click(TObject *Sender);
	void __fastcall N12Click(TObject *Sender);
	void __fastcall N13Click(TObject *Sender);
	void __fastcall N14Click(TObject *Sender);
	void __fastcall N15Click(TObject *Sender);
	void __fastcall N16Click(TObject *Sender);
	void __fastcall N17Click(TObject *Sender);
	void __fastcall ScrollBar1Scroll(TObject *Sender, TScrollCode ScrollCode, int &ScrollPos);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);

	void __fastcall Timer3Timer(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall N19Click(TObject *Sender);
	void __fastcall N20Click(TObject *Sender);
	void __fastcall Timer4Timer(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Timer5Timer(TObject *Sender);
	void __fastcall Timer6Timer(TObject *Sender);
	public:
int d,price,ves,q,mis[20],lm,lud,kn[7],kartin[9],vesdom[9],uddraw[6],udbuyd[6], record, minut, sec1, sec2, t_level, t_cond;
int set_level, curset, knopset, brokeset, rybinset, kol_open, kol_catch, item;
int sets[3], eda[5], bonus1;

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
