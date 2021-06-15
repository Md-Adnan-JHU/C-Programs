#include<stdio.h>
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
    scanf("%s",&b.title);  //we can also use gets(); function i.e;gets(b.title); for char string or should use that function instead of scanf
    fflush(stdin);         //this funtion is used because we used scanf for char string and %s should be used at place of %c.
    scanf("%d",&b.bookId); // if we use gets() instead pf scanf then fflush wont be of any use.
    scanf("%f",&b.price);
    return(b);
};

void display(struct book b)
{
    printf("\n %s %d %f",b.title,b.bookId,b.price);

}

main()
{
    struct book b2;
    b2=input();
    display(b2);
    getch();
}
