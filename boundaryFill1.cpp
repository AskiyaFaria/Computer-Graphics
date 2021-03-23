#include <graphics.h>
#include <stdio.h>

// Boundary fill algorithm
void boundaryColor(int x, int y,int boundary_color, int fill_color)
{
        int color;
        color=getpixel(x, y);

        if((color != boundary_color) && (color != fill_color) )
        {
            putpixel(x,y,fill_color);
            delay(5);
            boundaryColor(x + 1, y, boundary_color,fill_color);
            boundaryColor(x - 1, y, boundary_color,fill_color);
            boundaryColor(x+1, y + 1, boundary_color,fill_color);
            boundaryColor(x-1, y - 1, boundary_color,fill_color);
            boundaryColor(x , y-1, boundary_color,fill_color);
            boundaryColor(x , y-1,boundary_color,fill_color);
            boundaryColor(x-1, y + 1, boundary_color,fill_color);
            boundaryColor(x+1, y - 1,boundary_color,fill_color);

        }

    }

int main()
{
    int x,y;
    initwindow(500,500, "CSE-4742");

    x = 280;
    y = 250;

    //circle(150,180,30);
    //line(100,200,150,150);
    //line(150,150,200,200);
    //line(200,200,100,200);
    rectangle(250,200,310,260);


    boundaryColor(x,y,WHITE,RED);


    closegraph();
    getch();
    return 0;
}
