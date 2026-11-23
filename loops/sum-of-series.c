#include <stdio.h>

int main() {
    int n;
    printf("Input the number of terms : ");
    scanf("%d",&n);

    int series = 1;
    int s = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        s += series;
        series *= 10;

        sum += s;
    }

    printf("The Sum is : %d",sum);

    return 0;
}


// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// Test Data :
// Input the number of terms : 5
// Expected Output :
// 1 + 11 + 111 + 1111 + 11111
// The Sum is : 12345
