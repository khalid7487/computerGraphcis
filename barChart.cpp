#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
  int gd,gm;
  gd=DETECT;
  initgraph(&gd, &gm,"C:\\TC\\bgi");
  circle(400,200,50);
  setcolor(WHITE);
  line(400,200,410,250);
  setfillstyle(1,GREEN);
  floodfill(410,210,WHITE);
  setcolor(WHITE);
  line(400,200,350,200);
  setfillstyle(1,RED);
  floodfill(402,155,WHITE);
  setcolor(WHITE);
  line(400,200,370,160);
  setfillstyle(1,YELLOW);
  floodfill(405,220,WHITE);


  getch();
  closegraph();
  return 0;
}
