// pointer types,void pointer, pointer arithematic
// pointer var of particular type to store the address of the variable
// int* -->int
// char* -->char
/*
why strong types?
why not some generic type?
Reason for this is ....
we use this for dereferencing 
Access/modify value
*/

#include<stdio.h>
int main() {
    int a=1025;
    int *p;
    p= &a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("address =%d, value=%d\n",p,*p);
    printf("address =%d, value=%d\n",p+1,*(p+1));
    char *p0;
    p0= (char*)p;
    printf("size of char is %d bytes \n",sizeof(char));
    printf("address= %d,value= %d\n",p0,*p0);
    printf("address= %d,value= %d\n",p0+1,*(p0+1));

// Generic Pointer type
void *p0;

p0=(void*) p0;
p0=p;
printf("address=%d",p0);
printf("address=%d",p0+1);
}
