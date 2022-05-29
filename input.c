#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{

    int age;
    char Name[20];
    printf("Hi there, whats your name?\n");
    scanf("%s", &Name);
    printf("welcome %s\n", Name);
    printf("are you eligible to vote?\", if yes then whats your age?:");
    scanf("%d", &age);
    printf("yay!! your name is %s and your age is %d now you can cast your vote\n", Name, age);
    system("pause");
    return 0;
}
