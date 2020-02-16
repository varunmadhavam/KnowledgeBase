#include<stdio.h>
#include<string.h>
int main()
{
        float f=2587;
        int m,x;
        memcpy(&m, &f, 4);
        x = ((m >> 23) & 0xFF) - 127;
        (f<0) ? printf("31\n") : printf("%d\n",x);
}
