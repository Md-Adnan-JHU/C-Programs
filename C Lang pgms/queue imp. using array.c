// C program for array implementation of Queue
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct ArrayQueue {
    int front,rear;
    int *array;
    int capacity;
};

struct ArrayQueue* createQueue(int capacity) {
    struct ArrayQueue *Q = malloc(sizeof(struct ArrayQueue));
    Q->capacity=capacity;
    Q->front=Q->rear= -1;
    Q->array=malloc(Q->capacity* sizeof(int));
    return(Q);

}

int isEmpty(struct ArrayQueue *Q) {
    return (Q->front= -1);

}

int isFull(struct ArrayQueue *Q) {
    return((Q->rear+1)% Q->capacity == Q->front);

}

int QueueSize (struct ArrayQueue *Q) {
    return ((Q->capacity-Q->rear+Q->front)%Q->capacity);

}

void enQueue (struct ArrayQueue *Q , int data) {
    if (isFull(Q)){
            printf("Overflow");
    }
    else
        Q->rear=(Q->rear+1)%Q->capacity;
        Q->array[Q->rear]=data;

    if (Q->front==-1)
        Q->front=Q->rear;

}

int deQueue (struct ArrayQueue *Q) {
    int data;
     if(! isEmpty(Q))
        data=Q->array[Q->front];
        if (Q->front==Q->rear)
            Q->front=Q->rear= -1;
        else
            Q->front=(Q->front+1)%Q->capacity;

    return(data);
}

void main()
{
    int choice;
    int data;
    struct ArrayQueue *Q;
    Q=createQueue(4);
    while (1)
    {
        printf("Enter your Choice \n1.EnQueue \n2.deQueue \n3.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number you want to insert ");
            scanf("%d",&data);
            break;

        case 2:
            data=deQueue(Q);
                printf("The deleted number is %d\n",&data);
            break;

        case 3:
            exit(0);
        }
    }
    getch();
}

