#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i; // j will now store the address of i
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the value of i is %u\n", &j);
    printf("the Address of i is %u\n", j);
    printf("the Address of j is %u\n", &j);
    printf("the Address of j is %u\n", *(&j));

    return 0;
}