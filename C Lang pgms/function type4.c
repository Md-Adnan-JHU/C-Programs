/*Takes Something, Returns Something*/
#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
    int a,b,sum;
    printf("Enter Two No's");
    scanf("%d %d",&a,&b);

    sum=add(a,b);
    printf("The Sum Is %d",sum);
    getch();
}

int add(int x, int y)
{
    int c;
    c=x+y;
    return(c);

}

