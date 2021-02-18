#include<graphics.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
void pixel(float,float,float,float);

int main()
{
    float h,k,x,y,a,b,l;
    initwindow(500,500, "CSE-4742");
    printf("Scan converting a ellipse using polynomial equation \n ");
    printf("Enter center of ellipse h :");
    scanf("%f",&h);
    printf("Enter center of ellipse k:");
    scanf("%f",&k);
    printf("Enter the major axis a:");
    scanf("%f",&a);
    printf("Enter the minor axis b:");
    scanf("%f",&b);
    x=0;
    pixel(h,k,x,y);
    while(x<=a)
    {
        x=x+1;
        y=b*sqrt(1-((x*x))/(a*a));
        pixel(h,k,x,y);
    }
    getch();
    closegraph();
}

void pixel(float h,float k,float x,float y)
{
            putpixel(x+h,y+k, YELLOW);
            putpixel(x+h,-y+k, YELLOW);
            putpixel(-x+h,-y+k, YELLOW);
            putpixel(-x+h,y+k, YELLOW);
}

