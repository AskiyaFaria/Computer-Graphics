#include <graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,X,Y;
    initwindow(500,500, "CSE-4742");
    printf("Scan conversion of a point (First approaches): \n ");


    scanf("%f%f",&x,&y);
    X=floor(x);
    Y=floor(y);
    printf("The value of X=%f, The value of Y=%f\n",X,Y);
    putpixel(X,Y,GREEN);

    getch();
    closegraph();

    return 0;

}

