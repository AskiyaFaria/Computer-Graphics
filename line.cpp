#include <graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,X1,Y1,x2,y2,X2,Y2,X,Y,m,b,i,a,c;
    initwindow(500,500, "CSE-4742");
    printf("Scan conversion of a line using direct line equation: \n ");
    //STEP 1:
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    X1=floor(x1);
    Y1=floor(y1);
    X2=floor(x2);
    Y2=floor(y2);
    printf("The value of X1=%f\n The value of Y1=%f\n The value of X2=%f \n The value of Y2=%f",X1,Y1,X2,Y2);

    //STEP 2:
    a=Y2-Y1;
    c=X2-X1;
    m=a/c;
    printf("\n\nThe value of m=%f",m);
    b=Y1-(m*X1); //y=mx+b;
    printf("\nThe value of b=%f",b);

    //STEP 3:
    m=abs(m);
    if(m<1 || m==1)
    {
        for(i=X1+1; i<X2; i++)
        {
            Y=(m*i)+b;
            putpixel(Y,i,GREEN);
        }

    }
    else
    //STEP 4:
    {
        for(i=Y1+1; i<Y2; i++)
        {
            X=(i-b)/m;
            putpixel(X,i,RED);
        }
    }
    getch();
    closegraph();

    return 0;

}
