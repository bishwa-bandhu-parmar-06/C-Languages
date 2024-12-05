// ###############################  Using Display Operations ################################

#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};
void display(struct Array arr)
{
    printf("You Have entered The Elements : \n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
};
int main()
{
    struct Array arr;
    printf("Enter The Size of an Array : ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    int n;
    printf(" Enter The Number Of Elements : ");
    scanf("%d", &n);

    printf("Enter The elements for an Array : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    display(arr);
}