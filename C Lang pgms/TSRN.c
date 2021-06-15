#include<conio.h>
#include<stdio.h>                                  //return_function-name_takes
                                                  //only have to mention in function declaration and function definition
void main()
{
    int a,b;

    void add(int,int);

    printf("Enter Two Numbers");
    scanf("%d %d",&a,&b);

    add(a,b);
    getch();
}

void add(int a, int b)
{
    int c;
    c=a+b;
    printf("Sum Is %d",c);
}
