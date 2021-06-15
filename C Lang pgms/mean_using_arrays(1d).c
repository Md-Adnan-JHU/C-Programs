//QUESTION 2 : PROGRAM TO CALCULATE MEAN OF 10 FLOATING POINT VALUES TAKEN FROM THE USER AS INPUT.

#include<stdio.h>
#include<conio.h>


void main()
{
    int s[10],n=10.0,i;
    float sum,mean;


   printf("Enter 10 numbers:\n");

   for (i=0;i<10;i++)
     {
     scanf("%d",&s[i]);  //here we cannot use gets(s) bcoz s is defined as an integer variable
     sum=sum+s[i];
     }

   mean=sum/n;
   printf("THE MEAN OF 10 NUMBERS IS :%f",mean);


   getch();
}
