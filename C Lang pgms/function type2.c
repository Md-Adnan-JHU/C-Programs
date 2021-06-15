/*Takes Something, Returns Nothing*/
#include<stdio.h>
#include<conio.h>
void add(int,int);  /*Global Declaration*/
void main()
{
    int x,y;
    printf("Enter Any Two No's");
    scanf("%d %d",&x,&y);

    add(x,y);   /*Function call <no need to add void>*/
    getch();
}

void add(int a,int b)
{
 int c;
 c=a+b;
 printf("The Sum Of Given No's is %d",c);
}
