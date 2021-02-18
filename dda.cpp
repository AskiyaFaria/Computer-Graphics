#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define round(a)int(a+0.5)

void dda_line (int x1,int y1,int x2,int y2)
{
    float dx,dy,m,x,y;
    dx=float(x2-x1);
    dy=float(y2-y1);
    m=dy/dx;


    if(m<=1)
    {
        x=x1;
        y=float(y1);
        for(x=x1 ; x<x2 ; x++)
        {
            putpixel(int(x),round(y),WHITE);
            y=y+m;
        }
    }
    else
    {
        x=float(x1);
        y=y1;
        for(y=y1 ; y<y2 ; x++)
        {
            putpixel(int(x),round(y),WHITE);
            x=x+(1/m);
        }
    }
}

int main()
{
    int i,x1,x2,y1,y2;
    initwindow(500,500, "CSE-4742");
    printf("Enter first end point");
    scanf("%d %d",&x1,&y1);
    printf("Enter last end point");
    scanf("%d %d",&x2,&y2);
    dda_line(x1,y1,x2,y2);

    getch();
    closegraph();
}
