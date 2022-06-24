#include <stdio.h>

int main()
{

    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age > 90)
    {
        printf("you are above 90,you cannot drive");
    }

    else
    {
        printf("you can drive");
    }

    return 0;
}