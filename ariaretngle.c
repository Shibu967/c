#include <stdio.h>
int main()
{
    int length;
    int wirth;

    printf("enter the length\n");
    scanf("%d", &length);
    printf("enter the wirth\n");
    scanf("%d", &wirth);
    int a = wirth * length;
    printf("the area of retangle\n %d", a);

    return 0;
}