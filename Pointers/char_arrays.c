/*
1. how to store strings?
size of strings>= no. of charachters in string + 1
'john'  size>=5

Rule:- A string in C has to be null terminated

*/

/*#include<stdio.h>
int main() 
{
    char c[4];
    c[0]='j';
    c[1]='o';
    c[2]='h';
    c[3]='n';
    c[4]='\0';
    int len=strlen(c);
    printf("length = %d\n",len);
}*/

/*#include <stdio.h>
int main()
{
    char c[]="JOHN";
    printf("size in bytes= %d\n",sizeof(c));
    int len = strlen(c);
    printf("length = %d\n", len);
}
*/

/*
2. arrays and pointes are different types that are used in similar manner
#include <stdio.h>
int main()
{
    char c1[6] = "Hello";
    char *c2;
    c2=c1;
    printf("%s\n",c2[1]);
    c2[0]='A';
    // c2[i]==*(c2+i)
    //c1[i]==*(c1+i)
}
*/

/* 
3. arrays are always passed to function by reference
*/

#include <stdio.h>

void print(char *c)
{
    int i=0;
    while (c[i]!='\0') 
    {
        printf("%c",c[i]);
    i++;
    }

printf("\n");
}

int main()
{
    char c[20] = "Hello";
    print(c);
}