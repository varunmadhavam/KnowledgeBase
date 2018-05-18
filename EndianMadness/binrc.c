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
   if ((fptr = fopen("file.bin","rb")) == NULL){
       printf("Error! opening file");
          }  
   fread(&num, sizeof(struct threeNum), 1, fptr); 
   printf("n1: %c\tn2: %c\tn3: %c\n", num.n1, num.n2, num.n3);
   fclose(fptr); 
   return 0;
}
