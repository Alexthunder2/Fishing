//---------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <vcl.h>
#pragma hdrstop
#include <stdlib.h>
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
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Graphics::TBitmap *NU=new Graphics::TBitmap(), *fon=new Graphics::TBitmap(),*uda=new Graphics::TBitmap(), *le=new Graphics::TBitmap(), *PR=new Graphics::TBitmap(), *PO=new Graphics::TBitmap(), *NE=new Graphics::TBitmap(), *LO=new Graphics::TBitmap(), *VO=new Graphics::TBitmap(), *KA=new Graphics::TBitmap(), *SW=new Graphics::TBitmap(), *kar=new Graphics::TBitmap(), *kuk=new Graphics::TBitmap(),*Bma=new Graphics::TBitmap(), *Mma=new Graphics::TBitmap(), *tes=new Graphics::TBitmap(), *muh=new Graphics::TBitmap(), *che =new Graphics::TBitmap(),*LU=new Graphics::TBitmap();
Graphics::TBitmap *bam=new Graphics::TBitmap(), *white_fon=new Graphics::TBitmap(), *karp=new Graphics::TBitmap(),*karas=new Graphics::TBitmap(), *plo=new Graphics::TBitmap(), *kras=new Graphics::TBitmap(), *BLR=new Graphics::TBitmap(), *EE=new Graphics::TBitmap(), *shch=new Graphics::TBitmap(), *tol=new Graphics::TBitmap(), *zer=new Graphics::TBitmap(), *ryb=new Graphics::TBitmap();
Graphics::TBitmap *usa=new Graphics::TBitmap(), *Ry=new Graphics::TBitmap(), *fore=new Graphics::TBitmap(),*uda2=new Graphics::TBitmap(), *gol=new Graphics::TBitmap(), *ryka=new Graphics::TBitmap(), *math=new Graphics::TBitmap(), *flb=new Graphics::TBitmap(), *sud=new Graphics::TBitmap(), *oku=new Graphics::TBitmap(), *kom=new Graphics::TBitmap();
Graphics::TBitmap *nalim=new Graphics::TBitmap(), *ukleika=new Graphics::TBitmap(), *petr1=new Graphics::TBitmap(), *flot=new Graphics::TBitmap(), *leshch=new Graphics::TBitmap(), *ladog_sig=new Graphics::TBitmap(), *ugor=new Graphics::TBitmap(), *gustera=new Graphics::TBitmap(), *chehon=new Graphics::TBitmap(), *yaz=new Graphics::TBitmap();
Graphics::TBitmap *som=new Graphics::TBitmap(), *kefir=new Graphics::TBitmap(), *king=new Graphics::TBitmap(), *rook=new Graphics::TBitmap(), *bishop=new Graphics::TBitmap(), *knight=new Graphics::TBitmap(), *kotik=new Graphics::TBitmap(), *shiwa=new Graphics::TBitmap(), *muhina=new Graphics::TBitmap(), *oscar=new Graphics::TBitmap();
Graphics::TBitmap *chloh=new Graphics::TBitmap(), *pion=new Graphics::TBitmap(), *lilia=new Graphics::TBitmap(), *vasilek=new Graphics::TBitmap(), *cola=new Graphics::TBitmap(), *sprite=new Graphics::TBitmap(), *kvas=new Graphics::TBitmap(), *uda3=new Graphics::TBitmap(), *bystr=new Graphics::TBitmap(), *dunos=new Graphics::TBitmap();
Graphics::TBitmap *flBay=new Graphics::TBitmap(), *hari=new Graphics::TBitmap(), *jer=new Graphics::TBitmap(), *klbas=new Graphics::TBitmap(), *lin=new Graphics::TBitmap(), *pes=new Graphics::TBitmap(), *szn=new Graphics::TBitmap(), *shelk=new Graphics::TBitmap(), *sig=new Graphics::TBitmap(), *sinec=new Graphics::TBitmap();

TRect Ppop,Ppop2, P1,P2,P3,P4,P5,P6,P7,P8,P9,PP;;
int knop,o,na,kn[7],np,zo,ves,d,price,lud=1,record=0,q=0,benz=0,mis[20],lm,vesdom[9],udbuyd[6],uddraw[6], minut=20, sec1=5, sec2=6, t_cond=0, t_level;
int set_level=0, sets[3], curset=0, knopset=0, rybinset=0, maxrybinset=0, brokeset=0, kol_open=0, kol_catch=0, item=0, eda[5], bonus1=0;
vector<string> ryby;
extern vector<string> kartiny;
extern vector<string> rybyinset;
extern vector<int> vesinset;
extern vector<int> priceinset;
extern map<string, Graphics::TBitmap*> mapa;
vector <Graphics::TBitmap*> items_pic(16);
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
if (knopset==0) {
if ((benz<3)&&(zo==6))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="3";
 }
if ((benz>=3)&&(zo==6)) {
benz-=3;
Image1->Canvas->Draw(0,0,NU);
zo=0;
}
 if ((benz<7)&&(zo==3))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="7";
 }
if ((benz>=7)&&(zo==3)) {
benz-=7;
Image1->Canvas->Draw(0,0,NU);
zo=0;
}
if ((benz<4)&&(zo==5))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="4";
 }
if ((benz>=4)&&(zo==5)) {
benz-=4;
Image1->Canvas->Draw(0,0,NU);
zo=0;
}
} else {
  Form1->Enabled=False;
  Form12->Show();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
d=250;
t_level=1;
for (int i=0; i <20; i++)
 mis[i]=0;
 for (int i=0; i <3; i++)
 sets[i]=0;
  for (int i=0; i <5; i++)
 eda[i]=0;
 /*for (int i=0; i <4; i++)
 Form13->knops[i]=0;
 for (int i=0; i <16; i++)
 Form13->find[i]=0; */
 for (int i=0; i <9; i++)
 vesdom[i]=-1;
 uddraw[0]=1;
 udbuyd[0]=1;
 for (int i=1; i <6; i++) {
   udbuyd[i]=0;
   uddraw[i]=0;
 }
 lm=1;
 lud=1;
N2->Enabled=False;
N3->Enabled=False;
N4->Enabled=False;
N5->Enabled=False;
N6->Enabled=False;
N7->Enabled=False;
N9->Enabled=False;
N12->Enabled=False;
N17->Enabled=False;
N14->Enabled=False;
N15->Enabled=False;
for (int i = 0; i < 7; i++)
kn[i]=0;
knop=0;
srand(time(0));
  Ppop=Bounds(0,0,207,148);
  Ppop2=Bounds(500,407,207,148);
  fon->Height=148;
  fon->Width=207;
  bishop->LoadFromFile("bishop_.bmp");
  chloh->LoadFromFile("chertopoloh_.bmp");
  cola->LoadFromFile("cola_.bmp");
  kefir->LoadFromFile("kefir_.bmp");
  king->LoadFromFile("king_.bmp");
  knight->LoadFromFile("knight_.bmp");
  kotik->LoadFromFile("kotik_.bmp");
  kvas->LoadFromFile("kvas_.bmp");
  lilia->LoadFromFile("lilii_.bmp");
  oscar->LoadFromFile("oscar_.bmp");
  pion->LoadFromFile("pion_.bmp");
  muhina->LoadFromFile("muhina_.bmp");
  rook->LoadFromFile("rook_.bmp");
  shiwa->LoadFromFile("shiwa_.bmp");
  sprite->LoadFromFile("sprite_.bmp");
  vasilek->LoadFromFile("vasilek_.bmp");
  uda->LoadFromFile("uda1.bmp");
  le->LoadFromFile("lesk.bmp");
  NU->LoadFromFile("nurn.bmp");
  PO->LoadFromFile("popl.bmp");
  NE->LoadFromFile("neva.bmp");
	usa->LoadFromFile("usach.bmp");
  fore->LoadFromFile("forel.bmp");
  gol->LoadFromFile("golavl.bmp");
  math->LoadFromFile("math.bmp");
  ryka->LoadFromFile("ryka.bmp");
  uda2->LoadFromFile("uda2.bmp");
  uda3->LoadFromFile("uda3.bmp");
  PR->LoadFromFile("prag.bmp");
  LO->LoadFromFile("lokt.bmp");
  KA->LoadFromFile("kavk.bmp");
  VO->LoadFromFile("vodo.bmp");
  SW->LoadFromFile("swis.bmp");
  LU->LoadFromFile("luza.bmp");
  che->LoadFromFile("cher.bmp");
  Mma->LoadFromFile("mmal.bmp");
  Bma->LoadFromFile("bmal.bmp");
  kar->LoadFromFile("kart.bmp");
  kuk->LoadFromFile("kuku.bmp");
  muh->LoadFromFile("muha.bmp");
  tes->LoadFromFile("test.bmp");
  karp->LoadFromFile("karp.bmp");
  som->LoadFromFile("som.bmp");
  karas->LoadFromFile("karas.bmp");
  kras->LoadFromFile("krasnoperka.bmp");
  EE->LoadFromFile("yoursh.bmp");
  BLR->LoadFromFile("rybel.bmp");
  plo->LoadFromFile("plotva.bmp");
  shch->LoadFromFile("shchuka.bmp");
  zer->LoadFromFile("zerka.bmp");
  tol->LoadFromFile("tolst.bmp");
  bam->LoadFromFile("bamur.bmp");
  flb->LoadFromFile("flBLR.bmp");
  ryb->LoadFromFile("ryba.bmp");
  sud->LoadFromFile("sudak.bmp");
  oku->LoadFromFile("okun.bmp");
  kom->LoadFromFile("komn.bmp");
  petr1->LoadFromFile("petr.bmp");
  flot->LoadFromFile("flot.bmp");
  white_fon->LoadFromFile("white_fon.bmp");
  nalim->LoadFromFile("nalim.bmp");
  ukleika->LoadFromFile("ukleika.bmp");
  leshch->LoadFromFile("leshch.bmp");
  ladog_sig->LoadFromFile("ladog_sig.bmp");
  ugor->LoadFromFile("ugor.bmp");
  gustera->LoadFromFile("gustera.bmp");
  chehon->LoadFromFile("chehon.bmp");
  yaz->LoadFromFile("yaz.bmp");
  bystr->LoadFromFile("bystrjanka.bmp");
  dunos->LoadFromFile("dunai.bmp");
  flBay->LoadFromFile("flBay.bmp");
  hari->LoadFromFile("harius.bmp");
  jer->LoadFromFile("jereh.bmp");
  klbas->LoadFromFile("kolbas.bmp");
  lin->LoadFromFile("lin.bmp");
  pes->LoadFromFile("peskar.bmp");
  szn->LoadFromFile("sazan.bmp");
  shelk->LoadFromFile("shelk.bmp");
  sig->LoadFromFile("sig.bmp");
  sinec->LoadFromFile("sinec.bmp");
  Image2->Canvas->Draw(5,25,tes);
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
  na=5;
  np=5;
  Button2->Caption="Купить "+IntToStr(ScrollBar1->Position*5)+" штук за "+IntToStr(ScrollBar1->Position*np)+" рублей";
  Image1->Canvas->Draw(0,0,LO);
  zo=6;
  items_pic[0]=chloh;
  items_pic[1]=lilia;
  items_pic[2]=pion;
  items_pic[3]=vasilek;
  items_pic[4]=cola;
  items_pic[5]=kefir;
  items_pic[6]=kvas;
  items_pic[7]=sprite;
  items_pic[8]=bishop;
  items_pic[9]=king;
  items_pic[10]=knight;
  items_pic[11]=rook;
  items_pic[12]=kotik;
  items_pic[13]=oscar;
  items_pic[14]=muhina;
  items_pic[15]=shiwa;
  mapa["Голавль"]=gol;
  mapa["Карп"]=karp;
  mapa["Зеркальный карп"]=zer;
  mapa["Карась"]=karas;
  mapa["Толстолобик"]=tol;
  mapa["Белый амур"]=bam;
  mapa["Усач"]=usa;
  mapa["Окунь"]=oku;
  mapa["Щука"]=shch;
  mapa["Рыба сорвалась"]=ryb;
  mapa["Рыба математик"]=math;
  mapa["Рыба кавказец"]=ryka;
  mapa["Рыба белорус"]=BLR;
  mapa["Флаг Беларуси"]=flb;
  mapa["Форель"]=fore;
  mapa["Плотва"]=plo;
  mapa["Краснопёрка"]=kras;
  mapa["Ёрш"]=EE;
  mapa["Судак"]=sud;
  mapa["Налим"]=nalim;
  mapa["Уклейка"]=ukleika;
  mapa["Лещ"]=leshch;
  mapa["Ладожский сиг"]=ladog_sig;
  mapa["Угорь"]=ugor;
  mapa["Густера"]=gustera;
  mapa["Рыба Петра Первого"]=petr1;
  mapa["Флаг флота России"]=flot;
  mapa["Чехонь"]=chehon;
  mapa["Язь"]=yaz;
  mapa["Сом"]=som;
  mapa["?fish"]=white_fon;
  mapa["Быстрянка"]=bystr;
  mapa["Дунайский лосось"]=dunos;
  mapa["Флаг Баварии"]=flBay;
  mapa["Хариус"]=hari;
  mapa["Жерех"]=jer;
  mapa["Колбаски"]=klbas;
  mapa["Линь"]=lin;
  mapa["Пескарь"]=pes;
  mapa["Сазан"]=szn;
  mapa["Рыба щелкунчик"]=shelk;
  mapa["Сиг"]=sig;
  mapa["Синец"]=sinec;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
 Image1->Canvas->Draw(0,0,SW);
 zo=2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
Image1->Canvas->Draw(0,0,PR);
zo=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N6Click(TObject *Sender)
{
if (knopset==0) {
if ((benz<4)&&(zo==6))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="4";
 }
if ((benz>=4)&&(zo==6)) {
benz-=4;
Image1->Canvas->Draw(0,0,VO);
zo=4;
}
 if ((benz<1)&&(zo==3))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="1";
 }
if ((benz>=1)&&(zo==3)) {
benz--;
Image1->Canvas->Draw(0,0,VO);
zo=4;
}
} else {
  Form1->Enabled=False;
  Form12->Show();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)
{
if (knopset==0) {
if ((benz<4)&&(zo==6))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="4";
 }
if ((benz>=4)&&(zo==6)) {
benz-=4;
Image1->Canvas->Draw(0,0,KA);
zo=3;
if ((lm==3)&&(mis[4]==0))
mis[4]++;
}
 if ((benz<5)&&(zo==5))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="5";
 }
