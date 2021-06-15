main()
{
    int a[10],i,sum=0;
    float avg;

    printf("Enter 10 Numbers\n\n");

    for(i=0;i<=9;i++)
       scanf("%d",&a[i]);

    for (i=0;i<=9;i++)                //to find sum for more than two numbers we use loop like this
        sum=sum+a[i];
    printf("Sum is %d\n\n",sum);

    avg=sum/10.0;
    printf("Average is %f\n\n",avg);

       getch();

}
