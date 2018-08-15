#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<time.h>

int main(){
    int i,f=90,l=48,j=1,r;
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    while(1){
    time_t rawtime;
    struct tm* currenttime;
    char a[100];

    rawtime=time(NULL);
    currenttime=localtime(&rawtime);
    strftime(a,100,"%I:%M:%S",currenttime);
    if(r='%s'){
    printf("\a");
    }
    setcolor(WHITE);
    settextstyle(3,HORIZ_DIR,10);
    outtextxy(100,100,a);

    strftime(a,100,"%p",currenttime);
    setcolor(WHITE);
    settextstyle(3,HORIZ_DIR,6);
    outtextxy(530,150,a);

    strftime(a,100,"%a, %d,%b,%y",currenttime);
    setcolor(WHITE);
    settextstyle(4,HORIZ_DIR,6);
    outtextxy(70,250,a);
    setcolor(11);
    settextstyle(4,HORIZ_DIR,4);
    outtextxy(200,18,"Digital clock");
    setcolor(11);
    settextstyle(4,HORIZ_DIR,1);
    outtextxy(250,430,"Copyright by:Form@n khan");
    j++;
    if(j%2==0){
    for(i=1;i<=10;i++){
    settextstyle(4,HORIZ_DIR,6);
    setcolor(YELLOW);
    outtextxy(f+=20,l,"-");
    setcolor(WHITE);
    outtextxy((f+=28),l,"-");

    }
    }
    else{
    for(i=1;i<=10;i++){
    settextstyle(4,HORIZ_DIR,6);
    setcolor(11);
    outtextxy(f-=20,l,"-");
    setcolor(WHITE);
    outtextxy((f-=28),l,"-");

    }
    }
    delay(1000);

    }


    getch();
    closegraph();
    return 0;
}
