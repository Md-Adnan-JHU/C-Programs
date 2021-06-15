#include<conio.h>
#include<stdio.h>                                  //return_function-name_takes
                                                //only have to mention in function declaration and function definition
int main()
{                                                  //#Takes Nothing
    int sum;                                        //#Returns Something
    sum=add();
    printf("Sum Is %d",sum);
    getch();
}

int add()
{
    int a,b,c;
    printf("Enter Two Numbers");
    scanf("%d %d",&a,&b);
    c=a+b;
    return(c);
}
