#include<stdio.h>
int main()
{ char operator;
   double first,second;
   printf("enter an operator(+,-,*,/):");
   scanf("%c",&operator);
   printf("enter the two operands:");
   scanf("%lf %lf",&first,&second);
   switch(operator)
   {

    case '+':
          printf("%.1lf+%.1lf= %.1lf",first,second,first+second);
         break;
     case '-':
          printf("%.1lf-%.1lf= %.1lf",first,second,first-second);
          break;
      case '*':
           printf("%.1lf*%.1lf= %.1lf",first,second,first*second);
          break;
       case '/':
          printf("%.1lf/%.1lf= %.1lf",first,second,first/second);



   }
     return 0;
}
