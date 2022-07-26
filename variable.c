#include <stdio.h>
int main()
{
    int a = 10;
    float b = 5.8;
    char c = 'u';
    // printf("the value of a  %d %d", a, a);
    printf("the value of a   %d\n", a);
    printf("the value of b   %f\n", b);
    printf("the value of c   %c\n", c);
    int d = a + b;
    printf("%d", d);
    printf(type(a));
    return 0;
}