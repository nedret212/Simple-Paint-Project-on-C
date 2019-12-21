#include <iostream>
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

bool kalemaktif;
bool cizgiaktif;
bool ucgenaktif;
bool cemberaktif;
bool kareaktif;
bool temizleaktif;

void ekran();
void fare();
void kalem();
void cizgi();
void ucgen();
void cember();
void kare();
void temizle();

int main()
{

    ekran();
    while(1)
    {
    fare();

    if(kalemaktif==true)
        kalem();

    else if(cizgiaktif==true)
        cizgi();

    else if(ucgenaktif==true)
        ucgen();

    else if(cemberaktif==true)
        cember();

    else if(kareaktif==true)
        kare();

    else if(temizleaktif==true)
        temizle();
    }
    return 0;
}
void kalem()
{
    int x1,x2,y1,y2;

    if(ismouseclick(WM_LBUTTONDOWN))
    {
        moveto(mousex(),mousey());
        clearmouseclick(WM_LBUTTONDOWN);
        clearmouseclick(WM_LBUTTONUP);
        while(!ismouseclick(WM_LBUTTONUP))
        {
            if((mousex()>10&&mousex()<790)&&(mousey()>135&&mousey()<590)){
            lineto(mousex(),mousey());
            }
        }
    }

}
void kare()
{

    int x1,x2,y1,y2;

    if(ismouseclick(WM_LBUTTONDOWN))
    {
        x1=mousex();
        y1=mousey();

        clearmouseclick(WM_LBUTTONDOWN);
        clearmouseclick(WM_LBUTTONUP);

    }
    if(ismouseclick(WM_LBUTTONUP))
    {

        x2=mousex();
        y2=mousey();

        if((x1>10&&x1<790)&&(y1>135&&y1<590)&&(x2>10&&x2<790)&&(y2>135&&y2<590)){
        rectangle(x1,y1,x2,y2);
        }

        clearmouseclick(WM_LBUTTONDOWN);
        clearmouseclick(WM_LBUTTONUP);
    }
}
void cizgi()
{

    int x1,x2,y1,y2;

    if(ismouseclick(WM_LBUTTONDOWN))
    {
        x1=mousex();
        y1=mousey();

        clearmouseclick(WM_LBUTTONDOWN);
        clearmouseclick(WM_LBUTTONUP);

    }
    if(ismouseclick(WM_LBUTTONUP))
    {

        x2=mousex();
        y2=mousey();

        if((x1>10&&x1<790)&&(y1>135&&y1<590)&&(x2>10&&x2<790)&&(y2>135&&y2<590)){

        line(x1,y1,x2,y2);
        }

        clearmouseclick(WM_LBUTTONDOWN);
        clearmouseclick(WM_LBUTTONUP);
    }


}
void cember()
{
    int x1,x2,y1,y2,yaricap=0;

    if(ismouseclick(WM_LBUTTONDOWN))
    {
        x1=mousex();
        y1=mousey();

        clearmouseclick(WM_LBUTTONDOWN);
        clearmouseclick(WM_LBUTTONUP);

    }
    if(ismouseclick(WM_LBUTTONUP))
    {

        x2=mousex();
        y2=mousey();

        if(x1>x2&&y1>y2)
            yaricap=((x1-x2)+(y1-y2))/2;
        else if(x1>x2&&y2>y1)
            yaricap=((x1-x2)+(y2-y1))/2;
        if(x2>x1&&y1>y2)
            yaricap=((x2-x1)+(y1-y2))/2;
        else if(x2>x1&&y2>y1)
            yaricap=((x2-x1)+(y2-y1))/2;

        if((x1>10&&x1<790)&&(y1>135&&y1<590)&&(x2>10&&x2<790)&&(y2>135&&y2<590))
        {
            if(yaricap<300&&((x1>10&&x1<790)&&!(y1>0&&y1<275))&&(x2>10&&x2<790&&!(y2>0&&y2<275)))
            circle(x1,y1,yaricap);

        }

        clearmouseclick(WM_LBUTTONDOWN);
        clearmouseclick(WM_LBUTTONUP);
    }

}
void ucgen()
{
    int x1,x2,x3,y1,y2,y3,xuzunluk,yuzunluk;

        if(ismouseclick(WM_LBUTTONDOWN))
        {
            x1=mousex();
            y1=mousey();

            clearmouseclick(WM_LBUTTONDOWN);
            clearmouseclick(WM_LBUTTONUP);
        }
        if(ismouseclick(WM_LBUTTONUP))
    {

            x2=mousex();
            y2=mousey();

            xuzunluk=x2-x1;
            x3=x2-(xuzunluk*2);
            y3=y2;
            if(x1>x2&&y1>y2){

            }
            else if(x1>x2&&y2>y1){
                xuzunluk=x2-x1;
                x3=x2-(xuzunluk*2);
                y3=y2;
            }
            if(x2>x1&&y1>y2){
                xuzunluk=x2-x1;
                x3=x2-(xuzunluk*2);
                y3=y2;
            }
            else if(x2>x1&&y2>y1){
                xuzunluk=x2-x1;
                x3=x2-(xuzunluk*2);
                y3=y2;
            }

             if((x1>10&&x1<790)&&(y1>135&&y1<590)&&(x2>10&&x2<790)&&(y2>135&&y2<590)&&(x3>10&&x3<790)&&(y3>135&&y3<590)){
            line(x1,y1,x2,y2);
            line(x1,y1,x3,y3);
            line(x2,y2,x3,y3);
             }
            clearmouseclick(WM_LBUTTONDOWN);
            clearmouseclick(WM_LBUTTONUP);
    }
}
void temizle()
{

    int x1,x2,y1,y2;

    if(ismouseclick(WM_LBUTTONDOWN))
    {
        x1=mousex();
        y1=mousey();

        clearmouseclick(WM_LBUTTONDOWN);
        clearmouseclick(WM_LBUTTONUP);

    }
    if(ismouseclick(WM_LBUTTONUP))
    {

        x2=mousex();
        y2=mousey();

         if((x1>10&&x1<790)&&(y1>135&&y1<590)&&(x2>10&&x2<790)&&(y2>135&&y2<590)){
        bar(x1,y1,x2,y2);
         }
        clearmouseclick(WM_LBUTTONDOWN);
        clearmouseclick(WM_LBUTTONUP);


}
}
void ekran()
{
initwindow(800,600,"NedPaint");

setbkcolor(3);
int i,j;

///cizim alani
bar(10,135,790,590);
setcolor(BLACK);


///TOOLBAR
for(i=5;i<=125;i++)
{
for(j=0;j<=800;j++)
{
putpixel(j,i,8);
}
}

///dikey barlar
for(i=0;i<=125;i++)
{
for(j=0;j<=5;j++)
{
putpixel(j,i,0);
}
}
for(i=0;i<=125;i++)
{
for(j=105;j<=110;j++)
{
putpixel(j,i,0);
}
}
for(i=0;i<=125;i++)
{
for(j=210;j<=215;j++)
{
putpixel(j,i,0);
}
}
for(i=0;i<=125;i++)
{
for(j=315;j<=320;j++)
{
putpixel(j,i,0);
}
}
for(i=0;i<=125;i++)
{
for(j=420;j<=425;j++)
{
putpixel(j,i,0);
}
}
for(i=0;i<=125;i++)
{
for(j=525;j<=530;j++)
{
putpixel(j,i,0);
}
}
for(i=0;i<=125;i++)
{
for(j=630;j<=635;j++)
{
putpixel(j,i,0);
}
}
for(i=0;i<=125;i++)
{
for(j=795;j<=800;j++)
{
putpixel(j,i,0);
}
}




///RENKLER
for(i=25;i<=55;i++)
{
for(j=650;j<=680;j++)
{
putpixel(j,i,2);
}
}
for(i=25;i<=55;i++)
{
for(j=680;j<=710;j++)
{
putpixel(j,i,1);
}
}
for(i=25;i<=55;i++)
{
for(j=710;j<=740;j++)
{
putpixel(j,i,0);
}
}
for(i=25;i<=55;i++)
{
for(j=740;j<=770;j++)
{
putpixel(j,i,4);
}
}

///ust cizgi
for(i=0;i<=5;i++)
{
for(j=0;j<=800;j++)
{
putpixel(j,i,0);
}
}
///alt cizgi
for(i=125;i<=130;i++)
{
for(j=0;j<=800;j++)
{
putpixel(j,i,0);
}
}
///ara bar
for(i=72;i<=75;i++)
{
for(j=635;j<=800;j++)
{
putpixel(j,i,0);
}
}
/// ara dikey bar
for(i=75;i<=130;i++)
{
for(j=713;j<=717;j++)
{
putpixel(j,i,0);
}
}
///BASLIKLAR
outtextxy(35,50,"KALEM");
outtextxy(140,50,"CiZGi");
outtextxy(235,50,"CEMBER");
outtextxy(345,50,"UCGEN");
outtextxy(455,50,"KARE");
outtextxy(565,50,"SiLGi");
outtextxy(650,90,"KAYDET");
outtextxy(730,90,"YUKLE");


readimagefile("arkaplan.jpg",0,0,800,600);

//for(i=0;i<10000;i++)
readimagefile("d0.jpg",0,0,800,600);
//for(i=0;i<10000;i++)


}
void fare()
{


        if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>5&&mousex()<105)&&(mousey()>5&&mousey()<125)){
          kalemaktif=true;
          cizgiaktif=false;
          kareaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
          temizleaktif=false;
        }

        if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>110&&mousex()<210)&&(mousey()>5&&mousey()<125)){
          kalemaktif=false;
          cizgiaktif=true;
          kareaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
          temizleaktif=false;
        }

        if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>215&&mousex()<315)&&(mousey()>5&&mousey()<125)){
          kalemaktif=false;
          cizgiaktif=false;
          kareaktif=false;
          cemberaktif=true;
          ucgenaktif=false;
          temizleaktif=false;
        }

        if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>320&&mousex()<420)&&(mousey()>5&&mousey()<125)){
          ucgenaktif=true;
          kalemaktif=false;
          cizgiaktif=false;
          kareaktif=false;
          cemberaktif=false;
          temizleaktif=false;
        }

         if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>425&&mousex()<525)&&(mousey()>5&&mousey()<125)){
          kareaktif=true;
          kalemaktif=false;
          cizgiaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
          temizleaktif=false;
        }

        if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>530&&mousex()<630)&&(mousey()>5&&mousey()<125)){
          temizleaktif=true;
          kareaktif=false;
          kalemaktif=false;
          cizgiaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
        }

        if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>650&&mousex()<680)&&(mousey()>25&&mousey()<55)){ ///renk2
          kalemaktif=false;
          cizgiaktif=false;
          kareaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
          temizleaktif=false;
          setcolor(2);
        }

         if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>680&&mousex()<710)&&(mousey()>25&&mousey()<55)){ ///renk1
          kalemaktif=false;
          cizgiaktif=false;
          kareaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
          temizleaktif=false;
          setcolor(1);
         }

         if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>710&&mousex()<740)&&(mousey()>25&&mousey()<55)){ ///renk3
          kalemaktif=false;
          cizgiaktif=false;
          kareaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
          temizleaktif=false;
          setcolor(0);
         }

        if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>740&&mousex()<770)&&(mousey()>25&&mousey()<55)){ ///renk4
          kalemaktif=false;
          cizgiaktif=false;
          kareaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
          temizleaktif=false;
          setcolor(4);
        }

        if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>640&&mousex()<710)&&(mousey()>75&&mousey()<130)){ ///KAYDET

          writeimagefile(NULL,10,135,790,590);
          kalemaktif=false;
          cizgiaktif=false;
          kareaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
          temizleaktif=false;
        }

        if(ismouseclick(WM_LBUTTONDOWN)&&(mousex()>720&&mousex()<790)&&(mousey()>75&&mousey()<130)){ ///YUKLE

          readimagefile(NULL,10,135,790,590);
          clearmouseclick(WM_LBUTTONDOWN);
          clearmouseclick(WM_LBUTTONUP);

          kalemaktif=false;
          cizgiaktif=false;
          kareaktif=false;
          cemberaktif=false;
          ucgenaktif=false;
          temizleaktif=false;
        }

}

