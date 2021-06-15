#include<stdio.h>
#include<stdlib.h>

struct node *start2=NULL;
struct node *start1=NULL;
struct node
{
    int info;
    struct node *link;
};
struct node *createlist(struct node *start);
struct node *concat(struct node *start1,struct node *start2);
struct node *addatbeg(struct node *start);
struct node *addatend(struct node *start);
struct node *createnode();
void display(struct node *start);

void main()
{
    start1=createlist(start1);
    start2=createlist(start2);
    printf("\nFirst list is  : ");
    display(start1);
    printf("\nSecond list is  : ");
    display(start2);
    start1=concat(start1, start2);
    printf("\nConcatenated list is  : ");
    display(start1);
    return 0;
}

struct node *createnode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
};

struct node *createlist(struct node *start)
{
    int n,i;
    printf("Enter number of Nodes : ");
    scanf("%d",&n);
    start=NULL;
    if (n==0)
        return start;
    start=addatbeg(start);
    for (i=2;i<=n;i++)
        start=addatend(start);
    return start;
};

struct node *addatbeg(struct node *start)
{
    struct node *temp,*t;
    int data;
    temp=createnode();
    printf("Enter element to be in inserted : ");
    scanf("%d",&temp->info);
    temp->link=NULL;
    start=temp;
    return start;
};

struct node *addatend(struct node *start)
{
    struct node *temp,*p;
    int data;
    temp=createnode();
    printf("Enter element to be in inserted : ");
    scanf("%d",&temp->info);
    p=start;
    while (p->link!=NULL)
      p=p->link;
    p->link=temp;
    temp->link=NULL;
        return start;
};

struct node *concat(struct node *start1,struct node *start2)
{
   struct node *p;
   if (start1==NULL)
   {
       start1=start2;
       return start1;
   }

   if(start2==NULL)
         return start1;

   p=start1;
   while (p->link!=NULL)
        p=p->link;
   p->link=start2;
   return start1;

};

void display(struct node *start)
{
    struct node *p;
    if (start==NULL)
    {
        printf("List is Empty");
        return;
    }
    p=start;
    while (p!=NULL)
    {
        printf("%d ",p->info);
        p=p->link;
    }
    printf("\n");
}

