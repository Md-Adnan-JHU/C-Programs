//const pointer to const( const int* const p)=value of p can't be changed//
void main()
{
  const int x=5;
  const int *const p;
  p=&x;
  printf("x=%d",x);
  ++(p);
  printf("x=%d",x);
  getch();
}
