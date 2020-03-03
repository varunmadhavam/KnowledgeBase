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
// Before printing, call the function recursively. This ensures the printing of the result in the proper order ie bottoms up after
// repeated division.
conv(d>>1); // Right shift once == divide by 2
printf("%d",d&1); // Quicker way of checking d%2. Just check the last bit of d. If it's one, then d is odd and %2 is one else zero.
}
