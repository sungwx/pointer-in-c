#include <stdio.h>

int main()
{
    int a = 1,b = 2;
    int t = a;
    a = b;
    b = t;
    printf("%d\n%d",a,b);
    return 0;
}
