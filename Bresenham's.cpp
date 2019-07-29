#include<stdio.h>
#include<graphics.h>

void drawline(int x0,int y0,int x1,int y1)
{

    int dx,dy,p,x,y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while(y<y1)
    {
        if(p>=0)
        {
            putpixel(x,y,WHITE);
            y+=1;
            p+=2*dy-2*dx;
        }
        else
        {
            putpixel(x,y,WHITE);
            p+=2*dy;
        }
        x+=1;
    }
}
int main()
{
    int gdriver=DETECT, gmode, error, x0, y0, x1, y1;
    initgraph(&gdriver, &gmode, "c:\\TC\\BGI");
    printf("Enter co-ordinates of first point:  ");
    scanf("%d%d",&x0,&y0);
    printf("Enter co-ordinates of second point:  ");
    scanf("%d%d",&x1,&y1);
    drawline(x0,y0,x1,y1);
    getch();
    closegraph();
    return 0;
}
