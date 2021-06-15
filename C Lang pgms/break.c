main()

{
    int i=1,x;
    printf("NOTE:You Have 5 Attempts Only\n\n");
    while(i<=5)
    {                                                       //while()
                                                            //{condition}   --
        printf("Enter The Passcode\n");                     //i++  --flow
        scanf("%d",&x);
        if(x<0)
        {
            break;
        }
        i++;
    }
    i==6?printf("Login Failed"):printf("Login Successfully");
    getch();
}

