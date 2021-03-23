#include <graphics.h>
#include <conio.h>

main()
{
   int gd = DETECT, gm, x = 2, y = 15, font = 0;

   initgraph(&gd,&gm,"C:\\TC\\BGI");

   for (font = 0; font <=1; font++)
   {
      settextstyle(font, HORIZ_DIR, 10);
      outtextxy(x, y, "A");
      y = y+ 15;
    }

   getch();
   closegraph();
   return 0;
}
