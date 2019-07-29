#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int gd=DETECT,gm,x,y,x_mid,y_mid,radius,p;
    initgraph(&gd,&gm,"c:\\TC\\BGI");
    printf("Enter the coordinates=");
    scanf("%d%d",&x_mid,&y_mid);
    printf("\n Enter the radius=");
    scanf("%d",&radius);
    x=0;
    y=radius;
    p=1-radius;
    while(y>x)
    {
        putpixel(x_mid+x,y_mid+y,WHITE);
        putpixel(x_mid+y,y_mid+x,WHITE);
        putpixel(x_mid-y,y_mid+x,WHITE);
        putpixel(x_mid-x,y_mid+y,WHITE);
        putpixel(x_mid-x,y_mid-y,WHITE);
        putpixel(x_mid-y,y_mid-x,WHITE);
        putpixel(x_mid+y,y_mid-x,WHITE);
        putpixel(x_mid+x,y_mid-y,WHITE);
        if(p<0){
            p+=(2*x)+1;
        }else{
         y=y-1;
         p+=(2*x)-(2*y)+1;
        }
        x=x+1;
    }
    getch();
}
