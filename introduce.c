#include <stdio.h>

int main()
{
    char name[15];
    printf("hello! What's your name?\n");
    gets(name);
    printf("hello, %s!\n", name);
    return 0;
}