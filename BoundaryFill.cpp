#include <graphics.h>
#include <stdio.h>

// flood fill algorithm
void fillColor(int x, int y, int fill_color, int b_color)
{
        int color;
        color=getpixel(x, y);

        if((color !=fill_color) && (color != b_color) )
        {
            putpixel(x,y,RED);
            delay(5);
            fillColor(x + 1, y, fill_color, b_color);
            fillColor(x - 1, y, fill_color, b_color);
            fillColor(x, y + 1, fill_color, b_color);
            fillColor(x, y - 1, fill_color, b_color);

        }

    }

int main()
{
    int x,y;
    initwindow(500,500, "CSE-4742");

    x = 280;
    y = 250;

    //circle(150,180,30);
    line(100,200,150,150);
    line(150,150,200,200);
    line(200,200,100,200);


    fillColor(x,y,RED,WHITE);


    closegraph();
    getch();
    return 0;
}
