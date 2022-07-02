#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodnight();

int main()
{
    goodMorning();
    return 0;
}
void goodMorning()
{
    printf("good Morning Shibu\n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("good Afternoon Shibu\n");
    goodnight();
}
void goodnight()
{
    printf("good night Shibu\n");
}
