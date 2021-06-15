/*Takes Nothing, Returns Nothing*/
#include<stdio.h>
#include<conio.h>
main()
{
 void add(void); /*function declaration*/
 add();
 getch();
}


void add()
{
 int x,y,sum;
 printf("Enter Two No's\n");
 scanf("%d %d",&x,&y);
 printf("The Sum Of Two Given No's is %d",sum,sum=x+y);
}





