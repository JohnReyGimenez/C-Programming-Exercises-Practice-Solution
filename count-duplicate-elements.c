#include <stdio.h>

int main() {
    int count, c;

    printf("Input 3 elements in the array : ");

    int arr[3];

    for (int i = 0; i < 3; i++) {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }

    printf("Total number of duplicate elements found in the array is : %d",count);
}

// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 5
// element - 1 : 1
// element - 2 : 1
// Expected Output :
// Total number of duplicate elements found in the array is : 1