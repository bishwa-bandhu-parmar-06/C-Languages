#include <stdio.h>
int main()
{
    int x = 4, y, z;
    y = --x;
    z = x--;
    printf("\n%d", x);
    printf("\n%d", y);

    printf("\n%d", z);
}