#include <graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,X,Y,x1,y1;
    initwindow(500,500, "CSE-4742");
    printf("Scan conversion of a point (second approaches): \n ");
    scanf("%f%f",&x,&y);
    x1=x + 0.5;
    y1=y + 0.5;
    X=floor(x1);
    Y=floor(y1);
    printf("The value of X=%f, The value of Y=%f\n",X,Y);
    putpixel(X,Y,GREEN);

    getch();
    closegraph();

    return 0;

}

