#include <stdio.h>
int main()
{
    int size;

    printf("Input the size of array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Input %d elements in the array : \n",size);
    for (int i = 0; i < size; i++) {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int first = arr[i];
                arr[i] = arr[j];
                arr[j] = first;
            }
        }
    }

    

    printf("Elements of the array in sorted descending order:");
    for ( int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }
}

// Write a program in C to sort the elements of the array in descending order.
// Test Data :
// Input the size of array : 3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 9
// element - 2 : 1
// Expected Output :
// Elements of the array in sorted descending order:
// 9 5 1
