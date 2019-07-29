#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main(){
   int gd = DETECT,gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");

   setfillstyle(SOLID_FILL,GREEN);
   /* Draw rectangle on screen */
   rectangle(150, 50, 400, 150);

   floodfill(151,60,WHITE);
   /* Draw Bar on screen */
  // bar(150, 200, 400, 350);
   // line(400,100,600,100);
    //line(400,100,400,200);
    //line(400,200,600,200);
    //line(600,100,600,200);
    //floodfill(401,110,WHITE);
   getch();
   closegraph();
   return 0;
}
