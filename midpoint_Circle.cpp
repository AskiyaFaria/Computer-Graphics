#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

void pixel(int ,int ,int ,int );
int main()

{

        int xc,yc,r,x,y,p;

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
        p=1-r;

        do{
            pixel(xc,yc,x,y);

        if(p<0)

            {

               x++;

               p=p+2*x+1;//p=p+2x+1;

            }
        else

        {

            x++;

            y--;

            p=p+2*(x-y)+1;//p=p+2(x-y)+5;

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
