#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Enter element %d : ",i);
        scanf("%d",&arr[i]);
    }

    int majority = 0;
    int count;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                if (count > size / 2) {
                    majority = arr[i];
                }
            }
        }
    }

    if (majority == 0) {
        printf("There are no Majority Elements in the given array.");
    } else {
        printf("Majority element: %d",majority);
    }
}

// Write a program in C to find the majority element of an array.
// A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
// Expected Output :
// The given array is : 4 8 4 6 7 4 4 8
// There are no Majority Elements in the given array.
