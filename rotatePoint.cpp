#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{

    int gd=DETECT,gm,x1,y1;
    double s,c,angle;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    //printf("%d%d",&x1,&y1);
    x1=350;
    y1=100;
    putpixel(x1, y1, YELLOW);
    printf("Enter rotation angle:");
    scanf("%lf",&angle);
    c=cos(angle*3.14/180);
    s=sin(angle*3.14/180);
    x1=floor(x1*c+y1*s);
    y1=floor(-x1*s+y1*c);
    printf("%d%d",x1,y1);
    putpixel(x1, y1, RED);
    getch();
}
