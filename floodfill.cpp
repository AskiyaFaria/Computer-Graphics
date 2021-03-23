#include <graphics.h>
#include <stdio.h>

// flood fill algorithm
void fillColor(int x, int y, int fill_color, int surface_color)
{
        int color;
        color=getpixel(x, y);

        if((color == surface_color) && (color != fill_color) )
        {
            putpixel(x,y,RED);
            delay(5);
            fillColor(x + 1, y, fill_color, surface_color);
            fillColor(x - 1, y, fill_color, surface_color);
            fillColor(x, y + 1, fill_color, surface_color);
            fillColor(x, y - 1, fill_color, surface_color);

        }

    }

int main()
{
    int x,y;
    initwindow(500,500, "CSE-4742");

    x = 150;
    y = 180;

    line(100,200,150,150);
    line(150,150,200,200);
    line(200,200,100,200);

    fillColor(x,y,GREEN,BLACK);


    closegraph();
    getch();
    return 0;
}
