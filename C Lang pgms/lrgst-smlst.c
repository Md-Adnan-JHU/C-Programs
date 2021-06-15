#include<math.h>
#include<stdio.h>

main()
{
  int a[50],i,n,smlst,lrgst;
  printf("Enter Number Of Elements: ");
  scanf("%d",&n);
  printf("\nEnter Numbers: ");
  for (i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      smlst=lrgst=a[0];
  }
  for (i=1;i<n;i++)
  {
      if(a[i]>lrgst)
      lrgst=a[i];

      if(a[i]<smlst)
        smlst=a[i];
  }
   printf("\nLargest Number is %d",lrgst);
   printf("\nSmallest Number is %d",smlst);
   getch();
}
