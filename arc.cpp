#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{
        int x1,y1,r,SA,EA;
        initwindow(500,500, "CSE-4742");
        printf("Enter center of circle x1 :");
        scanf("%d",&x1);
        printf("Enter center of circle y1:");
        scanf("%d",&y1);
        printf("Enter starting angle of a circle SA:");
        scanf("%d",&SA);
        printf("Enter starting angle of a circle EA:");
        scanf("%d",&EA);
        printf("Enter radius of circle :");
        scanf("%d",&r);

        arc(x1,y1,SA,EA,r);
        getch();
        closegraph();
        return 0;
}

