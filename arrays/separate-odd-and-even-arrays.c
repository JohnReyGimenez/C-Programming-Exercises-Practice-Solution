#include <stdio.h>

int main() {
    int size;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Input 5 elements in the array : \n");
    for (int i = 0; i < size; i++) {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }


    int evenSize = 1;
    int oddSize = 1;

    int evenArr[evenSize];
    int oddArr[oddSize];
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0){
            
            evenArr[evenSize - 1] = arr[i];
            evenSize++;
        }
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0){
            oddArr[oddSize - 1] = arr[i];
            oddSize++;
        } 
    }

    printf("The Even elements are :");
    for (int i = 0; i < evenSize - 1; i++) {
        printf("%d ",evenArr[i]);
    }

    printf("\nThe Odd elements are :");
    for (int i = 0; i < oddSize - 1; i++) {
        printf("%d ",oddArr[i]);
    }
}

// Write a program in C to separate odd and even integers into separate arrays.
// Test Data :
// Input the number of elements to be stored in the array :5
// Input 5 elements in the array :
// element - 0 : 25
// element - 1 : 47
// element - 2 : 42
// element - 3 : 56
// element - 4 : 32
// Expected Output :
// The Even elements are :
// 42 56 32
// The Odd elements are :
// 25 47