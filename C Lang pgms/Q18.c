main()
{
    int x,y,z;

    printf("ENTER THE ADJACENT SIDES OF THE TRIANGLE TO KNOW ITS TYPE : ");
    scanf("%d%d%d",&x,&y,&z);

     if (x*x==y*y+z*z || y*y==x*x+z*z || x*x+y*y==z*z)
       printf("THE TRIANGLE IS RIGHT ANGLED TRIANGLE");

     else if (x==y && y==z && z==x)
        printf("THE TRIANGLE IS  SCALENE TRIANGLE");

     else if (x!=y && y!=z && z!=x)
        printf("THE TRIANGLE IS  ISOSCELES TRIANGLE");

     else
        printf("THE TRIANGLE IS  EQUILATERAL TRIANGLE");


    getch();



}
