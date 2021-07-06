// use cases of pointer variables
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