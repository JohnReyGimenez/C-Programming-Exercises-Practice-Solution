#include <stdio.h> 

int main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Input 10 elements in the array : ");
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }

    printf("Elements in array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}

// // Write a program in C to store elements in an array and print them.
// Test Data :
// Input 10 elements in the array :
// element - 0 : 1
// element - 1 : 1
// element - 2 : 2
// .......
// Expected Output :
// Elements in array are: 1 1 2 3 4 5 6 7 8 9
// // 