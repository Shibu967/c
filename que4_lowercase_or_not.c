#include <stdio.h>

int main()
{
    // 97-122=a-z
    char ch;
    printf("Enter the Character\n");
    scanf("%d", &ch);

    if (ch <= 122 && ch >= 97)
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not lowercase");
    }

    return 0;
}