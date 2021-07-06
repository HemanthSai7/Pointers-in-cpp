/*use cases of pointer variables

before use of pointers
#include<stdio.h>
void Increment(int a) {
    a=a+1;
}
int main() 
{
    int a;
    a=10;
    Increment(1);
    printf("a= %d\n",a);
}
*/

/*after use of pointers
#include<stdio.h>
void Increment(int a) { //called function
            //  ^
            //  |
            // (formal argument) 
    a=a+1;
    printf("address of variable a in increment = %d\n",&a);
}
int main() {//calling function
    int a;
    a=10;
    Increment(a);//actual argument
    printf("address of variable a in main= %d\n",&a);
}
*/

// using pointers as function argumnents(call by reference)
/*#include <stdio.h>
void Increment(int *p)
{   
    *p=(*p)+1;
}
int main()
{ 
    int a;
    a = 10;
    Increment(&a);
    printf("a=%d\n",a);
}
*/