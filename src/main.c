//includes
//stdlib
//structs
//minne
//void *

#include <stdio.h>

void dont_do_this() 
{
    int temp = 0;
}

int main() 
{
    int a = 10;
    int b = 11;

    int c = a + b;

    printf("c = %d", c);

    printf("size of and int: %lld", sizeof(int));

    char bytes[4];
    bytes[0] = 1;
    bytes[1] = 1;
    bytes[2] = 1;
    bytes[3] = 1;

    c = bytes[0];

    char *p = &bytes[2];

    printf("c = \n", p);
    printf("*p = %\n", *p);

    int *p2 = &bytes;



}




