#include <stdio.h>

int main() {
    int size;
    
    printf("Input the size of array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Input %d elements in the array :\n",size);

    for (int i = 0; i < size; i++) {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int max2 = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max2 && arr[i] != max) {
            max2 = arr[i];
        }
    }

    printf("The Second largest element in the array is : %d",max2);
}

// Write a program in C to find the second largest element in an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array :
// element - 0 : 2
// element - 1 : 9
// element - 2 : 1
// element - 3 : 4
// element - 4 : 6
// Expected Output :
// The Second largest element in the array is : 6
