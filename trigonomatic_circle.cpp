#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#define pi 3.14159

void pixel(int ,int ,int ,int );
int main()
{
        int r,t;
        float p,T,x,y;
        initwindow(500,500, "CSE-4742");
        printf("THIS IS OUR Trigonomatics circle PROGRAM: \n ");
        printf("Enter the radius ");
        scanf("%d",&r);
        int h=200, k=200;
        t= 0;
        p=(pi*45);
        for(t=0;t<=p;t++)
        {
            x=r*cos(t);
            y=r*sin(t);
            pixel(x,y,h,k);
        }

        getch();
        closegraph();
        return 0;
}
void pixel(int x,int y,int h,int k)
{
        putpixel(x+h, y+k, WHITE);
        putpixel(x+h, -y+k, WHITE);
        putpixel(-x+h, -y+k, WHITE);
        putpixel(-x+h, y+k, WHITE);
        putpixel(y+h, x+k, WHITE);
        putpixel(y+h, -x+k, WHITE);
        putpixel(-y+h, -x+k, WHITE);
        putpixel(-y+h, x+k, WHITE);
}



