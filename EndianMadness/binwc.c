#include <stdio.h>
struct threeNum
{
   char n1, n2, n3;
};
int main()
{
   int n;
   struct threeNum num;
   FILE *fptr;
   if ((fptr = fopen("file.bin","wb")) == NULL){
    printf("Error! opening file");
      }
   num.n1 = 'a';
   num.n2 = 'b';
   num.n3 = 'c';
   fwrite(&num, sizeof(struct threeNum), 1, fptr); 
   fclose(fptr); 
   return 0;
}
