#include<stdio.h>
#include <stdint.h>
int main()
{
  int num=1633837924;
  char *a,*b,*c,*d;
  a=(char*)&num;
  b=a+1;
  c=b+1;
  d=c+1;
  printf("%d : %c : %c : %c : %c\n",num,*a,*b,*c,*d);
  printf("%d : %d : %d : %d : %d\n",&num,a,b,c,d);
  return 0;
}
