#include<stdio.h>
int main()
{
  int a=1655624545;
  char *c;
  c=(char*)&a;
  printf("%d\n",a);
  printf("%d\n",*c);
  printf("%c\n",*c);
  return 0;
}
