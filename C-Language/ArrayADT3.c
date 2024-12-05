// ###############################  Using Display and Add(x) OR Append(x) Operations ################################

#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void insert(int index, int x, struct Array arr)
{
    if (index >= arr.size || index < 0)
    {
        printf("\nYou Have Enter The Wrong Index, Plz ckeck it :  ");
    }
    if (arr.size == arr.length)
    {
        printf("\nooh SORRY , You can't insert the elements bcz Array is Full");
    }
    for (int i = arr.length; i > index; i--)
    {
        arr.A[i] = arr.A[i - 1];
    }
    arr.A[index] = x;
    arr.length++;
};

// this section is displaying the elements before and after inserting new Elements  :
void display(struct Array arr)
{
    printf("Elements of an Array are : ");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d  ", arr.A[i]);
    }
};

int main()
{
    struct Array arr;
    // This section take size of an Array from users :
    printf("Enter The Size of an Array : ");
    scanf("%d", &arr.size);

    // this section will make an array of provided size in the HEAP MEMORY :
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    printf("Length of an Array is : %d", arr.length);

    // this section take the input that how much elements he want to insert according to size of an ARRAY :
    printf("\nYou can enter the Elements upto %d : ", arr.size);
    printf("\nEnter The Number of Elements for an Array : ");
    int n;
    scanf("%d", &n);

    // This Section Take the input elements  from users
    printf("Enter The Elements for an Array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    printf("Length of an Array is : %d\n", arr.length);

    // this section will display the array elements before inserting new one :
    display(arr);
    printf("\nYou can insert an Elements on these Indexes :");
    for (int i = 0; i < arr.size; i++)
    {
        printf(" %d ", i);
    }

    printf("\n Enter The index where you Want to insert an Number : ");
    int index;
    scanf("%d", &index);

    printf("\nEnter The Element you want to insert in an Array : ");
    int x;
    scanf("%d", &x);

    insert(index, x, arr);
    // this section will display the array elements after inserting new one :
    // display(arr);

    return 0;
}