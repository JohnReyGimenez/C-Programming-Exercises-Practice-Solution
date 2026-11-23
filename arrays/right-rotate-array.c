#include <stdio.h>

int rotateByOne(int n, int arr[], int size) {
    int last = arr[size - 1];

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
    
    return arr[size];
}

int main() {
    int size,n;

    printf("Enter size of array: ");
    scanf("%d",&size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i]);
    }

    printf("array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }

    printf("\nEnter num of times to rotate array: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        rotateByOne(n, arr, size);
    }

    printf("Rotated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }
}
