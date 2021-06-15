#include <stdio.h>
#include <conio.h>
main()
{
    int str[]={1,5,4,2,3},i,num,count=0;
    printf("ENTER THE NUMBER YOU WANT TO FIND FROM THE LIST\n");
    scanf("%d",&num);
    for (i=0;i<5;i++)
    {
        if(str[i]==num)
            {
              printf("THE INDEX OF %d IS %d",num,i+1);
              count=1;
            }
    }
    if (count==0)
    {
        printf("NUMBER NOT FOUND");
    }
    getch();
}
