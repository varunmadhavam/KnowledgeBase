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
if(d==1) // Recussion ends when the input is one, ie we have reached the end of the repeated division.
{
 printf("1");
 return;
}
// Before printing, call the function recursively. This ensures the printing of the result in the proper order ie bottoms up.
conv(d>>1); // Right shift once == divide by 2
printf("%d",d&1); // d%n == d&(n-1) if n%2 == 0 => d%2 == d&(2-1) == m&1 ;https://stackoverflow.com/questions/11040646/faster-modulus-in-c-c
}
