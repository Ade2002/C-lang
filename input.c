#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

    int age;
    char Name[20];
    char lastName[20];
    printf("Hi there, whats your name?\n");
    scanf("%s", &Name);
    printf("welcome %s\n", Name);
    printf("are you eligible to vote?\", if yes then whats your last name and other names?:");
    fgets(lastName, 20, stdin);
   /*  printf("Hi %s\n", strcat(Name, lastName));
    scanf("%d", &age);
    printf("yay!! your name is %s and your age is %d now you can cast your vote\n", Name, age);
    system("pause"); */
    return 0;
}
