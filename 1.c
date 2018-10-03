#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a ,* b;
    a = (int*)malloc(sizeof(int));
    b = (int*)malloc(sizeof(int));
    printf("init adrees is %d %d\n",(int)(a),(int)(b));
    (*a) = 1;
    (*b) = 2;
    printf("after adrees is %d %d\n",(int)(a),(int)(b));
    int* t = a;
    a = b;
    b = t;
    printf("after adrees is %d %d\n",(int)(a),(int)(b));
    printf("value is %d %d\n",*a,*b);
    return 0;
}
