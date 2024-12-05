// ###############################  Using Display and Add(x) OR Append(x) Operations ################################

#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
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
    printf("You can enter the Elements upto %d : ", arr.size);
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

    //  This Section Add the Elements in the Exists Array :
    // it will insert an Elements end of the array :
    printf("\nEnter The Elements You want to Add in Array : ");
    int x;
    scanf("%d", &x);
    arr.A[arr.length] = x;
    arr.length++;
    printf("Length of an Array is : %d\n", arr.length);

    // this section will display the array elements after inserting new one :
    display(arr);

    return 0;
}