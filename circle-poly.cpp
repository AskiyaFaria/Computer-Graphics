#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void pixel(int ,int ,int ,int );
main()
{
        int x1,x2,r,X,Y;
        float x,y,p;
        initwindow(500,500, "CSE-4742");
        printf("Scan converting a circle using polynomial equation \n ");
        printf("Enter center of circle x1 :");

        scanf("%d",&x1);
        printf("Enter center of circle y1:");

        scanf("%d",&y1);

        printf("Enter radius of circle :");

        scanf("%d",&r);
        x=0;
        y=r;
        p = r/sqrt(2);
        while(x<=p)
        {
            y = sqrt(r*r - x*x);
            X=floor(x);
            Y=floor(y);
            pixel(X, Y, x1,x2);
            x++;
        }
        getch();
        closegraph();
        return 0;
}
void pixel(int X, int Y,int x1, int y1)
{
    putpixel(X+x1,Y+y1,YELLOW);
    putpixel(X-x1,Y+y1,YELLOW);
    putpixel(X+x1,Y-y1,YELLOW);
    putpixel(X-x1,Y-y1,YELLOW);
    putpixel(X+y1,Y+x1,YELLOW);
    putpixel(X-y1,Y+x1,YELLOW);
    putpixel(X+y1,Y-x1,YELLOW);
    putpixel(X-y1,Y-x1,YELLOW);
}



