#include <stdio.h>
int main()
{
    int n = 4;
    
    for (int i = 1; i <= n; i++) {
        int j = n;
        for (int s = 1; s <= i; s++) {
            printf(" ");
        }
        
        
        for (int star = 2 * j - 1; star > i * 2 - 2; star--) {
            printf("*");
            
        }
        
        printf("\n");
    }
    
    return 0;
}

// *******
//  *****
//   ***
//    *
