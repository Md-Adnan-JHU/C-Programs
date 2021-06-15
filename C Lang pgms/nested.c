#include<stdio.h>
 main()
{
    char i,j,character;
    printf("enter the char");
    scanf("%c",&character);
    for(i=0;i<5;++i)
       for(j=0;j<=i;++j)
       printf("the char is %c",character);
       getch();
}
