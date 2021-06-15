/*Takes Nothing, Returns Something*/
/*add is returning something to main*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int sum;
    int add(void);
    sum=add();
    printf("The Sum Is %d",sum);
    getch();
}

int add()
{
    int x,y,z;
    printf("Enter Any Two No's\n");
    scanf("%d %d",&x,&y);

    z=x+y;
    return(z);

}
