// C program for array implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct ArrayStack {
  int top;
  unsigned capacity;
  int *array;
};

struct ArrayStack *createStack(int cap) {

  struct ArrayStack *stack;
  stack=malloc(sizeof (struct ArrayStack));
  stack->capacity = cap;
  stack->top = -1;
  stack->array = malloc(sizeof(int)*stack->capacity);
  return(stack);
}

int isFull(struct ArrayStack *stack) {
    if(stack->top==stack->capacity-1)
        return(1);
    else
        return(0);
}

int isEmpty(struct ArrayStack *stack) {
    if (stack->top == -1)
        return(1);
    else
        return(0);
}

void push(struct ArrayStack *stack, int item) {
  if (!isFull(stack)) {
     stack->top++;
     stack->array[stack->top]=item;
  }
}

int pop(struct ArrayStack *stack) {
   int item;
   if(! isEmpty(stack))
       item=stack->array[stack->top];
       stack->top--;
       return(item);
   return(-1);
}

main()
{
    int choice;
    int item;
    struct ArrayStack *stack;
    stack=createStack(4);
    while (1)
    {
        printf("Enter your Choice \n1.Push \n2.Pop \n3.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number you want to insert ");
            scanf("%d",&item);
            break;

        case 2:
            item=pop(stack);
            if(item == -1)
                printf("Stack is empty");
            else
                printf("The deleted number is %d\n",item);
            break;

        case 3:
            exit(0);
        }
    }
    getch();
}
