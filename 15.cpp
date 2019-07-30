#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{


    int x,x1,x2,y,y1,y2,choice;
    int  gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("1.Translation\n");
    printf("2.Scaling\n");
    printf("3.Rotation\n");
    printf("Enter your choice :\n");
    while(choice!=EOF)
    {
        scanf("%d",&choice);
        if(choice==1)
        {
            int i;
            printf("1.Line\n2.Triangle\n3.Rectangle:");
            scanf("%d",&i);
            if(i==1)
            {
                printf("line");
            }
            else if(i==2)
            {
                printf("Triangle");
            }
            else if(i==3)
            {
                printf("Rectangle");
            }
            else
            {
                printf("invalid");

            }
        }
        else if(choice==2)
        {

            int i;
            printf("1.Line\n2.Triangle\n3.Rectangle:");
            scanf("%d",&i);
            if(i==1)
            {
                printf("line");
            }
            else if(i==2)
            {
                printf("Triangle");
            }
            else if(i==3)
            {
                printf("Rectangle");
            }
            else
            {
                printf("invalid");

            }
        }
        else if(choice==3)
        {

            int i;
            printf("1.Line\n2.Triangle\n3.Rectangle:");
            scanf("%d",&i);
            if(i==1)
            {
                printf("line");
            }
            else if(i==2)
            {
                printf("Triangle");
            }
            else if(i==3)
            {
                printf("Rectangle");
            }
            else
            {
                printf("invalid");

            }
        }
        else if(choice==4)
        {

            int i;
            printf("1.Line\n2.Triangle\n3.Rectangle:");
            scanf("%d",&i);
            if(i==1)
            {
                printf("line");
            }
            else if(i==2)
            {
                printf("Triangle");
            }
            else if(i==3)
            {
                printf("Rectangle");
            }
            else
            {
                printf("invalid");

            }
        }
        else
        {
            printf("Invalid choice!!");
        }

    }
    getch();
    closegraph();
}

