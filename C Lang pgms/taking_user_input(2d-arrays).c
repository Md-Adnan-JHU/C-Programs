//QUESTION 1 : CREATE TWO ARRAYS. THE 1ST ARREY WILL HAVE 5 INTEGERS. THE SECOND ARRAY WILL TAKE A FEW NAMES FROM THE USER AS INPUT.

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   int a[5]={1,2,3,4,5};        //part1=array of five integers
   int i,b;
   char s[5][15];


   printf("Enter how many names u want to enter : ");
   scanf("%d",&b);
   printf("Enter %d names:\n",b);      //part2=taking string from user input
   for (i=0;i<=b;i++){
    gets(s[i]);                         //gets() is mostly used for char*;; bcoz s is stored as char so we vcannot use scanf()
   }

  printf("\n\nSTORED NAMES ARE:\n");
   for (i=0;i<=b;i++){
     puts(s[i]);}

   getch();
}


