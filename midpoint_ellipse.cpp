#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
void pixel(int ,int ,int ,int );

int main()
{
    int x,y,aa,bb,aa2,bb2,p,fx,fy,a,b,h,k;
    initwindow(600,600, "CSE-4742");
    printf("Midpoint of an ellipse: \n ");
    printf("\n Enter the radius :");  /* get the radius and the center values*/
    scanf("%d %d",&h,&k);
    printf("\n Enter the center values :");
    scanf("%d %d",&a,&b);
    x=0,y=b   ;                     /* starting point */
    aa=a*a,bb=b*b,aa2=aa*2,bb2=bb*2;
    fx=0,fy=aa2*b;                   /* initial partial derivatives */
    p=bb-aa*b + 0.25*aa;           /*compute and round off p1 */

    while(fx<fy)
    {
       pixel(x,y,h,k);
       x++;
       fx=fx+bb2;
       if(p<0)
            p=p+fx+bb;
       else
        {
            y--;
            fy=fy-aa2;
            p=p+fx+bb-fy;
        }

    }
    pixel(x,y,h,k);
    p=bb*(x+0.5)*(x+0.5)+aa*(y-1)*(y-1)-aa*bb;
    while(y>0)
    {
        y--;
        fy=fy-aa2;
        if(p>=0)
            p=p-fy+aa;
        else
        {
            x++;
            fx=fx+bb2;
            p=p+fx-fy+aa;
        }
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
}
