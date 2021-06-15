#include <stdio.h>
#include <conio.h>
main()
{
  char str[10],c;
  int i,len,f=0;
  printf("ENTER THE STRING\n");
  gets(str);
  len=strlen(str);

  printf("ENTER THE character YOU WANT FIND INDEX OF :\n");
  scanf("%c",&c);
  for(i=0;i<len;i++)
  {
    if (str[i]==c)
    {
        printf("\nTHE INDEX OF %d IS %d",c,i+1);
        f=1;
    }
  }
  if (f==0)
        printf("\nNOT FOUND");

  getch();








}


