#include <stdio.h>
int main()
{
    int x = 10;
    int *y;
    printf("%d %u\n", x, &x);
    y = &x;
    printf("%u %u %d\n", &y, y, *y);
    return 0;
}