#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int gd=DETECT, gm,i;
    float x,y,dx,dy,steps;
    int x0,x1,y0,y1;
    initgraph(&gd,&gm,"c:\\TC\\BGI");
    x0=100,y0=200,x1=500,y1=300;
   // scanf("%d%d%d%d",&x0,&y0,&x1,&y1);
    dx=(float)(x1-x0);
    dy=(float)(y1-y0);
    if(dx>=dy)
    {
        steps=dx;
    }
    else
    {
        steps=dy;
    }
    dx=dx/steps;
    dy=dy/steps;
    x=x0;
    y=y0;
    for(i=1;i<=steps;i++)
    {
        putpixel(x,y,RED);
        x+=dx;
        y+=dy;
    }
    getch();
    closegraph();
}

