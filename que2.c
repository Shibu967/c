#include <stdio.h>

int main()

{
    int physics, chemistry, maths;
    float total;
    printf("Enter physics Marks\n");
    scanf("%d", &physics);

    printf("Enter chemistry Marks\n");
    scanf("%d", &chemistry);

    printf("Enter maths Marks\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;

    if ((total < 40) || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("your total percentage is %f and you are pass\n", total);
    }
    return 0;
}