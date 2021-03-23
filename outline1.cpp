#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    setbkcolor(9);

    line(120,100,120,170);
    line(128,100,128,170);
    arc(143,100,0,180,23);
    arc(143,100,10,180,15);
    line(158,100,158,170);
    line(165,100,165,170);
    arc(143,170,180,0,23);
    arc(143,170,180,0,15);

    getch();
}
