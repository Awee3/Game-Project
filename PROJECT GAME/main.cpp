#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <mmsystem.h>

void jet(int x,int y,float s);
void bullet(int xb,int yb,float s);
void warShip(int xw,int yw,float s);
void intro();
void pembatas();
void play();
void tutor();
void credit();
void mainMenu();
void countdown();

DWORD maxX = GetSystemMetrics(SM_CXSCREEN);
DWORD maxY = GetSystemMetrics(SM_CYSCREEN);

int main()
{
    int ch;
    initwindow(1920,1020);
    cleardevice();
    settextjustify(1,1);
    settextstyle(3,0,6);
    outtextxy(900,500,"Press Any Key to Continue");
    if(getch()){
        ch = 1;
        cleardevice();
    }
    if (ch == 1){
         intro();
    }
    settextstyle(3,0,6);
    outtextxy(900,500,"WELCOME TO AIRWALKER");
    delay(3000);
    mainMenu();
}
void jet(int x,int y,float s)
{
    line(0*s+x, 0*s+y, 5*s+x,-2*s+y);
    line(5*s+x,-2*s+y, 2*s+x , -25*s+y);
    line(2*s+x,-25*s+y,13*s+x,-25*s+y);
    line(13*s+x,-25*s+y,22.5*s+x,-9*s+y);
    line(22.5*s+x,-9*s+y,58*s+x,-12*s+y);
    line(58*s+x,-12*s+y,59.5*s+x,-26*s+y);
    line(59.5*s+x,-26*s+y,38*s+x,-61*s+y);
    line(38*s+x,-61*s+y,60*s+x,-61*s+y);
    line(60*s+x,-61*s+y,95*s+x,-12*s+y);
    line(95*s+x,-12*s+y,129*s+x,-9*s+y);
    line(129*s+x,-9*s+y,141*s+x,0*s+y);

    line(0*s+x, 0*s+y, 5*s+x,2*s+y);
    line(5*s+x,2*s+y, 2*s+x , 25*s+y);
    line(2*s+x,25*s+y,13*s+x,25*s+y);
    line(13*s+x,25*s+y,22.5*s+x,9*s+y);
    line(22.5*s+x,9*s+y,58*s+x,12*s+y);
    line(58*s+x,12*s+y,59.5*s+x,26*s+y);
    line(59.5*s+x,26*s+y,38*s+x,61*s+y);
    line(38*s+x,61*s+y,60*s+x,61*s+y);
    line(60*s+x,61*s+y,95*s+x,12*s+y);
    line(95*s+x,12*s+y,129*s+x,9*s+y);
    line(129*s+x,9*s+y,141*s+x,0*s+y);
}
void bullet(int xb,int yb,float s)
{
    setcolor(1);
    line(143*s+xb,0*s+yb,151*s+xb,0*s+yb);
}
void warShip(int xw,int yw,float s)
{
    line(0*s+xw,0*s+yw,3*s+xw,1.5*s+yw);
    line(3*s+xw,1.5*s+yw,7*s+xw,2*s+yw);
    line(7*s+xw,2*s+yw,11*s+xw,8*s+yw);
    line(11*s+xw,8*s+yw,14*s+xw,8*s+yw);
    line(14*s+xw,8*s+yw,12*s+xw,2*s+yw);
    line(12*s+xw,2*s+yw,15*s+xw,4*s+yw);
    line(15*s+xw,4*s+yw,16*s+xw,3*s+yw);
    line(16*s+xw,3*s+yw,14*s+xw,1*s+yw);
    line(14*s+xw,1*s+yw,14*s+xw,0*s+yw);
    line(8*s+xw,4*s+yw,6*s+xw,4*s+yw);
    line(6*s+xw,4*s+yw,6*s+xw,4.5*s+yw);
    line(6*s+xw,4.5*s+yw,8.5*s+xw,4.5*s+yw);

    line(0*s+xw,0*s+yw,3*s+xw,-1.5*s+yw);
    line(3*s+xw,-1.5*s+yw,7*s+xw,-2*s+yw);
    line(7*s+xw,-2*s+yw,11*s+xw,-8*s+yw);
    line(11*s+xw,-8*s+yw,14*s+xw,-8*s+yw);
    line(14*s+xw,-8*s+yw,12*s+xw,-2*s+yw);
    line(12*s+xw,-2*s+yw,15*s+xw,-4*s+yw);
    line(15*s+xw,-4*s+yw,16*s+xw,-3*s+yw);
    line(16*s+xw,-3*s+yw,14*s+xw,-1*s+yw);
    line(14*s+xw,-1*s+yw,14*s+xw,0*s+yw);
    line(8*s+xw,-4*s+yw,6*s+xw,-4*s+yw);
    line(6*s+xw,-4*s+yw,6*s+xw,-4.5*s+yw);
    line(6*s+xw,-4.5*s+yw,8.5*s+xw,-4.5*s+yw);
}
void intro()
{
    int x = 0,y = 500;
    PlaySound(TEXT("jet.wav"),NULL,SND_ASYNC);
    do{
    cleardevice();
    jet(x,y,2);
    x = x + 8;
    if (x == maxX){
        cleardevice();
    }
    delay(1);
    }
    while(x != maxX);
}
void pembatas()
{
    line(0,95,maxX,100);
    line(0,960,maxX,950);
}
void play()
{
    int x = 200,y = 400;
    int xb = 300,yb = 400;
    int xw[10],yw[10],v[10],upper1 = 1300,lower1 = 1700,upper2 = 850 ,lower2 = 170;
    int peluru,enemy,hp = 3,score = 0,page = 0;
    char nilai[100],darah[100],finalScore[100];

    for (int i = 0;i<5;i++){
       xw[i]= (rand()%(upper1 - lower1 + 1))+lower1;
       yw[i]= (rand()%(upper2 - lower2 +1))+lower2;
        v[i]= rand()% 5 + 1;
    }
    for(int i=0;i<5;i++){
        for (int j = 0; j<5;j++){
            if(yw[i]== yw[j]){
                yw[i] = yw[i]-70;
            }
        }
    }
    countdown();
    while(1){
        cleardevice();
        sprintf(nilai,"%d",score);
        settextstyle(3,3,3);
        outtextxy(200,50,"SCORE");
        outtextxy(250,50,nilai);
        sprintf(darah,"%d",hp);
        settextstyle(3,3,3);
        outtextxy(200,80,"HP");
        outtextxy(250,80,darah);
        sprintf(finalScore,"%d",score);
        pembatas();
        //readimagefile("background.jpg",0,0,1920,1020);
        jet(x,y,1.2);
        if (GetAsyncKeyState('S')||GetAsyncKeyState('s')){
            y = y + 10;
        }
        else if (GetAsyncKeyState('W')||GetAsyncKeyState('w')){
            y = y - 10;
        }
        else if (GetAsyncKeyState('D')||GetAsyncKeyState('d')){
            x = x + 10;
        }
        else if (GetAsyncKeyState('A')||GetAsyncKeyState('a')){
            x = x - 10;
        }
        if (GetAsyncKeyState('L') || GetAsyncKeyState('l')){
            PlaySound(TEXT("lasershot.wav"),NULL,SND_ASYNC);
            peluru = 1;
            xb = x;
            yb = y;
        }
        if (peluru == 1){
            bullet(xb,yb,2);
            setcolor(15);
            xb = xb + 70;
        }
        if (xb == maxX){
            peluru = 0;
        }
        if(y <= 180){
            y = 180;
        }
        if(y >= 850){
            y = 850;
        }
        if(x <= 50){
            x = 50;
        }
        if(x >= 700){
            x = 700;
        }
        for (int i = 0;i < 5;i++){
        xw[i] = xw[i] - v[i];
        warShip(xw[i],yw[i],7);
        }
        for(int i = 0;i < 5;i++){
            if(xw[i] <= 0){
                xw[i]= 1920;
            }
            if(xb > xw[i] && yb >= yw[i] - 70 && yb <= yw[i] + 70){
                PlaySound(TEXT("hit.wav"),NULL,SND_ASYNC);
                xw[i] = 1920;
                yw[i]= (rand()%(upper2 - lower2 +1)) + lower2;
                xb = -100000;
                score = score +1;
            }
            if(x > xw[i] && y >= yw[i]- 70 && y <= yw[i]+ 70){
                PlaySound(TEXT("hitjet.wav"),NULL,SND_ASYNC);
                hp--;
                xw[i] = 1920;
            }
        }
        if(hp == 0){
            PlaySound(TEXT("gameover.wav"),NULL,SND_ASYNC);
            cleardevice();
            break;
        }
        delay(6);
    }
    while(1){
    settextjustify(1,2);
    settextstyle(4,0,7);
    outtextxy(950,400,"GAME OVER");
    outtextxy(950,600,"You killed");
    outtextxy(1250,600,finalScore);
    delay(5000);
    cleardevice();
    settextstyle(3,0,6);
    outtextxy(950,500,"Do you want to play again ? (Y/N)");
    if (GetAsyncKeyState('Y')||GetAsyncKeyState('y')){
            play();
    }
     if (GetAsyncKeyState('N')||GetAsyncKeyState('n')){
            break;
        }
    }
    mainMenu();
}
void tutor()
{
    int x = 70,y = 100;
    int peluru,xb = 1100,yb = 250,xt = 1100,yt = 250;
    char nilai[100],darah[100];
    int hp = 3,score = 0;
    while(-1){
    cleardevice();
    settextstyle(3,0,3);
    line(0,500,maxX,500);
    line(960,0,960,maxY);
    outtextxy(450,450,"Use WASD to move the Airwalker");
    jet(x,y,1);
    if (GetAsyncKeyState('S')||GetAsyncKeyState('s')){
            y = y + 10;
        }
        else if (GetAsyncKeyState('W')||GetAsyncKeyState('w')){
            y = y - 10;
        }
        else if (GetAsyncKeyState('D')||GetAsyncKeyState('d')){
            x = x + 10;
        }
        else if (GetAsyncKeyState('A')||GetAsyncKeyState('a')){
            x = x - 10;
        }
        if(y <= 100){
            y = 100;
        }
        if(y >= 350){
            y = 350;
        }
        if(x <= 50){
            x = 50;
        }
        if(x >= 800){
            x = 800;
        }
    outtextxy(1400,450,"Use L to Shoot projectile");
    jet(1200,250,1);
    if (GetAsyncKeyState('L') || GetAsyncKeyState('l')){
            PlaySound(TEXT("lasershot.wav"),NULL,SND_ASYNC);
            peluru = 1;
            xb = xt;
            yb = yt;
        }
        if (peluru == 1){
            bullet(xb,yb,1);
            setcolor(15);
            xb = xb + 30;
        }
        if (xb == 2000){
            xb = -100000;
        }
    outtextxy(450,1000,"If you hit the enemies, your score will increase");
    outtextxy(1400,1000,"If you crash the enemies, your HP will decrease");
    sprintf(nilai,"%d",score);
    settextstyle(3,0,6);
    outtextxy(300,800,"SCORE");
    outtextxy(500,800,nilai);
    sprintf(darah,"%d",hp);
    settextstyle(3,0,6);
    outtextxy(1200,800,"HP");
    outtextxy(1300,800,darah);
    delay(5);
    if(GetAsyncKeyState(VK_ESCAPE)){
        break;
    }
    }
    mainMenu();
}
void credit()
{
    cleardevice();
    settextstyle(3,0,5);
    settextjustify(1,1);
    outtextxy(950,250,"MADE BY : ");
    outtextxy(950,400,"AHMAD WILDAN SYAHPUTRA");
    outtextxy(950,500,"5024221064");
    outtextxy(950,600,"TEKNIK KOMPUTER");
    outtextxy(950,700,"FAKULTAS TEKNOLOGI ELEKTRO DAN INFORMATIKA CERDAS");
    outtextxy(950,800,"INSTITUT TEKNOLOGI SEPULUH NOPEMBER");
    if(GetAsyncKeyState(VK_ESCAPE)){
        mainMenu();
    }
}
void mainMenu()
{
    int xm,ym;
    POINT cursorPosition;
    cleardevice();
    settextstyle(10,0,9);
    settextjustify(1,1);
    outtextxy(900,200,"AIRWALKER THE GAME");
    settextstyle(3,0,6);
    settextjustify(1,1);
    outtextxy(900,400,"PLAY");
    outtextxy(900,500,"TUTORIAL");
    outtextxy(900,600,"CREDIT");
    outtextxy(900,700,"EXIT");
    while(-1){
    GetCursorPos(&cursorPosition);
    xm = cursorPosition.x;
    ym = cursorPosition.y;
    if((xm >= 900 && ym >= 400) && (xm <=1000 && ym <= 450)&&(GetAsyncKeyState(VK_LBUTTON))){
        play();
    }
    if((xm >= 900 && ym >= 500) && (xm <=1000 && ym <= 550)&&(GetAsyncKeyState(VK_LBUTTON))){
        cleardevice();
        tutor();
    }
    if((xm >= 900 && ym >= 600) && (xm <=1000 && ym <= 650)&&(GetAsyncKeyState(VK_LBUTTON))){
        credit();
    }
    if((xm >= 900 && ym >= 700) && (xm <=1000 && ym <= 750)&&(GetAsyncKeyState(VK_LBUTTON))){
        break;
    }
}
}
void countdown()
{
    cleardevice();
    PlaySound(TEXT("countdown.wav"),NULL,SND_ASYNC);
    settextstyle(1,0,6);
    outtextxy(900,500,"3");
    delay(1000);
    cleardevice();
    outtextxy(900,500,"2");
    delay(1000);
    cleardevice();
    outtextxy(900,500,"1");
    delay(1000);
    cleardevice();
    outtextxy(900,500,"GO!");
    delay(500);
    cleardevice();
}

