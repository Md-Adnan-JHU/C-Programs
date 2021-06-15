#include<conio.h>
#include<stdio.h>                                  //return_function-name_takes
                                                  //only have to mention in function declaration and function definition
 main()
{
    int a,b,sum;
    int add(int,int);

    printf("Enter Two Numbers");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("sum is %d",sum);
    getch();
}

int add(int a, int b)
{
    int c;
    c=a+b;
    return(c);
}

