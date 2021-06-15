main()
{
 int i,n,fact=1;
 printf("Enter Any No.\n");
 scanf("%d",&n);
 for (i=1;i<=n;i++)
        fact=fact*i;


 printf("\nFactorial value of %d=%d",n,fact);
 getch();



}
