#include<graphics.h>
#include<conio.h>
#include<math.h>
void setPixel(int x, int y, int h, int k)
{
    putpixel(x+h, y+k, RED);
    putpixel(x+h, -y+k, RED);
    putpixel(-x+h, -y+k, RED);
    putpixel(-x+h, y+k, RED);
    putpixel(y+h, x+k, RED);
    putpixel(y+h, -x+k, RED);
    putpixel(-y+h, -x+k, RED);
    putpixel(-y+h, x+k, RED);
}
int main()
{
    int h,k,r;
    double x,y,x2;
    initwindow(500,500, "CSE-4742");
    printf("Scan converting a circle using polynomial equation \n ");
    printf("Enter center of circle h :");
    scanf("%d",&h);
    printf("Enter center of circle k:");
    scanf("%d",&k);
    printf("Enter radius of circle :");
    scanf("%d",&r);
    setbkcolor(WHITE);
    x=0;
    y=r;
    x2 = r/sqrt(2);
    while(x<=x2)
    {
        y = sqrt(r*r - x*x);
        setPixel(floor(x), floor(y), h,k);
        x += 1;
    }
    getch();
    closegraph();
    return 0;
}

