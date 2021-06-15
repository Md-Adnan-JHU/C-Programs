//const pointer(*const p)=value of p can't be changed//
void main()
{
  const int x=5;
  int *const p=&x;
  printf("x=%d",x);
  ++(*p);
  printf("x=%d",x);
  getch();
}
