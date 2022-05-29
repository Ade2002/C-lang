#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

    int age;
    int Name[20];
    printf("Hi there, whats your age?:");
    scanf("%d", &age);
    printf("yay!! your age is %d\n", age);
    printf("Hi there, whats your name?\n");
    scanf("%s", &Name);
    printf("yay!! your name is %s and your age is %d\n", Name, age);
    return 0;
}
