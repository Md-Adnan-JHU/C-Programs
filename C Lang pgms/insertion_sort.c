void insertion_sort (int A[],int N)
{
  int temp,i,j;
  for (i=1;i<N;i++)
  {
      temp=A[i];
      for (j=i-1;j>=0&&temp<A[j];j--)
      {
          A[j+1]=A[j];
      }
      A[j+1]=temp;
  }


}
void main ()
{
    int A[10];
    int N,i;
    printf("Enter the number of elements to sort : ");
    scanf("%d",&N);

    printf("Enter the Elements:  ");
    for (i=0;i<=N-1;i++)
        scanf("%d",&A[i]);

    insertion_sort(A,N);
    printf("Sorted elements are : ");
    for (i=0;i<=N-1;i++)
        printf("%d ",A[i]);

    getch();
}
