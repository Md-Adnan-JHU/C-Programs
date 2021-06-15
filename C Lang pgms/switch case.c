//CALCULATOR
#include<conio.h>
#include<stdio.h>

main()
{
    int choice;
    while(1)
     {
        printf("1.ADDITION");
        printf("\n2.ODD-EVEN");
        printf("\n3.FIRST-N NATURAL NUMBERS");
        printf("\n4.EXIT");
        printf("\nENTER YOUR CHOICE : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : add();
                     break;
            // case x : subtract();
                    //  break;
            // case y : multiply();
                    //  break;
            // case z : divide();
                    //  break;

            case 2 : oddeven();
                     break;
            case 3 : naturals();
                     break;
            case 4 : exit(0);
            default : printf("INVALID CHOICE");
                      break;
        }
     }

    getch();

}

add()
{
    int a,b,sum;
    printf("Enter The Numbers You Want To Add\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum is %d\n",sum);

}

oddeven()
{
    int a;
    printf("Enter The Number\n");
    scanf("%d",&a);
    if (a%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
}

naturals()
{
    int a,b;
    printf("Enter The Numbers\n");
    scanf("%d",&a);
    for (b=1;b<a;b++)
    {
        printf("Natural Numbers Are : %d\n",b);
    }


}








