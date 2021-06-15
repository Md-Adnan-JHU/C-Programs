#include<stdio.h>
struct node                                        //node=DataType//
{
    int info;                                      //info=variable of node data type//
    struct node *prev;
    struct node *next;                             //link=pointer of node data type//
};

struct node *START=NULL;                            //START=pointer of node data type//

struct node* createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));   //assigning the address to n returned by malloc//
    return(n);
}

void insertNode()
{
    struct node *temp, *t;
    temp=createNode();
    printf("Enter a number ");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(START==NULL)
    {
        START=temp;
        START->prev=NULL;
        START->next=NULL;
        printf("Successfully inserted a node to the empty list\n\n");
    }
    else                                       //insertion at end//
      {
        t=START;
        while(t->next!=NULL)
        {                  //t->link= jis node ko t point krta h , uska pointer h link//
          t=t->next;
        }                         // t me link ki value//
        temp->prev=t;
        t->next=temp;
        temp->next=NULL;
        printf("Successfully inserted a node to the list\n\n");                        //t->link m temp ki value//
      }
}
void insertAsFirstNode()
{
   struct node *p;
   p=createNode();
   p->prev=NULL;
   printf("Enter Value ");
   scanf("%d",&p->info);
   if (START==NULL)
   {
       START=p;
       printf("Successfully inserted a node to the empty list\n\n");
   }
   else
   {
       START->prev=p;
       p->next=START;
       START=p;
       printf("Successfully inserted First node to the list\n\n");
   }


}

void insertAsMiddleNode()
{
   struct node *p;
   struct node *t;
   struct node *nw;
   int i,x;
   nw=createNode();
   if (START==NULL)
   {
       printf("List Is Already Empty\n");
   }
   else
   {
       t=START;
       p=START;
       printf("Enter Node Number ");
       scanf("%d",&x);
       printf("Enter Value ");
       scanf("%d",&nw->info);
       for (i=2;i<=x-1;i++)
       {
           p=p->next;
            if(p==NULL)
                break;
       }
       for (i=2;i<=x;i++)
       {
           t=t->next;
           if(t==NULL)
                break;
       }
        nw->prev=p;
        nw->next=t;
        p->next=nw;
        t->prev=nw;
        printf("Node successfully added\n\n");

   }
}

void insertAsLastNode()
{
   struct node *p;
   struct node *t;
   p=createNode();
   p->next=NULL;
   if (START==NULL)
   {
       printf("List Is Already Empty\n");
       START=p;
   }
   else
   {
       t=START;
       printf("\nEnter Value ");
       scanf("%d",&p->info);
       while (t->next!=NULL)
       {
           t=t->next;
       }
       t->next=p;
       p->prev=t;
       printf("Node successfully added\n\n");
   }
}

void dltFrstNode()
{
    struct node *f;
    if(START==NULL)
        printf("\nlist is already empty");
    else
    {
        f=START;
        START=START->next;
        START->prev=NULL;
        free(f);
        printf("Successfully deleted first node of list\n\n");
    }
}

void dltMdlNode()
{
    struct node *f,*t,*l;
    int i,position;
    if (START==NULL)
    {
       printf("List Is Already Empty\n");
    }
    else
    {
        t=START;
        printf("Enter position of Node ");
        scanf("%d",&position);
        for (i=2;i<=position-1;i++)
        {
            t=t->next;
        }
        f=t->next;
        l=f->next;
        t->next=l;
        l->prev=t;
        free(f);
        printf("Node successfully deleted\n\n");
    }
}

void dltLstNode()
{
    struct node *todlt;
    struct node *s;

    if (START==NULL){
       printf("List is already empty\n");}
    else
        {
          todlt=START;
          while(todlt->next!=NULL)
            {
             todlt=todlt->next;
            }
          s=todlt->prev;
          s->next=NULL;
          free(todlt);
          printf("Successfully deleted last node of list\n\n");
        }
}

void viewList()
{
    struct node *t;
    if(START==NULL)
    {
        printf("List Is Empty\n");
    }
    if(START->next==NULL)
    {
        t=START;
         printf("\n%d\n",t->info);
         printf("Single Node successfully Printed\n\n");
    }
    else
    {
        t=START;
        while(t!=NULL)
        {
            printf("\n%d\n",t->info);
            t=t->next;
        }
        printf("List successfully Printed\n\n");
    }
}
//menu driven program//
int menu()
{
    int ch;
    printf("1.Insert Successive Node to list");
    printf("\n2.Insert First node");
    printf("\n3.Insert Middle node");
    printf("\n4.Insert Last node");
    printf("\n5.View list");
    printf("\n6.Delete First node");
    printf("\n7.Delete middle node");
    printf("\n8.Delete last node");
    printf("\n9.Exit\n");
    printf("\nEnter your choice ");
    scanf("%d",&ch);
    return(ch);
}

void main()
{
    while(1)
    {
        switch(menu())
        {
            case 1:
                insertNode();
                break;
            case 2:
                insertAsFirstNode();
                break;

            case 3:
                insertAsMiddleNode();
                break;
            case 4:
                insertAsLastNode();
                break;
            case 5:
                viewList();
                break;
            case 6:
                dltFrstNode();
                break;
            case 7:
                dltMdlNode();
                break;
            case 8:
                dltLstNode();
                break;
            case 9:
                exit(0);
            default:
                printf("\nInvalid choice\n");
        }
    }
    getch();
}

