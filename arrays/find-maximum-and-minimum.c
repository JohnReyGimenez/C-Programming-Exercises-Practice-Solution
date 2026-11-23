#include <stdio.h>

int main() {
    int size; 

    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&size);

    printf("Input %d elements in the array : \n",size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum element is : %d",max);
    printf("\nMinimum element is : %d",min);
}

// Write a program in C to find the maximum and minimum elements in an array.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 45
// element - 1 : 25
// element - 2 : 21
// Expected Output :
// Maximum element is : 45
// Minimum element is : 21