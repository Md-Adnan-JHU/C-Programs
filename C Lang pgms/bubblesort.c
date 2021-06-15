int main()
{
 int A[100];
 int i , N;
 printf("Enter the number of elements to Sort: ");
 scanf("%d",&N);

 printf("Enter the elements to Sort: ");
 for (i=0;i<=N-1;i++)
    scanf("%d",&A[i]);

 bubble_sort(A,N);

 printf("Sorted Elements Are: ");
 for (i=0;i<=N-1;i++)
     printf("%d ",A[i]);

 getch();

}

void bubble_sort (int A[], int N)
{
 int round , i , temp;

 for (round=1; round<=N-1;round++)
 {
     for (i=0;i<=N-1-round;i++)
     {
         if (A[i]>A[i+1])
         {
             temp=A[i];
             A[i]=A[i+1];
             A[i+1]=temp;
         }
     }
 }
}



