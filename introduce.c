#include <stdio.h>

int main()
{
    int age;
    char name[15];
    char ch;
    printf("hello! What's your name?\n");
    scanf("%s", name);
    printf("hello, %s!\n", name);
    printf("How old are you?\n");
    scanf("%d", &age);
    printf("%s, you're %d years old.", name, age);
    printf("Do you want to know a little more about me?");
    printf("Please, print y/n\n");
    scanf ("%s", &ch);
    switch(ch) {
        case 'y':
            printf("I'm a programm. I was created 1.03.17.I like meeting people");
            break;
        case 'n':
            printf("nice to meet you");
        default:
            printf("I dont understand you:( ");
    }  
    return 0;
}