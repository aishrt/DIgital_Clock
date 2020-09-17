#include<stdio.h>
#include<conio.h>
void main()
{
    system("color a");
    int i=0,h=0,m=0,s=0;
    printf("Enter the starting point of the time.\n");

    scanf("%d%d%d",&h,&m,&s);
start :
    for(h; h<24; h++)
    {
        for(m; m<60; m++)
        {
            for(s; s<60; s++)
            {
                system("cls");
                printf("\n\t\t--------------------");
                printf("\n\t\t| %d | %d | %d |    ",h,m,s);
                printf("\n\t\t--------------------");
                if(h>12)
                       printf("pm");
                else
                    printf("am");
                sleep(1);  //ye chlne se output 1 sec late ayegaa
                i++;
                if(i==86400)
                    goto end;
                else
                    continue;
            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
end :
    printf("\n 86400 time completed");
    getch();
}
