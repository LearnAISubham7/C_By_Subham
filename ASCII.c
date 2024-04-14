#include <stdio.h>
int main()
{
    for (int i = 90; i <= 122; i++)
    {
        printf("%d ", i);
        char ch = (char)i;
        printf("%c \n", i);
    }

    // int x = 65;
    // printf("%d\n", x);
    // char ch = (char)x;// called type casting
    // printf("%c\n", ch);

    // char ch = 'A';
    // printf("%c\n", ch);
    // int x = (int)ch;
    // printf("%d\n", x);
    // return 0;
}