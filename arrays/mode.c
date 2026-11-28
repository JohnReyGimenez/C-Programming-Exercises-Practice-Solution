#include <stdio.h>

int main () {
    int size;
    
    printf("Enter size of array: ");
    scanf("%d",&size);
    
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ",i);
        scanf("%d",&arr[i]);
    }
    
    
    int mode;
    
    for (int i = 0; i < size; i++) {
        int count = 1;
        if (i != size - 1) {
            for (int j = 1; j < size; j++) {
                if (arr[i] == arr[j + 1]) {
                    count++;
                    if (count > 1) {
                        mode = arr[i];
                    }
                }
            }
        } else {
            printf("mode: %d",mode);
        }
        
    }
    
    return 0;
}
