#include<stdio.h>
#include<graphics.h>
#include<math.h>
void rotation();
void scaling();
void translation();
void choose();
int main()
{
    int gd=DETECT,gm;
    double s,c,angle;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    choose();
    getch();
    closegraph();
}
void choose()
{
    int a;
    printf("Choose transformation type: \n1.Rotation\n2.Scaling\n3.Translate\n");
    scanf("%d",&a);
    if(a==1)
    {
        rotation();
    }
    else if(a==2)
    {
        scaling();
    }
    else if(a==3)
    {
        translation();
    }
}
void rotation()
{
    int rot,x1,y1,x2,y2,x3,y3,b;
    double s,c,angle;
    printf("Choose Rotation Object: \n1.Triangle\n2.Line\n3.Rectangle\n");
    scanf("%d",&rot);
    if(rot==1)
    {
        setcolor(RED);
        printf("Enter coordinates of triangle:");
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);

        cleardevice();
        line(x1,y1,x2,y2);
        line(x2,y2,x3,y3);
        line(x3,y3,x1,y1);
        printf("Enter rotation angle: ");
        scanf("%lf",&angle);
        c=cos(angle*M_PI/180);
        s=sin(angle*M_PI/180);
        x1=floor(x1*c+y1*s);
        y1=floor(-x1*s+y1*c);
        x2=floor(x2*c+y2*s);
        y2=floor(-x2*s+y2*c);
        x3=floor(x3*c+y3*s);
        y3=floor(-x3*s+y3*c);
        cleardevice();
        line(x1,y1,x2,y2);
        line(x2,y2,x3,y3);
        line(x3,y3,x1,y1);
        printf("press 1 to return to main menu\n");
        scanf("%d",&b);
        if(b==1)
        {
            cleardevice();
            choose();
        }
        else
        {
            exit(0);
        }
    }
    else if(rot==2)
    {
        int gd=0,gm,x1,y1,x2,y2;
        double s,c, angle;
        setcolor(RED);
        printf("Enter coordinates of line: ");
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        cleardevice();
        line(x1,y1,x2,y2);
        printf("Enter rotation angle: ");
        scanf("%lf", &angle);
        c = cos(angle *3.14/180);
        s = sin(angle *3.14/180);
        x1 = floor(x1 * c + y1 * s);
        y1 = floor(-x1 * s + y1 * c);
        x2 = floor(x2 * c + y2 * s);
        y2 = floor(-x2 * s + y2 * c);
        cleardevice();
        line(x1, y1,x2, y2);
        printf("press 1 to return to main menu\n");
        scanf("%d",&b);
        if(b==1)
        {
            cleardevice();
            choose();
        }
        else
        {
            exit(0);
        }
    }
    else if(rot==3)
    {
        int left,top,right,bottom;
        double angle;
        float rad,x1,y1,x2,y2,x3,y3,x4,y4;
        printf("\n Enter left coordinate of the rectangle= ");
        scanf("%d", &left);
        printf("\n Enter top coordinate of the rectangle = ");
        scanf("%d",&top);
        printf("\n Enter right coordinate of the rectangle = ");
        scanf("%d",&right);
        printf("\n Enter bottom coordinate of the rectangle = ");
        scanf("%d",&bottom);
        printf("\nRectangle before & after rotation");
        rectangle(left,top,right,bottom);
        printf("Enter rotation angle: ");
        scanf("%lf", &angle);

        rad=angle*(3.14/180);

        x1=left*cos(rad)-bottom*sin(rad);
        y1=left*sin(rad)+bottom*cos(rad);
        x2=right*cos(rad)-bottom*sin(rad);
        y2=right*sin(rad)+bottom*cos(rad);
        x3=left*cos(rad)-top*sin(rad);
        y3=left*sin(rad)+top*cos(rad);
        x4=right*cos(rad)-top*sin(rad);
        y4=right*sin(rad)+top*cos(rad);

        line(fabs(x1),fabs(y1),fabs(x2),fabs(y2));
        line(fabs(x1),fabs(y1),fabs(x3),fabs(y3));
        line(fabs(x3),fabs(y3),fabs(x4),fabs(y4));
        line(fabs(x2),fabs(y2),fabs(x4),fabs(y4));

        printf("press 1 to return to main menu\n");
        scanf("%d",&b);
        if(b==1)
        {
            cleardevice();
            choose();
        }
        else
        {
            exit(0);
        }
    }
}
void translation()
{
    int rot,b;
    printf("Choose Translation Object: \n1.Triangle\n2.Line\n3.Rectangle\n");
    scanf("%d",&rot);
    if(rot==1)
    {
        int x,y,x1,y1,x2,y2,tx,ty;
        printf("\n Enter first coordinate of the triangle= ");
        scanf("%d %d", &x,&y);
        printf("\n Enter second coordinate of the triangle = ");
        scanf("%d %d",&x1,&y1);
        printf("\n Enter third coordinate of the triangle = ");
        scanf("%d %d",&x2,&y2);
        printf("\nTRIANGLE before & after translation");
        line(x,y,x1,y1);
        line(x1,y1,x2,y2);
        line(x2,y2,x,y);
        printf("\n Now enter the Translation vector = ");
        scanf("%d %d",&tx,&ty);

        setcolor(RED);
        line(x+tx,y+ty,x1+tx,y1+ty);
        line(x1+tx,y1+ty,x2+tx,y2+ty);
        line(x2+tx,y2+ty,x+tx,y+ty);
        printf("press 1 to return to main menu\n");
        scanf("%d",&b);
        if(b==1)
        {
            cleardevice();
            choose();
        }
        else
        {
            exit(0);
        }
    }
    else if(rot==2)
    {
        int x,y,x1,y1,x2,y2,tx,ty;
        printf("\n Enter starting coordinate of the Line= ");
        scanf("%d %d", &x,&y);
        printf("\n Enter Ending coordinate of the Line = ");
        scanf("%d %d",&x1,&y1);
        printf("\nLine before & after translation");
        line(x,y,x1,y1);
        printf("\n Now enter the Translation vector = ");
        scanf("%d %d",&tx,&ty);
        setcolor(RED);
        line(x+tx,y+ty,x1+tx,y1+ty);
        printf("press 1 to return to main menu\n");
        scanf("%d",&b);
        if(b==1)
        {
            cleardevice();
            choose();
        }
        else
        {
            exit(0);
        }
    }
    else if(rot==3)
    {
        int l,t,r,b,tx,ty;

        printf("\n enter left coordinate of the rectangle= ");
        scanf("%d", &l);
        printf("\n Enter top coordinate of the rectangle = ");
        scanf("%d",&t);
        printf("\n Enter right coordinate of the rectangle = ");
        scanf("%d",&r);
        printf("\n Enter bottom coordinate of the rectangle = ");
        scanf("%d",&b);
        printf("\nRectangle before & after Translation");
        rectangle(l,t,r,b);
        printf("\n Now enter the translation vector = ");
        scanf("%d %d",&tx,&ty);
        setcolor(RED);
        rectangle(l+tx,t+ty,r+tx,b+ty);
        printf("press 1 to return to main menu\n");
        scanf("%d",&b);
        if(b==1)
        {
            cleardevice();
            choose();
        }
        else
        {
            exit(0);
        }
    }
}

