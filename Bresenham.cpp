#include<stdio.h>
#include<graphics.h>
#include<math.h>
void bresenham_algorithm(int x1, int y1, int x2, int y2)
{
    int dx, dy, p, x, y;
    dx=x2-x1;
    dy=y2-y1;
    //starting point
    x=x1;
    y=y2;
    //decision variable
    p=2*dy-dx;
    while(x<x2)
    {
        if(p>=0)
        {
            putpixel(x,y,WHITE);
            y=y+1;
            p=p+2*dy-2*dx;//if p>=0 then, pk+1=pk+2dy -2dx;
        }
        else
        {
            putpixel(x,y,WHITE);
            p=p+2*dy;//if p>=0 then, pk+1=pk+2dy -2dx;
        }
        x=x+1;
        }
}
int main()
{
    int x1, y1, x2, y2;
    initwindow(500,500, "CSE-4742");
    printf("Enter X-axis coordinate of the First point:\t");
    scanf("%d", &x1);
    printf("Enter Y-axis coordinate of the First point:\t");
    scanf("%d", &y1);
    printf("Enter X-axis coordinate of the End point:\t");
    scanf("%d", &x2);
    printf("Enter Y-axis coordinate of the End point:\t");
    scanf("%d", &y2);
    bresenham_algorithm(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}
