#include<stdio.h>
void fibonacciSeries(int n) {
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        if ( i < n-1) {
            printf(" ");
        }
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    
}

int main() {
    int n;
    
    scanf("%d", &n);

    fibonacciSeries(n);
    
    return 0;
}