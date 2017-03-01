#include <stdio.h>

int main()
{
    int age;
    char name[15];
    printf("hello! What's your name?\n");
    gets(name);
    printf("hello, %s!\n", name);
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("%s, you're %d years old.", name, age);
    return 0;
}