#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void pixel(int ,int ,int ,int );
int main()

{

        int xc,yc,r,x,y,d;

        initwindow(500,500, "CSE-4742");
        printf("mid point circle: \n ");

        printf("Enter center of circle xc :");

        scanf("%d",&xc);
        printf("Enter center of circle yc :");

        scanf("%d",&yc);

        printf("Enter radius of circle :");

        scanf("%d",&r);

        x=0;

        y=r;
        //decision prameter
        d=3-(2*r);

        do{
            pixel(xc,yc,x,y);

        if(d<0)

            {

               x++;

               d=d+4*x+6;

            }
        else

        {

            x++;

            y--;

            d=d+4*(x-y)+10;

        }

        }while(x<=y);


    getch();
    closegraph();
    return 0;

}
void pixel(int x, int y,int x1, int y1)
{
    putpixel(x+x1,y+y1,YELLOW);
    putpixel(x-x1,y+y1,YELLOW);
    putpixel(x+x1,y-y1,YELLOW);
    putpixel(x-x1,y-y1,YELLOW);
    putpixel(x+y1,y+x1,YELLOW);
    putpixel(x-y1,y+x1,YELLOW);
    putpixel(x+y1,y-x1,YELLOW);
    putpixel(x-y1,y-x1,YELLOW);
}
