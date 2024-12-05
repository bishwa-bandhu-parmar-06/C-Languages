#include <stdio.h>
#include <conio.h>

void find_sum()
{
    int *num1, *num2, *sum;
    *num1 = 10;
    *num2 = 20;
    *sum = *num1 + *num2;
    printf("Sum is : %d%d%d", num1, num2, sum);
    return ;
}
int main()
{
    find_sum();
    return 0;
}