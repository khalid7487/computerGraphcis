#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int W_xmax,W_ymax,W_xmin,W_ymin;
    int V_xmax,V_ymax,V_xmin,V_ymin;
    float sx,sy;
    int x,x1,x2,y,y1,y2;
    int  gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("Enter the coordinates for triangle");
    scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
    printf("Please enter Window coordinates ");
    scanf("%d%d%d%d",&W_xmax,&W_ymax,&W_xmin,&W_ymin);
    rectangle(W_xmin,W_ymin,W_xmax,W_ymax);
    outtextxy(W_xmin,W_ymin-10,"Window");
    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x,y);
    V_xmin=300;
    V_ymin=30;
    V_xmax=550;
    V_ymax=350;
    rectangle(V_xmin,V_ymin,V_xmax,V_ymax);
    outtextxy(V_xmin,V_ymin-10,"Viewport");
    sx=(float)(V_xmax-V_xmin) /(W_xmax - W_xmin);
    sy=(float)(V_ymax-V_ymin) /(W_ymax - W_ymin);
    x = V_xmin +(float)( (x-W_xmin)*sx) ;
    x1= V_xmin +(float)((x1-W_xmin)*sx);
    x2= V_xmin +(float)((x2-W_xmin)*sx) ;
    y = V_ymin +(float)(( y- W_ymin)*sy) ;
    y1= V_ymin +(float)(( y1-W_ymin)*sy) ;
    y2= V_ymin +(float)(( y2-W_ymin)*sy);
// drawing triangle
    line(x,y,x1,y1);
    line(x1,y1,x2,y2);
    line(x2,y2,x,y);
    getch();
    closegraph();
}
