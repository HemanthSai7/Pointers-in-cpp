// Pointer to Pointer

#include<stdio.h>
int main() {
    int x=5;
    int *p= &x;
    *p=6;

    int **q=&p;
    int ***r =&q;
    printf("%d\n",p);
    printf("%d\n",*p);//6
    printf("%d\n",*q); //value stored at address p
    printf("%d\n", *(*q)); //first i'll go to *q (ie value stored at address p) and value at address at *q(q-->p-->x)
    printf("%d\n",*r);
    printf("%d\n",**r);
    printf("%d\n",***r);

    ***r=10;
    printf("%d\n",x);

    **q= *p +2;
    printf("%d\n",x);
}
