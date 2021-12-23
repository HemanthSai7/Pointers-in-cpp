#include<stdio.h>
int sumOfElements(int* A, int size)//int *A or A[]....it's the same...
{
    int i,sum=0;
    printf("SOE-Size of A = %d,size of A[0]=%d\n",sizeof(A),sizeof(A[0]));
    for(i=0;i<size;i++)
    {
    sum+=A[i];
    }
    return sum;
}
int main() {
    int A[]={1,2,3,4,5};
    int size=sizeof(A)/sizeof(A[0]);
    int total=sumOfElements(A,size);
    printf("sum of elements=%d\n",total);
    printf("SOE-Size of A = %d,size of A[0]=%d\n",sizeof(A),sizeof(A[0]));
}

#include<stdio.h>
void double(int *A, int size) 
{
    int i,sum=0;
    for (i=0;i<size;i++) {
        A[i]=A[i]*2;
    }
}
int main()
{
    int A[]={1,2,3,4,5};
    int size=sizeof(A)/sizeof(A[0]);
    int i;
    double(A,size);
    for (i=0;i<size;i++) {
        printf("%d\n",A[i]);
    }
}
