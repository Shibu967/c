#include <stdio.h>
void display(); // function prototype

int main()
{
    printf("Initializing display function\n");
    display();
    printf("Display function finished\n");

    return 0;
}
void display()
{
    printf("this is display\n");
}