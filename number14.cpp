#include<graphics.h>
#include<conio.h>
#include<stdio.h>

void drawline(int x1,int y1,int x2,int y2)
{
    int dx,dy,m,s;
    float xi,yi,x,y;
    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        s = abs(dx);
    else
        s = abs(dy);

    xi = dx / (float) s;
    yi = dy / (float) s;

    x = x1;
    y = y1;

    putpixel(x1, y1, WHITE);

    for (m = 0; m < s; m++)
    {
        x += xi;
        y += yi;
        putpixel(x, y, WHITE);
    }

}
void drawline1(int x1,int y1,int x2,int y2)
{
    int x,a, y,  Dx, Dy, twoDx, twoDy, twoDyDx, p, end;
    if(x1==x2)
    {
        x=x1;

        y=y1;

        while(y!=y2)

        {

            if((y2-y1)>0)

                ++y;

            else

                -y;

            putpixel(x,y,WHITE);

        }

        if(y1>=y2)

        {

            x=x2;

            y=y2;

            end=y2;

        }
    }
    if(x1<x2)

    {
        x=x1;

        y=y1;

        end=x2;

    }

    else

    {

        x=x2;

        y=y2;

        end=x1;

    }

    putpixel(x,y,WHITE);

    Dx=abs(x1-x2);

    Dy=abs(y1-y2);

    twoDy=2*Dy;

    twoDyDx=2*(Dy-Dx);

    p=2*Dy-Dx;

    while(x<end)

    {

        if(p<0)

        {

            x++;

            p+=twoDy;

        }

        else

        {

            x++;

            y++;

            p=twoDyDx;

        }

        putpixel(x,y,WHITE);

    }
}
void drawline2(int x1,int y1,int x2,int y2)
{
    int dx,dy,m,s;
    float xi,yi,x,y;
    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        s = abs(dx);
    else
        s = abs(dy);

    xi = dx / (float) s;
    yi = dy / (float) s;

    x = x1;
    y = y1;

    putpixel(x1, y1, WHITE);

    for (m = 0; m < s; m++)
    {
        x += xi;
        y += yi;
        putpixel(x, y, WHITE);
        delay(5);
    }


}
void drawline3(int x1,int y1,int x2,int y2)
{
    int x,a, y,  Dx, Dy, twoDx, twoDy, twoDyDx, p, end;
    if(x1==x2)
    {
        x=x1;

        y=y1;

        while(y!=y2)

        {

            if((y2-y1)>0)

                ++y;

            else

                -y;

            putpixel(x,y,WHITE);

        }

        if(y1>=y2)

        {

            x=x2;

            y=y2;

            end=y2;

        }
    }
    if(x1<x2)

    {
        x=x1;

        y=y1;

        end=x2;

    }

    else

    {

        x=x2;

        y=y2;

        end=x1;

    }

    putpixel(x,y,WHITE);

    Dx=abs(x1-x2);

    Dy=abs(y1-y2);

    twoDy=2*Dy;

    twoDyDx=2*(Dy-Dx);

    p=2*Dy-Dx;

    while(x<end)

    {

        if(p<0)

        {

            x++;

            p+=twoDy;

        }

        else

        {

            x++;

            y++;

            p=twoDyDx;

        }

        putpixel(x,y,WHITE);

    }

}
int main()
{
    int x,x1,x2,y,y1,y2,choice;
    int  gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");

    printf("1.Draw triangle with DDA Algorithm\n");
    printf("2.Draw Rectangle with DDA Algorithm\n");
    printf("3.Draw triangle with Bresenham's Algorithm\n");
    printf("4.Draw Rectangle with Bresenham's Algorithm\n");
    printf("Enter your choice :\n");

    while(choice!=EOF)
    {
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter triangle coordinates:");
            scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
            drawline(x,y,x1,y1);
            drawline(x1,y1,x2,y2);
            drawline(x2,y2,x,y);
        }
        else if(choice==2)
        {
            printf("Enter Rectangle coordinates:");
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            drawline2(x1,y1,x2,y1);
            drawline2(x1,y1,x1,y2);
            drawline2(x1,y2,x2,y2);
            drawline2(x2,y1,x2,y2);

        }
        else if(choice==3)
        {
            printf("Enter triangle coordinates:");
            scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
            drawline(x,y,x1,y1);
            drawline(x1,y1,x2,y2);
            drawline(x2,y2,x,y);

        }
        else if(choice==4)
        {
            printf("Enter Rectangle coordinates:");
            scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
            drawline1(x1,y1,x2,y1);
            drawline1(x1,y1,x1,y2);
            drawline1(x1,y2,x2,y2);
            drawline1(x2,y1,x2,y2);


        }
        else
        {
            printf("Invalid choice!!");
        }

    }
    getch();
}
