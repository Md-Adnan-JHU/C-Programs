#include<stdio.h>
 int main()
{ int a,b,c,largest;
  printf("enter the three nos");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b)
    if(a>c)
        printf("the largest of the nos is %d",a);
    else
        printf("the largest of the nos is %d",c);
   else
    if(b>c)
        printf("the largest of the nos is %d",b);
     else
        printf("the largest of the nos is %d",c);
     return 0;
}
