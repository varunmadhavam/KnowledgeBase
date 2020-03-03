#include<stdio.h>
void conv(unsigned int d);
int main()
{
unsigned int a = 4995;
conv(a);
printf("\n");
return 0;
}

void conv(unsigned int d)
{
if(d==1)
{
 printf("1");
 return;
}
conv(d>>1);
printf("%d",d&1); //https://stackoverflow.com/questions/11040646/faster-modulus-in-c-c
}
