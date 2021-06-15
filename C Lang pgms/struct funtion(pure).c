
struct book
{
    char title[20];
    int bookId;
    float price;
};

struct book input()
{
   struct book b;
    printf("Enter The Title,Book Id and Price of the book");
    gets(b.title);   // we can see that no fflush has used here bcos we applied gets() function here.
    scanf("%d",&b.bookId);
    scanf("%f",&b.price);
    return(b);
};

void display(struct book b)
{
    printf("\n %s %d %f",b.title,b.bookId,b.price);    //we have to use %s instead of %c for char string, otherwise it wont work.

}

main()
{
    struct book b2;
    b2=input();
    display(b2);
    getch();
}
