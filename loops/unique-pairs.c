#include <stdio.h>

int main() {
    int arr[4] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (arr[j] != arr[i]) {
                printf("(%d, %d) ",arr[i],arr[j]);
            }
        }
    }
}
