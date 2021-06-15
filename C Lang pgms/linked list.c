#include<stdio.h>
struct node                                        //node=DataType//
{
    int info;                                      //info=variable of node data type//
    struct node *link;                             //link=pointer of node data type//
};
struct node *START=NULL;                            //START=pointer of node data type//
//creating a node with the help of malloc//
struct node *createNode()                          //function named createNode//
{
    struct node *n;                              //n=pointer of node data type//
    n=(struct node *)malloc(sizeof(struct node));   //assigning the address to n returned by malloc//
    return(n);
}

void insertNode()
{
    struct node *temp, *t;
    temp=createNode();
    printf("\nEnter a number");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL)                              //insertion at beginning//
        START=temp;
    else                                       //insertion at end//
      {
        t=START;
        while(t->link!=NULL) {
          t=t->link;   }
        t->link=temp;
      }
     printf("\nSuccessfully inserted a node to the list\n");
}
 //deletion of first node//
void deleteFirstNode()
{
    struct node *r;
    if(START==NULL)
        printf("\nlist is already empty");
    else
    {
        r=START;                               //new var. r m first pointer START ki value rkhi//
        START=START->link;                     //fir empty ho chuke START m 2nd node ki value rkh di i.e.START->link//
        free(r);
        printf("\nSuccessfully deleted first node of list\n");                               // first node i.e., r wale node ko free(dlt) kr dya//
    }
}
//deletion of last node//
void deleteLastNode()
{
    struct node *todlt;
    struct node *scndlstnd;

    if (START==NULL){
       printf("\nList is already empty");}
    else
        {
          todlt=START;
          scndlstnd=START;
          while(todlt->link!=NULL)
            {
             scndlstnd=todlt;
             todlt=todlt->link;
            }
          scndlstnd->link=NULL;

          free(todlt);
          printf("\nSuccessfully deleted last node of list\n");
        }
}
void dltmiddlenode()
{
    struct node *temp;
    struct node *x;
    int position,i;
    printf("\nEnter position of the node to delete");
    scanf("%d",&position);

        temp=START;
        for (i=2; i<=position; i++)
        {
            temp=temp->link;
            if(temp==NULL)
            {
                printf("\nCannot delete as it is the last node");
                break;
            }

        }
        x=START;
        for (i=2; i<=position-1; i++)
        {
            x=x->link;
            if(x==NULL)
            {
                printf("Cannot delete");
                break;
            }
          x->link=temp->link;
          printf("\nMiddle node successfully deleted\n");
        }


}
//printing values of all nodes one by one//
void viewList()
{
    struct node *t;
    if(START==NULL)
        printf("\nlist is empty\n");
    else
    {
        t=START;
        while(t!=NULL)
        {
            printf("\n%d\n",t->info);
            t=t->link;
        }
    }
}
void frontvalue()
{
    struct node *temp;
    int data;
    temp=createNode();

    if (START==NULL)
        {
           printf("\nList is already empty");
        }
    else
    {
        printf("\nEnter the value for front node");
        scanf("%d",&data);
        temp->info=data;
        temp->link=START;
        START=temp;
        printf("\nFront node successfully inserted\n");
    }


}
void middlevalue()
{
    struct node *temp;
    struct node *newnode;
    int data,position,i;
    newnode=createNode();
    if (newnode==NULL)
    {
        printf("\nUnable to add");
    }
    else
    {
        printf("Enter the data");
        scanf("%d",&data);
        printf("\nEnter position of the node to insert the data");
        scanf("%d",&position);
        newnode->info=data;
        newnode->link=NULL;
        temp=START;
        for (i=2; i<=position-1; i++)
        {
            temp=temp->link;
            if(temp==NULL)
                break;
        }

          newnode->link=temp->link;
          temp->link=newnode;
          printf("\nmiddle node successfully inserted\n");

    }

}
//menu driven program//
int menu()
{
    int ch;
    printf("1.Add value to the list/add last node");
    printf("\n2.Delete first node");
    printf("\n3.Delete last node");
    printf("\n4.View list");
    printf("\n5.Add first node to list");
    printf("\n6.Add middle node");
    printf("\n7.Delete middle node");
    printf("\n8.Exit\n");
    printf("\nEnter your choice\n");
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
                deleteFirstNode();
                break;
            case 3:
                deleteLastNode();
                break;
            case 4:
                viewList();
                break;
            case 5:
                frontvalue();
                break;
            case 6:
                middlevalue();
                break;
            case 7:
                dltmiddlenode();
                break;
            case 8:
                exit(0);
            default:
                printf("\nInvalid choice\n");
        }
    }
    getch();
}