void scaling()
{
    int rot,b;
    printf("Choose Scaling Object: \n1.Triangle\n2.Line\n3.Rectangle\n");
    scanf("%d",&rot);
    if(rot==1)
    {
        int x,y,x1,y1,x2,y2,tx,ty;
        printf("\nEnter first coordinate of the triangle= ");
        scanf("%d %d", &x,&y);
        printf("\n Enter second coordinate of the triangle = ");
        scanf("%d %d",&x1,&y1);
        printf("\n Enter third coordinate of the triangle = ");
        scanf("%d %d",&x2,&y2);
        printf("\nTRIANGLE before & after scaling");
        line(x,y,x1,y1);
        line(x1,y1,x2,y2);
        line(x2,y2,x,y);
        printf("\n Now enter the scaling vector = ");
        scanf("%d %d",&tx,&ty);

        setcolor(RED);
        line(x*tx,y*ty,x1*tx,y1*ty);
        line(x1*tx,y1*ty,x2*tx,y2*ty);
        line(x2*tx,y2*ty,x*tx,y*ty);
        printf("press 1 to return to main menu\n");
        scanf("%d",&b);
        if(b==1)
        {
            cleardevice();
            choose();
        }
        else
        {
            exit(0);
        }
    }
    else if(rot==2)
    {
        int x,y,x1,y1,x2,y2,tx,ty;
        printf("\n Enter starting coordinate of the Line= ");
        scanf("%d %d", &x,&y);
        printf("\n Enter Ending coordinate of the Line = ");
        scanf("%d %d",&x1,&y1);
        printf("\nLine before & after scaling");
        line(x,y,x1,y1);
        printf("\n Now enter the scaling vector = ");
        scanf("%d %d",&tx,&ty);
        setcolor(RED);
        line(x*tx,y*ty,x1*tx,y1*ty);
        printf("press 1 to return to main menu\n");
        scanf("%d",&b);
        if(b==1)
        {
            cleardevice();
            choose();
        }
        else
        {
            exit(0);
        }
    }
    else if(rot==3)
    {
        int l,t,r,b,tx,ty;
        printf("\n Enter left coordinate of the rectangle= ");
        scanf("%d", &l);
        printf("\n Enter top coordinate of the rectangle = ");
        scanf("%d",&t);
        printf("\n Enter right coordinate of the rectangle = ");
        scanf("%d",&r);
        printf("\n Enter bottom coordinate of the rectangle = ");
        scanf("%d",&b);
        printf("\nRectangle before & after scaling");
        rectangle(l,t,r,b);
        printf("\n Now enter the scaling vector = ");
        scanf("%d %d",&tx,&ty);
        setcolor(RED);
        rectangle(l*tx,t*ty,r*tx,b*ty);
        printf("press 1 to return to main menu\n");
        scanf("%d",&b);
        if(b==1)
        {
            cleardevice();
            choose();
        }
        else
        {
            exit(0);
        }
    }
}