if ((benz>=5)&&(zo==5)) {
benz-=5;
Image1->Canvas->Draw(0,0,KA);
zo=3;
}
if ((benz<7)&&(zo==0))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="7";
 }
if ((benz>=7)&&(zo==0)) {
benz-=7;
Image1->Canvas->Draw(0,0,KA);
zo=3;
}
} else {
  Form1->Enabled=False;
  Form12->Show();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
if (knopset==0) {
if ((benz<2)&&(zo==6))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="2";
 }
if ((benz>=2)&&(zo==6)) {
benz-=2;
Image1->Canvas->Draw(0,0,NE);
zo=5;
}
 if ((benz<5)&&(zo==3))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="5";
 }
if ((benz>=5)&&(zo==3)) {
benz-=5;
Image1->Canvas->Draw(0,0,NE);
zo=5;
}
if ((benz<4)&&(zo==0))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="4";
 }
if ((benz>=4)&&(zo==0)) {
benz-=4;
Image1->Canvas->Draw(0,0,NE);
zo=5;
}
} else {
  Form1->Enabled=False;
  Form12->Show();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N8Click(TObject *Sender)
{
if (knopset==0) {
if ((benz<4)&&(zo==3))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="4";
 }
if ((benz>=4)&&(zo==3)) {
benz-=4;
Image1->Canvas->Draw(0,0,LO);
zo=6;
}
if ((benz<2)&&(zo==5))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="2";
 }
if ((benz>=2)&&(zo==5)) {
benz-=2;
Image1->Canvas->Draw(0,0,LO);
zo=6;
}
if ((benz<3)&&(zo==0))
 {
 Form1->Enabled=False;
 Form6->Show();
 Form6->Label2->Caption="3";
 }
if ((benz>=3)&&(zo==0)) {
benz-=3;
Image1->Canvas->Draw(0,0,LO);
zo=6;
}
} else {
  Form1->Enabled=False;
  Form12->Show();
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N9Click(TObject *Sender)
{
Image1->Canvas->Draw(0,0,LU);
zo=7;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
o=0;
if ((knop==0)&&(o==0)) {
  Form2->Label7->Visible=False;
  N10->Enabled=False;
 N1->Enabled=False;
 BitBtn1->Enabled=False;
 Button4->Enabled=False;
 Button1->Caption="Вытащить удочку";
 knop=1;
 o=1;
 Timer1->Enabled=True;
 Timer1->Interval=rand()%2000+3000;
 PO->Transparent=True;
 le->Transparent=True;
 uda->Transparent=True;
 fon->Canvas->CopyRect(Ppop,Image1->Canvas,Ppop2);
	Image1->Canvas->Draw(500,470,PO);
   Image1->Canvas->Draw(509,407,le);
   Image1->Canvas->Draw(608,407,uda);
  }
  if ((knop==1)&&(o==0)) {
   N1->Enabled=True;
   N10->Enabled=True;
   BitBtn1->Enabled=True;
   Button4->Enabled=True;
   Button1->Caption="Закинуть удочку";
   knop=0;
   o=1;
   Image1->Canvas->Draw(500,407,fon);
   Timer1->Enabled=False;
   kol_catch=0;
  }
  if (knop==2) {
	Timer3->Enabled=False;
	Image4->Visible=False;
	N1->Enabled=True;
   N10->Enabled=True;
   BitBtn1->Enabled=True;
   Button4->Enabled=True;
   Button1->Caption="Закинуть удочку";
   knop=0;
   Image1->Canvas->Draw(500,407,fon);
   kn[na]--;
	Form2->Show() ;
	if (t_cond==1) {
		Form2->Button5->Visible=True;
	}
	if (kol_catch==1) {
		Form2->Button6->Visible=True;
		Form2->Button4->Visible=False;
	}
	if ((N14->Enabled==True)&&(ves<=200)&&(ves>0)&&(Form2->Label2->Caption!="Флаг Беларуси")&&(Form2->Label2->Caption!="Флаг флота России"))
	Form2->Button3->Visible=True;
	if ((mis[6]<15)&&(lm==4)&&(Form2->Label2->Caption!="Флаг Беларуси")&&(Form2->Label2->Caption!="Рыба сорвалась")&&(count(ryby.begin(), ryby.end(), AnsiString(Form2->Label2->Caption).c_str())==0)) {
	  mis[6]++;
	  ryby.push_back(AnsiString(Form2->Label2->Caption).c_str());
	}
	if ((ves>599)&&(Form2->Label2->Caption=="Толстолобик")&&(mis[1]==0))
	mis[1]++;
	if ((Form2->Label2->Caption=="Краснопёрка")&&(mis[2]<10)&&(lm==2))
	mis[2]++;
	if ((Form2->Label2->Caption=="Сом")&&(mis[19]<10)&&(lm==10))
	mis[19]++;
	if ((Form2->Label2->Caption=="Предмет коллекции")&&(mis[18]<5)&&(lm==10))
	mis[18]++;
	if ((Form2->Label2->Caption=="Форель")&&(mis[9]<7000)&&(lm==5))
	mis[9]+=ves;
	if (mis[9]>7000) {
		mis[9]=7000;
	}
	if ((Form2->Label2->Caption=="Щука")&&(mis[7]<10)&&(lm==4))
	mis[7]++;
	if ((ves>0)&&(ves<=60)&&(mis[10]<10)&&(lm==6))
	mis[10]++;
	if ((ves>=1000)&&(mis[12]<10)&&(lm==7))
	mis[12]++;
	if ((ves>=1500)&&(mis[17]<1)&&(lm==9))
	mis[17]++;
	if ((price==36)&&(mis[13]<1)&&(lm==7))
	mis[13]=1;
	if (((Form2->Label2->Caption=="Рыба математик")||(Form2->Label2->Caption=="Рыба кавказец")||(Form2->Label2->Caption=="Рыба белорус"))&&(mis[5]<10)&&(lm==3))
	mis[5]++;
	if (ves>record) {
	record=ves;
	Form2->Label7->Visible=True;
	if (lm==5) {
	  Form4->Label4->Caption=IntToStr(record);
	}
	}

	Form1->Enabled=False;
  }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N11Click(TObject *Sender)
{
  Image2->Canvas->Draw(5,25,kar);
  na=0;
  np=4;
  Label2->Caption=IntToStr(kn[na]);
  Button2->Caption="Купить "+IntToStr(ScrollBar1->Position*5)+" штук за "+IntToStr(ScrollBar1->Position*np)+" рублей";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
Image2->Canvas->Draw(5,25,kuk);
na=1;
np=4;
Label2->Caption=IntToStr(kn[na]);
Button2->Caption="Купить "+IntToStr(ScrollBar1->Position*5)+" штук за "+IntToStr(ScrollBar1->Position*np)+" рублей";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N13Click(TObject *Sender)
{
Image2->Canvas->Draw(5,25,che);
na=2;
np=7;
Label2->Caption=IntToStr(kn[na]);
Button2->Caption="Купить "+IntToStr(ScrollBar1->Position*5)+" штук за "+IntToStr(ScrollBar1->Position*np)+" рублей";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N14Click(TObject *Sender)
{
Image2->Canvas->Draw(5,25,Mma);
na=3;
np=8;
Label2->Caption=IntToStr(kn[na]);
Button2->Caption="Купить "+IntToStr(ScrollBar1->Position*5)+" штук за "+IntToStr(ScrollBar1->Position*np)+" рублей";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N15Click(TObject *Sender)
{
Image2->Canvas->Draw(5,25,Bma);
na=4;
np=11;
Label2->Caption=IntToStr(kn[na]);
Button2->Caption="Купить "+IntToStr(ScrollBar1->Position*5)+" штук за "+IntToStr(ScrollBar1->Position*np)+" рублей";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N16Click(TObject *Sender)
{
Image2->Canvas->Draw(5,25,tes);
na=5;
np=5;
Label2->Caption=IntToStr(kn[na]);
Button2->Caption="Купить "+IntToStr(ScrollBar1->Position*5)+" штук за "+IntToStr(ScrollBar1->Position*np)+" рублей";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N17Click(TObject *Sender)
{
Image2->Canvas->Draw(5,25,muh);
na=6;
np=7;
Label2->Caption=IntToStr(kn[na]);
Button2->Caption="Купить "+IntToStr(ScrollBar1->Position*5)+" штук за "+IntToStr(ScrollBar1->Position*np)+" рублей";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ScrollBar1Scroll(TObject *Sender, TScrollCode ScrollCode,
		  int &ScrollPos)
{
Button2->Caption="Купить "+IntToStr(ScrollBar1->Position*5)+" штук за "+IntToStr(ScrollBar1->Position*np)+" рублей";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
 kn[na]+=ScrollBar1->Position*5;
 Label2->Caption=IntToStr(kn[na]);
 d-=ScrollBar1->Position*np;
 Label1->Caption=IntToStr(d);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
  if (d<ScrollBar1->Position*np)
Button2->Enabled=False;
if (d>=ScrollBar1->Position*np)
Button2->Enabled=True;
if ((kn[na]==0)&&(knop==0))
  Button1->Enabled=False;
  if (kn[na]>0)
  Button1->Enabled=True;
  Label2->Caption=IntToStr(kn[na]);
  Label1->Caption=IntToStr(d);
  Label3->Caption=IntToStr(benz);
  if (d<100)
   Button3->Enabled=False;
	if (d>=100)
   Button3->Enabled=True;
  if (lud==1)
	uda->LoadFromFile("uda1.bmp");
  if (lud==2)
	uda->LoadFromFile("uda2.bmp");
	if (lud==3)
	uda->LoadFromFile("uda3.bmp");
  if (sets[curset]==0) {
	Button5->Enabled=False;
  }	else {
	Button5->Enabled=True;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
 Button1->Caption="Тянуть";
 Image4->Visible=True;
 knop=2;
 Timer1->Enabled=False;

 int e=100*zo+na;
 switch(e)
 {
  case 600:
  {
	int ra=rand()%100+1;
	if (ra<=32) {
	  Form2->Label2->Caption="Карп";
	  if (lud==1) {
		 ves=rand()%500+200;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+400;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+800;
		 Timer3->Interval=1800-ves;
	  }
	  price=ves/25;
	}
	if ((ra>32)&&(ra<=59)) {
	  Form2->Label2->Caption="Толстолобик";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%850+500;
		 Timer3->Interval=1500-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+700;
		 Timer3->Interval=1700-ves;
	  }
	  price=ves/23;
	}
	if ((ra>59)&&(ra<=78)) {
	  Form2->Label2->Caption="Зеркальный карп";
	  if (lud==1) {
		 ves=rand()%500+150;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%600+300;
		 Timer3->Interval=1200-ves;
	  }
	  if (lud==3) {
		 ves=rand()%700+700;
		 Timer3->Interval=1650-ves;
	  }
	  price=ves/25;
	}
	 if ((ra>78)&&(ra<=89)) {
	  Form2->Label2->Caption="Карась";
	  if (lud==1) {
		 ves=rand()%400+100;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%450+250;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/30;
	}
   if ((ra>89)&&(ra<=95)) {
	  Form2->Label2->Caption="Рыба белорус";
	  if (lud==1) {
		 ves=rand()%700+100;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+400;
		 Timer3->Interval=1250-ves;
	  }
	  if (lud==3) {
		 ves=rand()%700+700;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/25;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
  break;
  }
   case 603:
  {
	int ra=rand()%100+1;
	if (ra<=30) {
	  Form2->Label2->Caption="Флаг Беларуси";
	  ves=100;
	  Timer3->Interval=900-ves;
	  price=10;
	}
	if ((ra>30)&&(ra<=80)) {
	  Form2->Label2->Caption="Щука";
	  if (lud==1) {
		 ves=rand()%500+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+500;
		 Timer3->Interval=1350-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+700;
		 Timer3->Interval=1650-ves;
	  }
	  price=ves/22;
	}
	if (ra>80) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
  break;
  }
   case 605:
  {
	int ra=rand()%100+1;
	if (ra<=29) {
	  Form2->Label2->Caption="Карп";
	  if (lud==1) {
		 ves=rand()%500+200;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+400;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+800;
		 Timer3->Interval=1750-ves;
	  }
	  price=ves/25;
	}
	if ((ra>69)&&(ra<=85)) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		 ves=rand()%250+50;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%350+150;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%350+250;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/27;
	}
	if ((ra>29)&&(ra<=51)) {
	  Form2->Label2->Caption="Зеркальный карп";
	  if (lud==1) {
		 ves=rand()%500+150;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%600+300;
		 Timer3->Interval=1200-ves;
	  }
	  if (lud==3) {
		 ves=rand()%700+700;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/25;
	}
	 if ((ra>51)&&(ra<=69)) {
	  Form2->Label2->Caption="Карась";
	  if (lud==1) {
		 ves=rand()%400+100;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%450+250;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/30;
	}
   if ((ra>85)&&(ra<=95)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Краснопёрка";
		 ves=rand()%210+40;
		 Timer3->Interval=800-ves;
		 price=ves/24;
	  }
	  if (lud==2) {
		 Form2->Label2->Caption="Краснопёрка";
		 ves=rand()%240+160;
		 Timer3->Interval=1000-ves;
		 price=ves/24;
	  }
	  if (lud==3) {
		 int ralo=rand()%2;
		 if (ralo==0) {
		   Form2->Label2->Caption="Краснопёрка";
		   ves=rand()%200+200;
		   Timer3->Interval=1000-ves;
		   price=ves/24;
		 }
		 if (ralo==1) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 item=(x*x+20)/30;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
  break;
  }
  case 602:
  {
	int ra=rand()%100+1;
	if ((ra>83)&&(ra<=91)) {
	  Form2->Label2->Caption="Карп";
	  if (lud==1) {
		 ves=rand()%500+200;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+400;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+800;
		 Timer3->Interval=1750-ves;
	  }
	  price=ves/25;
	}
	if ((ra>38)&&(ra<=64)) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		 ves=rand()%250+50;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%350+150;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%350+250;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/27;
	}
	if ((ra>64)&&(ra<=83)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Ёрш";
		 ves=rand()%150+50;
		 Timer3->Interval=900-ves;
		 price=ves/20;
	  }
	  if (lud==2) {
		 Form2->Label2->Caption="Ёрш";
		 ves=rand()%200+100;
		 Timer3->Interval=900-ves;
		 price=ves/20;
	  }
	  if (lud==3) {
		 int ralo=rand()%2;
		 if (ralo==0) {
		   Form2->Label2->Caption="Ёрш";
		   ves=rand()%200+100;
		   Timer3->Interval=1000-ves;
		   price=ves/20;
		 }
		 if (ralo==1) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 item=(x*x+20)/30;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	 if (ra<=38) {
	  Form2->Label2->Caption="Карась";
	  if (lud==1) {
		 ves=rand()%400+100;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%450+250;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/30;
	}
   if ((ra>85)&&(ra<=95)) {
	  Form2->Label2->Caption="Белый амур";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==2) {
		 ves=rand()%750+550;
		 Timer3->Interval=1400-ves;
	  }
	  if (lud==3) {
		 ves=rand()%850+850;
		 Timer3->Interval=1800-ves;
	  }
	  price=ves/18;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
		 ves=0;
   Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
  break;
  }
  case 300:
  {
	int ra=rand()%100+1;
	if (ra<=25) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		 ves=rand()%400+100;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+250;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==3) {
		 ves=rand()%300+350;
		 Timer3->Interval=900-ves;
	  }
	  price=ves/27;
	}
	if ((ra>25)&&(ra<=47)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+350;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%650+500;
		 Timer3->Interval=1350-ves;
	  }
	  price=ves/30;
	}
	if ((ra>47)&&(ra<=66)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Усач";
		 ves=rand()%250+50;
		 Timer3->Interval=700-ves;
		 price=ves/22;
	  }
	  if (lud==2) {
		 Form2->Label2->Caption="Усач";
		 ves=rand()%350+100;
		 Timer3->Interval=900-ves;
		 price=ves/22;
	  }
	  if (lud==3) {
		 int ralo=rand()%4;
		 if (ralo>0) {
		   Form2->Label2->Caption="Усач";
		   ves=rand()%300+200;
		   Timer3->Interval=1000-ves;
		   price=ves/22;
		 }
		 if (ralo==0) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 item=(x*x+20)/30;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	 if ((ra>66)&&(ra<=79)) {
	  Form2->Label2->Caption="Карась";
	  if (lud==1) {
		 ves=rand()%400+100;
   Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%500+250;
   Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%350+350;
   Timer3->Interval=1000-ves;
	  }
	  price=ves/30;
	}
   if ((ra>79)&&(ra<=89)) {
	  Form2->Label2->Caption="Рыба математик";
	  if (lud==1) {
		 ves=rand()%600+100;
   Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%600+300;
   Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+500;
   Timer3->Interval=1600-ves;
	  }
	  price=ves/25;
	}
	if ((ra>89)&&(ra<=95)) {
	  Form2->Label2->Caption="Рыба кавказец";
	  if (lud==1) {
		 ves=rand()%600+100;
   Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%600+300;
   Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+500;
   Timer3->Interval=1100-ves;
	  }
	  price=ves/25;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
		 ves=0;
   Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
  break;
  }
  case 303:
  {
	int ra=rand()%100+1;
	if (ra<=28) {
	  Form2->Label2->Caption="Судак";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=900-ves;
	  }
	   if (lud==2) {
		 ves=rand()%600+400;
		 Timer3->Interval=1150-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1050+500;
		 Timer3->Interval=1700-ves;
	  }
	  price=ves/26;
	}
	if ((ra>78)&&(ra<=88)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+350;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%650+500;
		 Timer3->Interval=1400-ves;
	  }
	  price=ves/30;
	}
	if ((ra>28)&&(ra<=54)) {
	  Form2->Label2->Caption="Щука";
	  if (lud==1) {
		 ves=rand()%500+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+500;
		 Timer3->Interval=1400-ves;
	  }
	   if (lud==3) {
		 ves=rand()%800+800;
		 Timer3->Interval=1800-ves;
	  }
	  price=ves/22;
	}
	 if ((ra>54)&&(ra<=78)) {
	  Form2->Label2->Caption="Окунь";
	  if (lud==1) {
		 ves=rand()%400+150;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%500+350;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+500;
		 Timer3->Interval=1450-ves;
	  }
	  price=ves/30;
	}
   if ((ra>88)&&(ra<=95)) {
	  Form2->Label2->Caption="Форель";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%800+550;
		 Timer3->Interval=1450-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1000+800;
		 Timer3->Interval=1900-ves;
	  }
	  price=ves/20;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
		 ves=0;
   Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
  break;
  }
  case 302:
  {
	int ra=rand()%100+1;
	if ((ra>71)&&(ra<=88)) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		 ves=rand()%400+100;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+250;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==3) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/27;
	}
	if ((ra>51)&&(ra<=71)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
   Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+350;
   Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+500;
   Timer3->Interval=1300-ves;
	  }
	  price=ves/30;
	}
	if (ra<=28) {
	  if (lud==1) {
		 Form2->Label2->Caption="Усач";
		 ves=rand()%250+50;
		 Timer3->Interval=700-ves;
		 price=ves/22;
	  }
	  if (lud==2) {
		 Form2->Label2->Caption="Усач";
		 ves=rand()%350+100;
		 Timer3->Interval=850-ves;
		 price=ves/22;
	  }
	  if (lud==3) {
		 int ralo=rand()%4;
		 if (ralo>0) {
		   Form2->Label2->Caption="Усач";
		   ves=rand()%300+200;
		   Timer3->Interval=1000-ves;
		   price=ves/22;
		 }
		 if (ralo==0) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 item=(x*x+20)/30+12;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	 if ((ra>88)&&(ra<=95)) {
	  Form2->Label2->Caption="Карась";
	  if (lud==1) {
		 ves=rand()%400+100;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%500+250;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%400+350;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/30;
	}
   if ((ra>28)&&(ra<=51)) {
	  Form2->Label2->Caption="Форель";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%800+550;
		 Timer3->Interval=1450-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1000+800;
		 Timer3->Interval=1900-ves;
	  }
	  price=ves/20;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
  break;
  }
  case 305:
  {
	int ra=rand()%100+1;
	if (ra<=31) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		 ves=rand()%400+100;
   Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+250;
   Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/27;
	}
	if ((ra>31)&&(ra<=55)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
   Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+350;
   Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+500;
   Timer3->Interval=1300-ves;
	  }
	  price=ves/30;
	}
	if ((ra>75)&&(ra<=93)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Усач";
		 ves=rand()%250+50;
		 Timer3->Interval=700-ves;
		 price=ves/22;
	  }
	   if (lud==2) {
		 Form2->Label2->Caption="Усач";
		 ves=rand()%350+100;
		 Timer3->Interval=800-ves;
		 price=ves/22;
	  }
	  if (lud==3) {
		 int ralo=rand()%4;
		 if (ralo>0) {
		   Form2->Label2->Caption="Усач";
		   ves=rand()%300+200;
		   Timer3->Interval=1000-ves;
		   price=ves/22;
		 }
		 if (ralo==0) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 item=(x*x+20)/30+4;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	 if ((ra>55)&&(ra<=75)) {
	  Form2->Label2->Caption="Карась";
	  if (lud==1) {
		ves=rand()%400+100;
		Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		ves=rand()%500+250;
		Timer3->Interval=1050-ves;
	  }
	  if (lud==3) {
		 ves=rand()%400+350;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/30;
	}
   if ((ra>93)&&(ra<=95)) {
	  Form2->Label2->Caption="Форель";
	  if (lud==1) {
		ves=rand()%600+300;
		Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		ves=rand()%800+500;
		Timer3->Interval=1400-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1000+800;
		 Timer3->Interval=1900-ves;
	  }
	  price=ves/20;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
  break;
  }
  case 500:
  {
   int ra=rand()%100+1;
	if (ra<=20) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		 ves=rand()%300+100;
		 Timer3->Interval=800-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+250;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/27;
	}
	if ((ra>36)&&(ra<=52)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%450+350;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+500;
		 Timer3->Interval=1300-ves;
	  }
	  price=ves/30;
	}
	if ((ra>67)&&(ra<=81)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Ёрш";
		 ves=rand()%150+50;
		 Timer3->Interval=900-ves;
		 price=ves/20;
	  }
	   if (lud==2) {
		 Form2->Label2->Caption="Ёрш";
		 ves=rand()%200+100;
		 Timer3->Interval=900-ves;
		 price=ves/20;
	  }
	  if (lud==3) {
		 int ralo=rand()%2;
		 if (ralo==0) {
		   Form2->Label2->Caption="Ёрш";
		   ves=rand()%200+100;
		   Timer3->Interval=1000-ves;
		   price=ves/20;
		 }
		 if (ralo==1) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 item=(x*x+20)/30+8;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	if ((ra>81)&&(ra<=95)) {
	  Form2->Label2->Caption="Рыба Петра Первого";
	  if (lud==1) {
		 ves=rand()%400+300;
		 Timer3->Interval=950-ves;
	  }
	   if (lud==2) {
		 ves=rand()%500+500;
		 Timer3->Interval=1200-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+650;
		 Timer3->Interval=1700-ves;
	  }
	  price=ves/25;
	}
	 if ((ra>20)&&(ra<=36)) {
	  if (lud==1) {
		Form2->Label2->Caption="Уклейка";
		ves=rand()%40+10;
		Timer3->Interval=700-ves;
		price=ves/60+1;
	  }
	  if (lud==2) {
		Form2->Label2->Caption="Уклейка";
		ves=rand()%60+30;
		Timer3->Interval=700-ves;
		price=ves/60+1;
	  }
	  if (lud==3) {
		Form2->Label2->Caption="Сом";
		ves=rand()%1000+1000;
		Timer3->Interval=2200-ves;
		price=ves/24;
	  }
	}
   if ((ra>52)&&(ra<=67)) {
	  Form2->Label2->Caption="Густера";
	  if (lud==1) {
		ves=rand()%400+150;
		Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		ves=rand()%550+300;
		Timer3->Interval=1400-ves;
	  }
	  if (lud==3) {
		ves=rand()%750+500;
		Timer3->Interval=1500-ves;
	  }
	  price=ves/27;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
  case 502:
  {
   int ra=rand()%100+1;
	if (ra<=18) {
	  Form2->Label2->Caption="Окунь";
	  if (lud==1) {
		 ves=rand()%400+150;
		 Timer3->Interval=800-ves;
	  }
	  if (lud==2) {
		 ves=rand()%500+350;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+500;
		 Timer3->Interval=1450-ves;
	  }
	  price=ves/30;
	}
	if ((ra>66)&&(ra<=77)) {
	  Form2->Label2->Caption="Угорь";
	  if (lud==1) {
		 ves=rand()%350+150;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+350;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+600;
		 Timer3->Interval=1400-ves;
	  }
	  price=ves/25;
	}
	if ((ra>36)&&(ra<=52)) {
	  Form2->Label2->Caption="Налим";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1050-ves;
	  }
	  if (lud==2) {
		 ves=rand()%750+550;
		 Timer3->Interval=1500-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1050+800;
		 Timer3->Interval=2000-ves;
	  }
	  price=ves/25;
	}
	if ((ra>18)&&(ra<=36)) {
	  Form2->Label2->Caption="Язь";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%500+350;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+550;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/28;
	}
	if ((ra>77)&&(ra<=85)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Ёрш";
		 ves=rand()%150+50;
		 Timer3->Interval=900-ves;
		 price=ves/20;
	  }
	   if (lud==2) {
		 Form2->Label2->Caption="Ёрш";
		 ves=rand()%200+100;
		 Timer3->Interval=900-ves;
		 price=ves/20;
	  }
	  if (lud==3) {
		 int ralo=rand()%2;
		 if (ralo==0) {
		   Form2->Label2->Caption="Ёрш";
		   ves=rand()%200+100;
		   Timer3->Interval=1000-ves;
		   price=ves/20;
		 }
		 if (ralo==1) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 item=(x*x+20)/30+8;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	if ((ra>52)&&(ra<=66)) {
	  Form2->Label2->Caption="Лещ";
	  if (lud==1) {
		 ves=rand()%500+300;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%600+500;
		 Timer3->Interval=1350-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+700;
		 Timer3->Interval=1800-ves;
	  }
	  price=ves/23;
	}
	 if ((ra>85)&&(ra<=92)) {
	  if (lud==1) {
		Form2->Label2->Caption="Уклейка";
		ves=rand()%40+10;
		Timer3->Interval=700-ves;
		price=ves/60+1;
	  }
	  if (lud==2) {
		Form2->Label2->Caption="Уклейка";
		ves=rand()%60+30;
		Timer3->Interval=700-ves;
		price=ves/60+1;
	  }
	  if (lud==3) {
		Form2->Label2->Caption="Сом";
		ves=rand()%1000+1000;
		Timer3->Interval=2200-ves;
		price=ves/24;
	  }
	}
   if ((ra>92)&&(ra<=95)) {
	  Form2->Label2->Caption="Густера";
	  if (lud==1) {
		ves=rand()%400+150;
		Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		ves=rand()%550+300;
		Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		ves=rand()%750+500;
		Timer3->Interval=1500-ves;
	  }
	  price=ves/27;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
  case 503:
  {
   int ra=rand()%100+1;
	if (ra<=20) {
	  Form2->Label2->Caption="Судак";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%600+400;
		 Timer3->Interval=1150-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+600;
		 Timer3->Interval=1550-ves;
	  }
	  price=ves/26;
	}
	if ((ra>54)&&(ra<=67)) {
	  Form2->Label2->Caption="Угорь";
	  if (lud==1) {
		 ves=rand()%350+150;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+350;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+600;
		 Timer3->Interval=1400-ves;
	  }
	  price=ves/25;
	}
	if ((ra>67)&&(ra<=78)) {
	  Form2->Label2->Caption="Налим";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1050-ves;
	  }
	  if (lud==2) {
		 ves=rand()%750+550;
		 Timer3->Interval=1500-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1050+800;
		 Timer3->Interval=2000-ves;
	  }
	  price=ves/25;
	}
	if ((ra>78)&&(ra<=88)) {
	  Form2->Label2->Caption="Ладожский сиг";
	  if (lud==1) {
		 ves=rand()%500+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%650+350;
		 Timer3->Interval=1200-ves;
	  }
	  if (lud==2) {
		 ves=rand()%850+550;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/25;
	}
	if ((ra>88)&&(ra<=95)) {
	  Form2->Label2->Caption="Окунь";
	  if (lud==1) {
		 ves=rand()%400+150;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%500+350;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+500;
		 Timer3->Interval=1450-ves;
	  }
	  price=ves/30;
	}
	 if ((ra>38)&&(ra<=54)) {
	  if (lud==1) {
		Form2->Label2->Caption="Чехонь";
		ves=rand()%250+150;
		Timer3->Interval=900-ves;
		price=ves/34;
	  }
	  if (lud==2) {
		Form2->Label2->Caption="Чехонь";
		ves=rand()%450+250;
		Timer3->Interval=1200-ves;
		price=ves/34;
	  }
	  if (lud==3) {
		int ran=rand()%4;
		if (ran==0) {
		  if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 item=(x*x+20)/30+4;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		  }
		  if (kol_open==0) {
			Form2->Label2->Caption="Рыба сорвалась";
			ves=0;
			Timer3->Interval=1000;
			price=0;
		  }
		}
		if (ran>0) {
		  Form2->Label2->Caption="Чехонь";
		  ves=rand()%550+350;
		  Timer3->Interval=1200-ves;
		  price=ves/34;
		}
	  }
	}
   if ((ra>20)&&(ra<=38)) {
	  Form2->Label2->Caption="Щука";
	  if (lud==1) {
		ves=rand()%500+300;
		Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		ves=rand()%700+500;
		Timer3->Interval=1400-ves;
	  }
	  if (lud==3) {
		ves=rand()%850+800;
		Timer3->Interval=1850-ves;
	  }
	  price=ves/22;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
  case 505:
  {
   int ra=rand()%100+1;
	if (ra<=19) {
	  Form2->Label2->Caption="Густера";
	  if (lud==1) {
		 ves=rand()%400+150;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%550+300;
		 Timer3->Interval=1150-ves;
	  }
	  if (lud==3) {
		ves=rand()%750+500;
		Timer3->Interval=1500-ves;
	  }
	  price=ves/27;
	}
	if ((ra>19)&&(ra<=37)) {
	  Form2->Label2->Caption="Лещ";
	  if (lud==1) {
		 ves=rand()%500+300;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%600+500;
		 Timer3->Interval=1350-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+700;
		 Timer3->Interval=1800-ves;
	  }
	  price=ves/23;
	}
	if ((ra>37)&&(ra<=54)) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		 ves=rand()%300+100;
		 Timer3->Interval=1050-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+250;
		 Timer3->Interval=1500-ves;
	  }
	  if (lud==3) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/27;
	}
	if ((ra>54)&&(ra<=69)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Ёрш";
		 ves=rand()%150+50;
		 Timer3->Interval=900-ves;
		 price=ves/20;
	  }
	   if (lud==2) {
		 Form2->Label2->Caption="Ёрш";
		 ves=rand()%200+100;
		 Timer3->Interval=900-ves;
		 price=ves/20;
	  }
	  if (lud==3) {
		 int ralo=rand()%2;
		 if (ralo==0) {
		   Form2->Label2->Caption="Ёрш";
		   ves=rand()%200+100;
		   Timer3->Interval=1000-ves;
		   price=ves/20;
		 }
		 if (ralo==1) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 item=(x*x+20)/30+4;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	if ((ra>69)&&(ra<=82)) {
	  Form2->Label2->Caption="Краснопёрка";
	  if (lud==1) {
		 ves=rand()%210+40;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%240+160;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%300+200;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/24;
	}
	 if ((ra>82)&&(ra<=92)) {
	  if (lud==1) {
		Form2->Label2->Caption="Уклейка";
		ves=rand()%40+10;
		Timer3->Interval=700-ves;
		price=ves/60+1;
	  }
	  if (lud==2) {
		Form2->Label2->Caption="Уклейка";
		ves=rand()%60+30;
		Timer3->Interval=700-ves;
		price=ves/60+1;
	  }
	  if (lud==3) {
		Form2->Label2->Caption="Сом";
		ves=rand()%1000+1000;
		Timer3->Interval=2200-ves;
		price=ves/24;
	  }
	}
   if ((ra>92)&&(ra<=95)) {
	  Form2->Label2->Caption="Флаг флота России";
	  ves=100;
	  Timer3->Interval=900-ves;
	  price=30;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
  case 506:
  {
   int ra=rand()%100+1;
	if (ra<=25) {
	  Form2->Label2->Caption="Язь";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%500+350;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+550;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/28;
	}
	if ((ra>25)&&(ra<=47)) {
	  Form2->Label2->Caption="Жерех";
	  if (lud==1) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+300;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+500;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/24;
	}
	if ((ra>42)&&(ra<=58)) {
	  if (lud==1) {
		Form2->Label2->Caption="Рыба сорвалась";
		ves=0;
		Timer3->Interval=1000;
		price=0;
	  }
	  if (lud==2) {
		 int hgyr=rand()%2;
		 if (hgyr==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		 } else {
			Form2->Label2->Caption="Сом";
			 ves=rand()%700+600;
			 Timer3->Interval=1400-ves;
			 price=ves/24;
		 }
	  }
	  if (lud==3) {
		 Form2->Label2->Caption="Сом";
			 ves=rand()%1000+1000;
			 Timer3->Interval=2200-ves;
			 price=ves/24;
	  }
	}
	if ((ra>58)&&(ra<=71)) {
	  Form2->Label2->Caption="Форель";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%800+500;
		 Timer3->Interval=1400-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1000+800;
		 Timer3->Interval=1900-ves;
	  }
	  price=ves/20;
	}
	if ((ra>71)&&(ra<=80)) {
	  Form2->Label2->Caption="Флаг Баварии";
	  ves=100;
	  Timer3->Interval=900-ves;
	  price=15;
	}
	if ((ra>80)&&(ra<=88)) {
	  Form2->Label2->Caption="Усач";
	  if (lud==1) {
		 ves=rand()%250+50;
		 Timer3->Interval=700-ves;
	  }
	  if (lud==2) {
		 ves=rand()%350+100;
		 Timer3->Interval=800-ves;
	  }
	  if (lud==3) {
		 ves=rand()%300+200;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/22;
	}
	if ((ra>88)&&(ra<=95)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%450+350;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+500;
		 Timer3->Interval=1300-ves;
	  }
	  price=ves/30;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Interval+=bonus1;
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
  case 0:
  {
   int ra=rand()%100+1;
	if (ra<=20) {
	  Form2->Label2->Caption="Усач";
	  if (lud==1) {
		 ves=rand()%250+50;
		 Timer3->Interval=700-ves;
	  }
	  if (lud==2) {
		 ves=rand()%350+100;
		 Timer3->Interval=800-ves;
	  }
	  if (lud==3) {
		 ves=rand()%300+200;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/22;
	}
	if ((ra>20)&&(ra<=38)) {
	  Form2->Label2->Caption="Сазан";
	  if (lud==1) {
		 ves=rand()%600+200;
		 Timer3->Interval=1200-ves;
	  }
	  if (lud==2) {
		 ves=rand()%800+500;
		 Timer3->Interval=1600-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+900;
		 Timer3->Interval=1950-ves;
	  }
	  price=ves/23;
	}
	if ((ra>38)&&(ra<=53)) {
	  Form2->Label2->Caption="Рыба щелкунчик";
	  if (lud==1) {
		 ves=rand()%300+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%600+300;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%700+500;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/25;
	}
	if ((ra>53)&&(ra<=66)) {
	  Form2->Label2->Caption="Карп";
	  if (lud==1) {
		 ves=rand()%500+200;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+400;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+800;
		 Timer3->Interval=1750-ves;
	  }
	  price=ves/25;
	}
	if ((ra>66)&&(ra<=78)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Пескарь";
		 ves=rand()%40+10;
		 Timer3->Interval=900-ves;
		 price=ves/60+1;
	  }
	   if (lud==2) {
		 Form2->Label2->Caption="Пескарь";
		 ves=rand()%60+20;
		 Timer3->Interval=900-ves;
		 price=ves/60+1;
	  }
	  if (lud==3) {
		 int ralo=rand()%2;
		 if (ralo==0) {
		   Form2->Label2->Caption="Пескарь";
		   ves=rand()%50+50;
		   Timer3->Interval=1000-ves;
		   price=ves/60+1;
		 }
		 if (ralo==1) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 int y=rand()%10;
			 item=((x*x+20)/30)*4+(y*y+20)/30;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	if ((ra>78)&&(ra<=88)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%450+350;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+500;
		 Timer3->Interval=1300-ves;
	  }
	  price=ves/30;
	}
   if ((ra>88)&&(ra<=95)) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		ves=rand()%300+100;
		Timer3->Interval=1050-ves;
	  }
	  if (lud==2) {
		ves=rand()%400+250;
		Timer3->Interval=1500-ves;
	  }
	  if (lud==3) {
		ves=rand()%400+300;
		Timer3->Interval=1000-ves;
	  }
	  price=ves/27;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
  case 5:
  {
   int ra=rand()%100+1;
	if (ra<=17) {
	  Form2->Label2->Caption="Лещ";
	  if (lud==1) {
		 ves=rand()%500+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%600+500;
		 Timer3->Interval=1350-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+700;
		 Timer3->Interval=1800-ves;
	  }
	  price=ves/23;
	}
	if ((ra>17)&&(ra<=32)) {
	  Form2->Label2->Caption="Быстрянка";
	  if (lud==1) {
		 ves=rand()%100+40;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%150+50;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%160+90;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/28;
	}
	if ((ra>46)&&(ra<=59)) {
	  Form2->Label2->Caption="Линь";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+300;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%750+500;
		 Timer3->Interval=1500-ves;
	  }
	  price=ves/29;
	}
	if ((ra>59)&&(ra<=72)) {
	  Form2->Label2->Caption="Сазан";
	  if (lud==1) {
		 ves=rand()%600+200;
		 Timer3->Interval=1200-ves;
	  }
	  if (lud==2) {
		 ves=rand()%800+500;
		 Timer3->Interval=1600-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+900;
		 Timer3->Interval=1950-ves;
	  }
	  price=ves/23;
	}
	if ((ra>32)&&(ra<=46)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Пескарь";
		 ves=rand()%40+10;
		 Timer3->Interval=900-ves;
		 price=ves/60+1;
	  }
	   if (lud==2) {
		 Form2->Label2->Caption="Пескарь";
		 ves=rand()%60+20;
		 Timer3->Interval=900-ves;
		 price=ves/60+1;
	  }
	  if (lud==3) {
		 int ralo=rand()%2;
		 if (ralo==0) {
		   Form2->Label2->Caption="Пескарь";
		   ves=rand()%50+50;
		   Timer3->Interval=1000-ves;
		   price=ves/60+1;
		 }
		 if (ralo==1) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 int y=rand()%10;
			 item=((x*x+20)/30)*4+(y*y+20)/30;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	if ((ra>72)&&(ra<=85)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%450+350;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+500;
		 Timer3->Interval=1300-ves;
	  }
	  price=ves/30;
	}
   if ((ra>85)&&(ra<=95)) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		ves=rand()%300+100;
		Timer3->Interval=1050-ves;
	  }
	  if (lud==2) {
		ves=rand()%400+250;
		Timer3->Interval=1500-ves;
	  }
	  if (lud==3) {
		ves=rand()%400+300;
		Timer3->Interval=1000-ves;
	  }
	  price=ves/27;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
  case 2:
  {
   int ra=rand()%100+1;
	if (ra<=14) {
	  Form2->Label2->Caption="Синец";
	  if (lud==1) {
		 ves=rand()%300+100;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+250;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%500+350;
		 Timer3->Interval=1300-ves;
	  }
	  price=ves/27;
	}
	if ((ra>14)&&(ra<=26)) {
	  Form2->Label2->Caption="Линь";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+300;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%750+500;
		 Timer3->Interval=1500-ves;
	  }
	  price=ves/29;
	}
	if ((ra>26)&&(ra<=36)) {
	  Form2->Label2->Caption="Форель";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%800+500;
		 Timer3->Interval=1400-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1000+800;
		 Timer3->Interval=1900-ves;
	  }
	  price=ves/20;
	}
	if ((ra>36)&&(ra<=44)) {
	  Form2->Label2->Caption="Налим";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1050-ves;
	  }
	  if (lud==2) {
		 ves=rand()%750+550;
		 Timer3->Interval=1500-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1050+800;
		 Timer3->Interval=2000-ves;
	  }
	  price=ves/25;
	}
	if ((ra>44)&&(ra<=53)) {
	  Form2->Label2->Caption="Сазан";
	  if (lud==1) {
		 ves=rand()%600+200;
		 Timer3->Interval=1200-ves;
	  }
	  if (lud==2) {
		 ves=rand()%800+500;
		 Timer3->Interval=1600-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+900;
		 Timer3->Interval=1950-ves;
	  }
	  price=ves/23;
	}
	if ((ra>53)&&(ra<=61)) {
	  Form2->Label2->Caption="Лещ";
	  if (lud==1) {
		 ves=rand()%500+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%600+500;
		 Timer3->Interval=1350-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+700;
		 Timer3->Interval=1800-ves;
	  }
	  price=ves/23;
	}
	if ((ra>61)&&(ra<=68)) {
	  Form2->Label2->Caption="Карп";
	  if (lud==1) {
		 ves=rand()%500+200;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+400;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+800;
		 Timer3->Interval=1750-ves;
	  }
	  price=ves/25;
	}
	if ((ra>68)&&(ra<=74)) {
	  Form2->Label2->Caption="Хариус";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+250;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+300;
		 Timer3->Interval=1500-ves;
	  }
	  price=ves/25;
	}
	if ((ra>74)&&(ra<=80)) {
	  Form2->Label2->Caption="Жерех";
	  if (lud==1) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+300;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+500;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/24;
	}
	if ((ra>80)&&(ra<=85)) {
	  Form2->Label2->Caption="Усач";
	  if (lud==1) {
		 ves=rand()%250+50;
		 Timer3->Interval=700-ves;
	  }
	  if (lud==2) {
		 ves=rand()%350+100;
		 Timer3->Interval=800-ves;
	  }
	  if (lud==3) {
		 ves=rand()%300+200;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/22;
	}
	if ((ra>88)&&(ra<=91)) {
	  if (lud==1) {
		 Form2->Label2->Caption="Пескарь";
		 ves=rand()%40+10;
		 Timer3->Interval=900-ves;
		 price=ves/60+1;
	  }
	   if (lud==2) {
		 Form2->Label2->Caption="Пескарь";
		 ves=rand()%60+20;
		 Timer3->Interval=900-ves;
		 price=ves/60+1;
	  }
	  if (lud==3) {
		 int ralo=rand()%2;
		 if (ralo==0) {
		   Form2->Label2->Caption="Пескарь";
		   ves=rand()%50+50;
		   Timer3->Interval=1000-ves;
		   price=ves/60+1;
		 }
		 if (ralo==1) {
		   if (kol_open==1) {
			 kol_catch=1;
			 int x=rand()%10;
			 int y=rand()%10;
			 item=((x*x+20)/30)*4+(y*y+20)/30;
			 ves=0;
			 price=5;
			 Form2->Label2->Caption="Предмет коллекции";
			 Form2->Image1->Canvas->Draw(0, 0, white_fon);
			 Form2->Image1->Canvas->Draw(0, 0, items_pic[item]);
			 Timer3->Interval=500;
		   }
		   if (kol_open==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		   }
		 }
	  }
	}
	if ((ra>85)&&(ra<=88)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%450+350;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+500;
		 Timer3->Interval=1300-ves;
	  }
	  price=ves/30;
	}
   if ((ra>91)&&(ra<=93)) {
	  Form2->Label2->Caption="Плотва";
	  if (lud==1) {
		ves=rand()%300+100;
		Timer3->Interval=1050-ves;
	  }
	  if (lud==2) {
		ves=rand()%400+250;
		Timer3->Interval=1500-ves;
	  }
	  if (lud==3) {
		ves=rand()%400+300;
		Timer3->Interval=1000-ves;
	  }
	  price=ves/27;
	}
	if ((ra>93)&&(ra<=95)) {
	  Form2->Label2->Caption="Колбаски";
		ves=200;
		Timer3->Interval=600;
	  price=50;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
  case 3:
  {
   int ra=rand()%100+1;
	if (ra<=18) {
	  Form2->Label2->Caption="Судак";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%600+400;
		 Timer3->Interval=1150-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1050+500;
		 Timer3->Interval=1700-ves;
	  }
	  price=ves/26;
	}
	if ((ra>18)&&(ra<=34)) {
	  Form2->Label2->Caption="Щука";
	  if (lud==1) {
		 ves=rand()%500+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+500;
		 Timer3->Interval=1400-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+800;
		 Timer3->Interval=1800-ves;
	  }
	  price=ves/22;
	}
	if ((ra>90)&&(ra<=95)) {
	  Form2->Label2->Caption="Форель";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%800+500;
		 Timer3->Interval=1400-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1000+800;
		 Timer3->Interval=1900-ves;
	  }
	  price=ves/20;
	}
	if ((ra>34)&&(ra<=48)) {
	  Form2->Label2->Caption="Окунь";
	  if (lud==1) {
		 ves=rand()%400+150;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%500+350;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+500;
		 Timer3->Interval=1450-ves;
	  }
	  price=ves/30;
	}
	if ((ra>48)&&(ra<=59)) {
	  Form2->Label2->Caption="Угорь";
	  if (lud==1) {
		 ves=rand()%350+150;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%400+350;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+600;
		 Timer3->Interval=1400-ves;
	  }
	  price=ves/25;
	}
	if ((ra>59)&&(ra<=68)) {
	  Form2->Label2->Caption="Налим";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1050-ves;
	  }
	  if (lud==2) {
		 ves=rand()%750+550;
		 Timer3->Interval=1500-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1050+800;
		 Timer3->Interval=2000-ves;
	  }
	  price=ves/25;
	}
	if ((ra>68)&&(ra<=76)) {
	  if (lud==1) {
		Form2->Label2->Caption="Рыба сорвалась";
		ves=0;
		Timer3->Interval=1000;
		price=0;
	  }
	  if (lud==2) {
		 int hgyr=rand()%2;
		 if (hgyr==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		 } else {
			Form2->Label2->Caption="Сом";
			 ves=rand()%700+700;
			 Timer3->Interval=1500-ves;
			 price=ves/24;
		 }
	  }
	  if (lud==3) {
		 Form2->Label2->Caption="Сом";
			 ves=rand()%1000+1000;
			 Timer3->Interval=2200-ves;
			 price=ves/24;
	  }
	}
	if ((ra>76)&&(ra<=84)) {
	  Form2->Label2->Caption="Дунайский лосось";
	  if (lud==1) {
		 ves=rand()%600+400;
		 Timer3->Interval=1200-ves;
	  }
	  if (lud==2) {
		 ves=rand()%900+500;
		 Timer3->Interval=1600-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1000+900;
		 Timer3->Interval=2000-ves;
	  }
	  price=ves/18;
	}
	if ((ra>84)&&(ra<=90)) {
	  Form2->Label2->Caption="Сиг";
	  if (lud==1) {
		 ves=rand()%500+200;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%650+350;
		 Timer3->Interval=1200-ves;
	  }
	  if (lud==3) {
		 ves=rand()%850+550;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/25;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Interval+=bonus1;
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
  case 6:
  {
   int ra=rand()%100+1;
	if (ra<=22) {
	  Form2->Label2->Caption="Хариус";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=900-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+250;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%800+300;
		 Timer3->Interval=1500-ves;
	  }
	  price=ves/25;
	}
	if ((ra>22)&&(ra<=42)) {
	  Form2->Label2->Caption="Жерех";
	  if (lud==1) {
		 ves=rand()%400+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%700+300;
		 Timer3->Interval=1300-ves;
	  }
	  if (lud==3) {
		 ves=rand()%900+500;
		 Timer3->Interval=1600-ves;
	  }
	  price=ves/24;
	}
	if ((ra>42)&&(ra<=58)) {
	  if (lud==1) {
		Form2->Label2->Caption="Рыба сорвалась";
		ves=0;
		Timer3->Interval=1000;
		price=0;
	  }
	  if (lud==2) {
		 int hgyr=rand()%2;
		 if (hgyr==0) {
			 Form2->Label2->Caption="Рыба сорвалась";
			 ves=0;
			 Timer3->Interval=1000;
			 price=0;
		 } else {
			Form2->Label2->Caption="Сом";
			 ves=rand()%700+600;
			 Timer3->Interval=1400-ves;
			 price=ves/24;
		 }
	  }
	  if (lud==3) {
		 Form2->Label2->Caption="Сом";
			 ves=rand()%1000+1000;
			 Timer3->Interval=2200-ves;
			 price=ves/24;
	  }
	}
	if ((ra>58)&&(ra<=71)) {
	  Form2->Label2->Caption="Форель";
	  if (lud==1) {
		 ves=rand()%600+300;
		 Timer3->Interval=1000-ves;
	  }
	  if (lud==2) {
		 ves=rand()%800+500;
		 Timer3->Interval=1400-ves;
	  }
	  if (lud==3) {
		 ves=rand()%1000+800;
		 Timer3->Interval=1900-ves;
	  }
	  price=ves/20;
	}
	if ((ra>71)&&(ra<=80)) {
	  Form2->Label2->Caption="Флаг Баварии";
	  ves=100;
	  Timer3->Interval=900-ves;
	  price=15;
	}
	if ((ra>80)&&(ra<=88)) {
	  Form2->Label2->Caption="Усач";
	  if (lud==1) {
		 ves=rand()%250+50;
		 Timer3->Interval=700-ves;
	  }
	  if (lud==2) {
		 ves=rand()%350+100;
		 Timer3->Interval=800-ves;
	  }
	  if (lud==3) {
		 ves=rand()%300+200;
		 Timer3->Interval=1000-ves;
	  }
	  price=ves/22;
	}
	if ((ra>88)&&(ra<=95)) {
	  Form2->Label2->Caption="Голавль";
	  if (lud==1) {
		 ves=rand()%400+200;
		 Timer3->Interval=1000-ves;
	  }
	   if (lud==2) {
		 ves=rand()%450+350;
		 Timer3->Interval=1100-ves;
	  }
	  if (lud==3) {
		 ves=rand()%600+500;
		 Timer3->Interval=1300-ves;
	  }
	  price=ves/30;
	}
	if (ra>95) {
	  Form2->Label2->Caption="Рыба сорвалась";
	  ves=0;
	  Timer3->Interval=1000;
	  price=0;
	}
   Timer3->Interval+=bonus1;
   Timer3->Enabled=True;
   Form2->Label5->Caption=IntToStr(ves);
   Form2->Label6->Caption=IntToStr(price);
   break;
  }
 }
 if (kol_catch==0)
 Form2->Image1->Canvas->Draw(0, 0, mapa[AnsiString(Form2->Label2->Caption).c_str()]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
   Button1->Caption="Вытащить удочку";
   knop=1;
   kn[na]--;
   Image4->Visible=False;
   Timer3->Enabled=False;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
Form1->Enabled=False;
Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
d-=100;
benz+=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
 Form1->Enabled=False;
Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N19Click(TObject *Sender)
{
ofstream fout("save1.txt");
fout<<d<<endl;    //деньги
fout<<lm<<endl;    //уровень миссии
fout<<benz<<endl;     //бензин
fout<<zo<<endl;         //зона, где ты сейчас
for (int i=0; i < 7; i++)
fout<<kn[i]<<" ";         //кол-во всех типов наживок
fout<<endl;
fout<<lud<<endl;           //уровень удочки
fout<<record<<endl;           //рекорд по весу
for (int i=0; i < 20; i++)
fout<<mis[i]<<" ";             //доли выполнения всех миссий
fout<<endl;
fout<<ryby.size()<<endl;
for (int i=0; i < ryby.size(); i++) {
  fout<<ryby[i]<<endl;               //виды рыб, которые пойманы в миссии
}
for (int i=0; i < 9; i++) {
  fout<<vesdom[i]<<" ";
}     //веса рыб в картинах
fout<<endl;
for (int i=0; i < 9; i++) {
  fout<<kartiny[i]<<endl;      //рыбы в картинах
}
if (N2->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N3->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N4->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N5->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N6->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N7->Enabled==True) {
  fout<<1<<" ";
} else {                       //открытость или закрытость зон
  fout<<0<<" ";
}
if (N8->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N9->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
fout<<endl;
if (N11->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N12->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N13->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N14->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N15->Enabled==True) {
  fout<<1<<" ";
} else {                       //открытость или закрытость наживок
  fout<<0<<" ";
}
if (N16->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
if (N17->Enabled==True) {
  fout<<1<<" ";
} else {
  fout<<0<<" ";
}
fout<<endl;
if (Image5->Visible==True) {
  fout<<1<<endl;
} else {
  fout<<0<<endl;             //открытость машины и бензина
}
fout<<q<<endl;             //можно ли повесить рыбу?
for (int i=0; i < 6; i++) {
  fout<<uddraw[i]<<" ";         //прорисованность удочек  и открытость кнопок купить
}
fout<<endl;
for (int i=0; i < 6; i++) {
  fout<<udbuyd[i]<<" ";         //купленость удочек
}
fout<<endl;
if (Image6->Visible==True) {
  fout<<1<<endl;
} else {
  fout<<0<<endl;             //открытость турнира
}
fout<<t_level<<endl;
if (Button5->Visible==True) {
  fout<<1<<endl;
} else {
  fout<<0<<endl;             //открытость сетей
}
fout<<curset<<endl;
fout<<sets[0]<<" "<<sets[1]<<" "<<sets[2]<<endl;
fout<<kol_open<<endl;
for (int i=0; i < 16; i++) {
  fout<<Form13->find[i]<<" ";
}
fout<<endl;
for (int i=0; i < 4; i++) {
  fout<<Form13->knops[i]<<" ";
}
fout<<endl;
if (Form7->Image4->Visible==True) {
  fout<<1<<endl;
} else fout<<0<<endl;
for (int i=0; i < 5; i++) {
  fout<<eda[i]<<" ";
}
fout<<endl;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N20Click(TObject *Sender)
{
ifstream fin("save1.txt");
fin>>d;    //деньги
fin>>lm;   //уровень миссии
if (lm==1) {
  Form4->Label6->Caption="Отпустить 10 карасей";
  Form4->Label7->Caption="Поймать толстолобика весом более 600 грамм";
  Form4->Label3->Caption="10";
  Form4->Label2->Caption="1";
  Form4->Label2->Font->Size=20;
  Form4->Label5->Font->Size=20;
  Form4->Label3->Font->Size=20;
  Form4->Label4->Font->Size=20;
}
if (lm==2) {
  Form4->Label6->Caption="Поймать 10 краснопёрок";
  Form4->Label7->Caption="Продать 5 белых амуров";
  Form4->Label3->Caption="10";
  Form4->Label2->Caption="5";
  Form4->Label2->Font->Size=20;
  Form4->Label5->Font->Size=20;
  Form4->Label3->Font->Size=20;
  Form4->Label4->Font->Size=20;
}
if (lm==3) {
  Form4->Label6->Caption="Воспользоваться машиной 1 раз";
  Form4->Label7->Caption="Поймать 10 рыб, несуществующих в природе";
  Form4->Label3->Caption="1";
  Form4->Label2->Caption="10";
  Form4->Label2->Font->Size=20;
  Form4->Label5->Font->Size=20;
  Form4->Label3->Font->Size=20;
  Form4->Label4->Font->Size=20;
}
if (lm==4) {
  Form4->Label6->Caption="Наловить рыб 15-ти разных видов";
  Form4->Label7->Caption="Поймать 10 щук";
  Form4->Label3->Caption="15";
  Form4->Label2->Caption="10";
  Form4->Label2->Font->Size=20;
  Form4->Label5->Font->Size=20;
  Form4->Label3->Font->Size=20;
  Form4->Label4->Font->Size=20;
}
if (lm==5) {
  Form4->Label6->Caption="Установить новый рекорд как минимум 1150 грамм";
  Form4->Label7->Caption="Наловить форели общим весом 7000 грамм";
  Form4->Label2->Font->Size=10;
  Form4->Label5->Font->Size=10;
  Form4->Label3->Font->Size=10;
  Form4->Label4->Font->Size=10;
  Form4->Label3->Caption="1150";
  Form4->Label2->Caption="7000";
  Form4->Label4->Caption=IntToStr(record);
}
if (lm==6) {
  Form4->Label6->Caption="Поймать 10 рыб весом не более 60 грамм";
  Form4->Label7->Caption="Иметь 2 различных флага на стене";
  Form4->Label2->Font->Size=20;
  Form4->Label5->Font->Size=20;
  Form4->Label3->Font->Size=20;
  Form4->Label4->Font->Size=20;
  Form4->Label3->Caption="10";
  Form4->Label2->Caption="2";
}
if (lm==7) {
  Form4->Label6->Caption="Поймать 10 рыб весом не менее 1000 грамм";
  Form4->Label7->Caption="Поймать рыбу стоимостью ровно 36 рублей";
  Form4->Label2->Font->Size=20;
  Form4->Label5->Font->Size=20;
  Form4->Label3->Font->Size=20;
  Form4->Label4->Font->Size=20;
  Form4->Label3->Caption="10";
  Form4->Label2->Caption="1";
}
if (lm==8) {
  Form4->Label6->Caption="Поймать язя при помощи сети";
  Form4->Label7->Caption="Достичь пятого уровня турнира";
  Form4->Label2->Font->Size=20;
  Form4->Label5->Font->Size=20;
  Form4->Label3->Font->Size=20;
  Form4->Label4->Font->Size=20;
  Form4->Label3->Caption="1";
  Form4->Label2->Caption="5";
}
if (lm==9) {
  Form4->Label6->Caption="Поймать 20 рыб за один заброс сети";
  Form4->Label7->Caption="Поймать рыбу весом не менее 1500 грамм";
  Form4->Label2->Font->Size=20;
  Form4->Label5->Font->Size=20;
  Form4->Label3->Font->Size=20;
  Form4->Label4->Font->Size=20;
  Form4->Label3->Caption="1";
  Form4->Label2->Caption="1";
}
fin>>benz;     //бензин
fin>>zo;         //зона, где ты сейчас
if (zo==0) {
  Image1->Canvas->Draw(0,0,NU);
}
if (zo==1) {
  Image1->Canvas->Draw(0,0,PR);
}
if (zo==2) {
  Image1->Canvas->Draw(0,0,SW);
}
if (zo==3) {
  Image1->Canvas->Draw(0,0,KA);
}
if (zo==4) {
  Image1->Canvas->Draw(0,0,VO);
}
if (zo==5) {
  Image1->Canvas->Draw(0,0,NE);
}
if (zo==6) {
  Image1->Canvas->Draw(0,0,LO);
}
if (zo==7) {
  Image1->Canvas->Draw(0,0,LU);
}
for (int i=0; i < 7; i++) {
  fin>>kn[i];         //кол-во всех типов наживок
}
fin>>lud;           //уровень удочки
fin>>record;		 //рекорд по весу
if (lm==5) {
	  Form4->Label4->Caption=IntToStr(record);
	}
for (int i=0; i < 20; i++) {
  fin>>mis[i];             //доли выполнения всех миссий
}
int ryby_size;
fin>>ryby_size;
ryby.clear();
string nothing;
getline(fin, nothing);
for (int i=0; i < ryby_size; i++) {
  string fish;
  getline(fin, fish);
  ryby.push_back(fish);			   //виды рыб, которые пойманы в миссии
}
for (int i=0; i < 9; i++) {
  fin>>vesdom[i];
}  //веса рыб в картинах
Form3->Label1->Caption=vesdom[0];
if (vesdom[0]==-1) {
  Form3->Label1->Caption="";
}
Form3->Label2->Caption=vesdom[1];
if (vesdom[1]==-1) {
  Form3->Label2->Caption="";
}
Form3->Label3->Caption=vesdom[2];
if (vesdom[2]==-1) {
  Form3->Label3->Caption="";
}
Form3->Label4->Caption=vesdom[3];
if (vesdom[3]==-1) {
  Form3->Label4->Caption="";
}
Form3->Label5->Caption=vesdom[4];
if (vesdom[4]==-1) {
  Form3->Label5->Caption="";
}
Form3->Label6->Caption=vesdom[5];
if (vesdom[5]==-1) {
  Form3->Label6->Caption="";
}
Form3->Label7->Caption=vesdom[6];
if (vesdom[6]==-1) {
  Form3->Label7->Caption="";
}
Form3->Label8->Caption=vesdom[7];
if (vesdom[7]==-1) {
  Form3->Label8->Caption="";
}
Form3->Label9->Caption=vesdom[8];
if (vesdom[8]==-1) {
  Form3->Label9->Caption="";
}
string probel;
getline(fin,probel);
for (int i=0; i < 9; i++) {
  string fish;
  getline(fin, fish);
  kartiny[i]=fish;      //рыбы в картинах
}                        //                  +++++++++++++++++++++
Ry=mapa[kartiny[0]];
Form3->Image1->Canvas->StretchDraw(P1,Ry);
Ry=mapa[kartiny[1]];
Form3->Image1->Canvas->StretchDraw(P2,Ry);
Ry=mapa[kartiny[2]];
Form3->Image1->Canvas->StretchDraw(P3,Ry);
Ry=mapa[kartiny[3]];
Form3->Image1->Canvas->StretchDraw(P4,Ry);
Ry=mapa[kartiny[4]];
Form3->Image1->Canvas->StretchDraw(P5,Ry);
Ry=mapa[kartiny[5]];
Form3->Image1->Canvas->StretchDraw(P6,Ry);
Ry=mapa[kartiny[6]];
Form3->Image1->Canvas->StretchDraw(P7,Ry);
Ry=mapa[kartiny[7]];
Form3->Image1->Canvas->StretchDraw(P8,Ry);
Ry=mapa[kartiny[8]];
Form3->Image1->Canvas->StretchDraw(P9,Ry);
int poi;
fin>>poi;
if (poi==0) {
  N2->Enabled=False;
} else {
  N2->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N3->Enabled=False;
} else {
  N3->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N4->Enabled=False;
} else {
  N4->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N5->Enabled=False;
} else {
  N5->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N6->Enabled=False;
} else {
  N6->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N7->Enabled=False;
} else {
  N7->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N8->Enabled=False;
} else {
  N8->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N9->Enabled=False;
} else {
  N9->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N11->Enabled=False;
} else {
  N11->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N12->Enabled=False;
} else {
  N12->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N13->Enabled=False;
} else {
  N13->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N14->Enabled=False;
} else {
  N14->Enabled=True;
}

fin>>poi;
if (poi==0) {
  N15->Enabled=False;
} else {
  N15->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N16->Enabled=False;
} else {
  N16->Enabled=True;
}
fin>>poi;
if (poi==0) {
  N17->Enabled=False;
} else {
  N17->Enabled=True;
}
fin>>poi;
if (poi==0) {
  Image5->Visible=False;
  Label3->Visible=False;
  Button3->Visible=False;
} else {
  Label3->Visible=True;
  Button3->Visible=True;
  Image5->Visible=True;
}
fin>>q;             //можно ли повесить рыбу?
for (int i=0; i < 6; i++) {
  fin>>uddraw[i];         //прорисованность удочек  и открытость кнопок купить
}
for (int i=0; i < 6; i++) {
  fin>>udbuyd[i];         //купленость удочек
}
Form7->Image1->Canvas->Draw(0,0,kom);
if (udbuyd[1]==1) {
	Form7->Button3->Visible=True;
	Form7->Button2->Visible=False;
	Form7->Image1->Canvas->Draw(285,175,uda2);
  } else {
	if (uddraw[1]==1) {
	  Form7->Button2->Visible=True;
	} else {
	  Form7->Button3->Visible=False;
	  Form7->Button2->Visible=False;
	}
}
if (udbuyd[2]==1) {
	Form7->Button5->Visible=True;
	Form7->Button4->Visible=False;
	Form7->Image1->Canvas->Draw(395,175,uda3);
  } else {
	if (uddraw[2]==1) {
	  Form7->Button4->Visible=True;
	} else {
	  Form7->Button5->Visible=False;
	  Form7->Button4->Visible=False;
	}
}
if (udbuyd[3]==1) {
	Form7->Button7->Visible=True;
	Form7->Button6->Visible=False;
	Form7->Image1->Canvas->Draw(505,175,uda2);
  } else {
	if (uddraw[3]==1) {
	  Form7->Button6->Visible=True;
	} else {
	  Form7->Button7->Visible=False;
	  Form7->Button6->Visible=False;
	}
}
if (udbuyd[4]==1) {
	Form7->Button9->Visible=True;
	Form7->Button8->Visible=False;
	Form7->Image1->Canvas->Draw(615,175,uda2);
  } else {
	if (uddraw[4]==1) {
	  Form7->Button8->Visible=True;
	} else {
	  Form7->Button9->Visible=False;
	  Form7->Button8->Visible=False;
	}
}
if (udbuyd[5]==1) {
	Form7->Button11->Visible=True;
	Form7->Button10->Visible=False;
	Form7->Image1->Canvas->Draw(725,175,uda2);
  } else {
	if (uddraw[5]==1) {
	  Form7->Button10->Visible=True;
	} else {
	  Form7->Button11->Visible=False;
	  Form7->Button10->Visible=False;
	}
}
  fin>>poi;
if (poi==0) {
  Image6->Visible=False;
} else {
  Image6->Visible=True;
}
fin>>t_level;
if (lm==8) {
if (Form1->t_level>5) {
  Form4->Label5->Caption="5";
} else {
  Form4->Label5->Caption=IntToStr(Form1->t_level);
}
}
t_cond=0;
Timer4->Enabled=False;
Form9->Timer1->Enabled=False;
Form9->Label6->Visible=False;
Form9->Label7->Visible=False;
Form9->Button1->Visible=False;
Label4->Visible=False;
Label5->Visible=False;
Label6->Visible=False;
Image7->Visible=False;
Form2->Button5->Visible=False;
if (t_level==1) {
	Form8->Label1->Caption="1";
	Form8->Label2->Caption="Поймать рыбу как можно большего веса";
	Form8->Label3->Caption="5";
	Form8->Label4->Caption="100";
	Form8->Label5->Caption="500";
	Form8->Label6->Caption="10 минут";
}
if (t_level==2) {
	Form8->Label1->Caption="2";
	Form8->Label2->Caption="Наловить как можно больше плотвы (в штуках)";
	Form8->Label3->Caption="5";
	Form8->Label4->Caption="200";
	Form8->Label5->Caption="800";
	Form8->Label6->Caption="15 минут";
}
if (t_level==3) {
	Form8->Label1->Caption="3";
	Form8->Label2->Caption="Поймать ерша как можно большего веса";
	Form8->Label3->Caption="5";
	Form8->Label4->Caption="300";
	Form8->Label5->Caption="1000";
	Form8->Label6->Caption="15 минут";
}
if (t_level==4) {
	Form8->Label1->Caption="4";
	Form8->Label2->Caption="Наловить как можно больше судаков весом не менее 600 грамм";
	Form8->Label3->Caption="5";
	Form8->Label4->Caption="400";
	Form8->Label5->Caption="1200";
	Form8->Label6->Caption="20 минут";
}
if (t_level==5) {
	Form8->Label1->Caption="5";
	Form8->Label2->Caption="Поймать карпа как можно большего веса, но легче 1000 грамм";
	Form8->Label3->Caption="8";
	Form8->Label4->Caption="500";
	Form8->Label5->Caption="1500";
	Form8->Label6->Caption="15 минут";
}
 fin>>set_level;
 if (set_level==1) {
  Form7->Image3->Visible=True;
	Form1->Button5->Visible=True;
	Form8->Label7->Visible=True;
	knopset=0;
	rybyinset.clear();
 }
 if (set_level==0) {
   Form7->Image3->Visible=False;
	Form1->Button5->Visible=False;
	Form8->Label7->Visible=False;
	knopset=0;
	rybyinset.clear();
 }
fin>>curset;
fin>>sets[0]>>sets[1]>>sets[2];
fin>>kol_open;
if (kol_open==1) {
	Form3->Image3->Visible=True;
} else Form3->Image3->Visible=False;
	for (int i = 0; i < 16; i++) {
		fin>>Form13->find[i];
	}
	if (Form13->find[0]==1) {
	  Form13->Image2->Visible=True;
	} else Form13->Image2->Visible=False;
	if (Form13->find[1]==1) {
	  Form13->Image3->Visible=True;
	} else Form13->Image3->Visible=False;
	if (Form13->find[2]==1) {
	  Form13->Image4->Visible=True;
	} else Form13->Image4->Visible=False;
	if (Form13->find[3]==1) {
	  Form13->Image5->Visible=True;
	} else Form13->Image5->Visible=False;
	if (Form13->find[4]==1) {
	  Form13->Image6->Visible=True;
	} else Form13->Image6->Visible=False;
	if (Form13->find[5]==1) {
	  Form13->Image7->Visible=True;
	} else Form13->Image7->Visible=False;
	if (Form13->find[6]==1) {
	  Form13->Image8->Visible=True;
	} else Form13->Image8->Visible=False;
	if (Form13->find[7]==1) {
	  Form13->Image9->Visible=True;
	} else Form13->Image9->Visible=False;
	if (Form13->find[8]==1) {
	  Form13->Image10->Visible=True;
	} else Form13->Image10->Visible=False;
	if (Form13->find[9]==1) {
	  Form13->Image11->Visible=True;
	} else Form13->Image11->Visible=False;
	if (Form13->find[10]==1) {
	  Form13->Image12->Visible=True;
	} else Form13->Image12->Visible=False;
	if (Form13->find[11]==1) {
	  Form13->Image13->Visible=True;
	} else Form13->Image13->Visible=False;
	if (Form13->find[12]==1) {
	  Form13->Image14->Visible=True;
	} else Form13->Image14->Visible=False;
	if (Form13->find[13]==1) {
	  Form13->Image15->Visible=True;
	} else Form13->Image15->Visible=False;
	if (Form13->find[14]==1) {
	  Form13->Image16->Visible=True;
	} else Form13->Image16->Visible=False;
	if (Form13->find[15]==1) {
	  Form13->Image17->Visible=True;
	} else Form13->Image17->Visible=False;
	for (int i = 0; i < 4; i++) {
		fin>>Form13->knops[i];
	}
	if (Form13->knops[0]==1) {
		Form13->Button1->Visible=True;
	} else Form13->Button1->Visible=False;
	if (Form13->knops[1]==1) {
		Form13->Button2->Visible=True;
	} else Form13->Button2->Visible=False;
	if (Form13->knops[2]==1) {
		Form13->Button3->Visible=True;
	} else Form13->Button3->Visible=False;
	if (Form13->knops[3]==1) {
		Form13->Button4->Visible=True;
	} else Form13->Button4->Visible=False;
	if (Form13->knops[0]==2) {
		Form13->Image22->Visible=True;
	} else Form13->Image22->Visible=False;
	if (Form13->knops[1]==2) {
		Form13->Image23->Visible=True;
	} else Form13->Image23->Visible=False;
	if (Form13->knops[2]==2) {
		Form13->Image24->Visible=True;
	} else Form13->Image24->Visible=False;
	if (Form13->knops[3]==2) {
		Form13->Image25->Visible=True;
	} else Form13->Image25->Visible=False;
	fin>>poi;
	if (poi==1) {
		Form7->Image4->Visible=True;
	} else Form7->Image4->Visible=False;
	for (int i=0; i < 5; i++) {
		fin>>eda[i];
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer4Timer(TObject *Sender)
{
if (sec2>0) {
  sec2--;
} else if (sec1>0) {
		  sec2=9;
		  sec1--;
	   } else if (minut>0) {
				  minut--;
				  sec1=5;
				  sec2=9;
			  } else {
			  Timer4->Enabled=False;
			  Form2->Button5->Visible=False;
			  Form9->Timer1->Enabled=False;
			  Form9->Label6->Visible=True;
			  Form9->Label7->Visible=True;
			  Form9->Button1->Visible=True;
			  int place=1;
			  if (t_level<=4) {
				  for (int i = 0; i < 4; i++) {
					if (Form9->your < Form9->results[i]) {
					  place++;
					}
				  }
			  }
			  if (t_level==5) {
				  for (int i = 0; i < 7; i++) {
					if (Form9->your < Form9->results[i]) {
					  place++;
					}
				  }
			  }
			  Form9->Label7->Caption=IntToStr(place);
			  Label4->Visible=False;
			  Label5->Visible=False;
			  Label6->Visible=False;
			  Image7->Visible=False;
			  }
Label4->Caption=IntToStr(minut);
Label5->Caption=IntToStr(sec1);
Label6->Caption=IntToStr(sec2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image6Click(TObject *Sender)
{
 Form1->Enabled=False;
if (t_cond==1) {
  Form9->Show();
}
if (t_cond==0) {
  Form8->Show();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
  if (knopset==0) {
	Button5->Caption="Достать сеть";
	knopset=1;
	if (curset==0) {
	  Timer5->Interval=120000;
	  maxrybinset=5;
	}
	if (curset==1) {
	  Timer5->Interval=60000;
	  maxrybinset=10;
	}
	if (curset==2) {
	  Timer5->Interval=30000;
	  maxrybinset=20;
	}
	Timer5->Enabled=True;
	rybinset=0;
  } else {
   Timer5->Enabled=False;
   knopset=0;
   Button5->Caption="Закинуть сеть";
   if (brokeset==1) {
	 Form11->Label1->Caption="Сеть порвалась";
	 Form11->Button1->Caption="OK";
	 sets[curset]--;
   }
   if (brokeset==0) {
	 if ((lm==9)&&(mis[16]==0)&&(rybinset==20)) {
	   mis[16]++;
	 }
	 Form11->Label1->Caption="В сети "+IntToStr(rybinset)+" рыб";
	 Form11->Button1->Caption="OK";
	 if (rybinset>0) {
	   Form11->Button1->Caption="Посмотреть";
	 }
   }
   Form1->Enabled=False;
   Form11->Show();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer5Timer(TObject *Sender)
{
if (zo==6) {
  int ra=rand()%100+1;
  if (ra==1) {
	brokeset=1;
	Timer5->Enabled=False;
  }
  if ((ra>1)&&(ra<=25)) {
	rybyinset.push_back("Карп");
	int setves=rand()%700+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/25);
  }
  if ((ra>25)&&(ra<=45)) {
	rybyinset.push_back("Карась");
	int setves=rand()%500+200;
	vesinset.push_back(setves);
	priceinset.push_back(setves/30);
  }
  if ((ra>45)&&(ra<=62)) {
	rybyinset.push_back("Зеркальный карп");
	int setves=rand()%700+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/25);
  }
  if ((ra>62)&&(ra<=77)) {
	rybyinset.push_back("Плотва");
	int setves=rand()%400+200;
	vesinset.push_back(setves);
	priceinset.push_back(setves/27);
  }
  if ((ra>77)&&(ra<=90)) {
	rybyinset.push_back("Ёрш");
	int setves=rand()%200+50;
	vesinset.push_back(setves);
	priceinset.push_back(setves/20);
  }
  if ((ra>90)&&(ra<=94)) {
	rybyinset.push_back("Щука");
	int setves=rand()%700+400;
	vesinset.push_back(setves);
	priceinset.push_back(setves/22);
  }
  if ((ra>94)&&(ra<=97)) {
	rybyinset.push_back("Краснопёрка");
	int setves=rand()%200+50;
	vesinset.push_back(setves);
	priceinset.push_back(setves/24);
  }
  if (ra==98) {
	rybyinset.push_back("Толстолобик");
	int setves=rand()%900+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/23);
  }
  if (ra==99) {
	rybyinset.push_back("Белый амур");
	int setves=rand()%800+500;
	vesinset.push_back(setves);
	priceinset.push_back(setves/18);
  }
  if (ra==100) {
	rybyinset.push_back("Рыба белорус");
	int setves=rand()%400+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/25);
  }
  rybinset++;
  if (rybinset==maxrybinset) {
	Timer5->Enabled=False;
  }
}
if (zo==3) {
  int ra=rand()%100+1;
  if (ra==1) {
	brokeset=1;
	Timer5->Enabled=False;
  }
  if ((ra>1)&&(ra<=25)) {
	rybyinset.push_back("Голавль");
	int setves=rand()%500+200;
	vesinset.push_back(setves);
	priceinset.push_back(setves/30);
  }
  if ((ra>25)&&(ra<=45)) {
	rybyinset.push_back("Усач");
	int setves=rand()%200+100;
	vesinset.push_back(setves);
	priceinset.push_back(setves/22);
  }
  if ((ra>45)&&(ra<=60)) {
	rybyinset.push_back("Плотва");
	int setves=rand()%400+200;
	vesinset.push_back(setves);
	priceinset.push_back(setves/27);
  }
  if ((ra>60)&&(ra<=75)) {
	rybyinset.push_back("Судак");
	int setves=rand()%550+400;
	vesinset.push_back(setves);
	priceinset.push_back(setves/26);
  }
  if ((ra>75)&&(ra<=85)) {
	rybyinset.push_back("Щука");
	int setves=rand()%600+500;
	vesinset.push_back(setves);
	priceinset.push_back(setves/22);
  }
  if ((ra>85)&&(ra<=92)) {
	rybyinset.push_back("Окунь");
	int setves=rand()%500+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/30);
  }
  if ((ra>92)&&(ra<=97)) {
	rybyinset.push_back("Карась");
	int setves=rand()%350+250;
	vesinset.push_back(setves);
	priceinset.push_back(setves/30);
  }
  if (ra==98) {
	rybyinset.push_back("Рыба математик");
	int setves=rand()%600+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/25);
  }
  if (ra==99) {
	rybyinset.push_back("Рыба кавказец");
	int setves=rand()%600+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/25);
  }
  if (ra==100) {
	rybyinset.push_back("Форель");
	int setves=rand()%750+450;
	vesinset.push_back(setves);
	priceinset.push_back(setves/20);
  }
  rybinset++;
  if (rybinset==maxrybinset) {
	Timer5->Enabled=False;
  }
}
if (zo==5) {
  int ra=(rand()%10100)/100+1;
  if (ra==1) {
	brokeset=1;
	Timer5->Enabled=False;
  }
  if ((ra>1)&&(ra<=15)) {
	rybyinset.push_back("Густера");
	int setves=rand()%500+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/27);
  }
  if ((ra>15)&&(ra<=30)) {
	rybyinset.push_back("Ёрш");
	int setves=rand()%250+50;
	vesinset.push_back(setves);
	priceinset.push_back(setves/30);
  }
  if ((ra>30)&&(ra<=45)) {
	rybyinset.push_back("Окунь");
	int setves=rand()%600+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/30);
  }
  if ((ra>45)&&(ra<=55)) {
	rybyinset.push_back("Плотва");
	int setves=rand()%400+200;
	vesinset.push_back(setves);
	priceinset.push_back(setves/27);
  }
  if ((ra>55)&&(ra<=65)) {
	rybyinset.push_back("Уклейка");
	int setves=rand()%70+20;
	vesinset.push_back(setves);
	priceinset.push_back(setves/60+1);
  }
  if ((ra>65)&&(ra<=75)) {
	rybyinset.push_back("Лещ");
	int setves=rand()%700+400;
	vesinset.push_back(setves);
	priceinset.push_back(setves/23);
  }
  if ((ra>75)&&(ra<=85)) {
	rybyinset.push_back("Судак");
	int setves=rand()%450+500;
	vesinset.push_back(setves);
	priceinset.push_back(setves/26);
  }
  if ((ra>85)&&(ra<=91)) {
	rybyinset.push_back("Щука");
	int setves=rand()%650+500;
	vesinset.push_back(setves);
	priceinset.push_back(setves/22);
  }
  if ((ra>91)&&(ra<=94)) {
	rybyinset.push_back("Чехонь");
	int setves=rand()%350+200;
	vesinset.push_back(setves);
	priceinset.push_back(setves/34);
  }
  if ((ra>94)&&(ra<=96)) {
	rybyinset.push_back("Краснопёрка");
	int setves=rand()%200+50;
	vesinset.push_back(setves);
	priceinset.push_back(setves/24);
  }
  if (ra==97) {
	rybyinset.push_back("Язь");
	int setves=rand()%550+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/30);
  }
  if (ra==98) {
	rybyinset.push_back("Угорь");
	int setves=rand()%700+200;
	vesinset.push_back(setves);
	priceinset.push_back(setves/25);
  }
  if (ra==99) {
	rybyinset.push_back("Ладожский сиг");
	int setves=rand()%700+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/25);
  }
  if (ra==100) {
	rybyinset.push_back("Налим");
	int setves=rand()%850+400;
	vesinset.push_back(setves);
	priceinset.push_back(setves/25);
  }
  if (ra==101) {
	rybyinset.push_back("Рыба Петра Первого");
	int setves=rand()%450+300;
	vesinset.push_back(setves);
	priceinset.push_back(setves/25);
  }
  rybinset++;
  if (rybinset==maxrybinset) {
	Timer5->Enabled=False;
  }
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer6Timer(TObject *Sender)
{
Timer6->Enabled=False;
bonus1=0;
Form14->Button1->Enabled=True;
}
//---------------------------------------------------------------------------

