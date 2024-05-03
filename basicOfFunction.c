#include <stdio.h>
void england()
{
    printf("england\n");
    return;
}
void aus()
{
    printf("aus\n");
    england();
    return;
}
void india()
{
    printf("india\n");
    aus();
    return;
}
int main()
{
    india();

    return 0;
}