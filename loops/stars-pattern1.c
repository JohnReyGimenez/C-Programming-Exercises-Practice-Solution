#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of iterations of stars: ");
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        
        //  spaces
        for (int s = n + i - 1; s > n; s--) {
            printf(" ");
        }
        
        // print stars
        
        for (int stars = n - i; stars > 0; stars--) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}

// Enter number of iterations of stars: 6
// *****
//  ****
//   ***
//    **
//     *
     
