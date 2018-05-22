#include<stdio.h>
int main()
{
  int num=1633837924;
  char *test;
  test=(char*)&num;
  if(*test=='a')
  	printf("Big Endian Detected\n");
  else if(*test=='d')
  	printf("Little Endian Detected\n");
  else
  	printf("Unable To Detect Endianness\n");
  return 0;
}
