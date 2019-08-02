#include<stdio.h>
#include<stdlib.h>

#define COL 0
#define ROW 1

void printmat(int*,int,int,int);
void readmat(int*,int,int);
void mulmat(int*,int*,int*,int,int,int);

int main()
{
    int m,n,p;
    int *mat1,*mat2,*matmul;

    printf("Enter the number of rows of first matrix : ");
    scanf("%d",&m);
    printf("Enter the number of columns of first matrix : ");
    scanf("%d",&n);
    printf("Enter the number of columns of second matrix : ");
    scanf("%d",&p);

    mat1=(int*)malloc(sizeof(int)*m*n);
    mat2=(int*)malloc(sizeof(int)*n*p);
    matmul=(int*)malloc(sizeof(int)*m*p);

    if(!mat1 || !mat2 || !matmul)
        {
            printf("Error allocating memory for the matrices..Exiting...!");
            exit(1);
        }

    printf("enter the first matrix row wise : \n");
    readmat(mat1,m,n);

    printf("enter the second matrix column wise : \n");
    readmat(mat2,n,p);
    printf("\n");

    printf("Matrix 1 is : \n");
    printmat(mat1,m,n,ROW);
    printf("Matrix 2 is : \n");
    printmat(mat2,n,p,COL);

    mulmat(mat1,mat2,matmul,m,n,p);

    printf("result is\n");
    printmat(matmul,m,p,ROW);
      
    free(mat1);
    free(mat2);
    free(matmul);
    exit(0);
}

void readmat(int *p,int m,int n)
{
  for(int i=0;i<m*n;i++)
     {
        scanf("%d",p+i);
     } 
}

void printmat(int *p,int m,int n,int type)
{
    if(type==ROW)
    {
        for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                    {
                        printf("%d ",*p);
                        p+=1;
                    }
                printf("\n");
            }
    }
    else if(type==COL)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",*(p+i+(j*m)));
            }
            printf("\n"); 
        }
    }
    printf("\n");
 
}

void mulmat(int* mat1,int* mat2,int* matmul,int m,int n, int p)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            *matmul=0;
            for(int k=0;k<n;k++)
            {
                *matmul=*matmul + (*(mat1+(i*n)+k)*(*(mat2+(j*n)+k)));
            }
            matmul+=1;
        }
    }
}
