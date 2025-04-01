#include<stdio.h>
void fibonacci(int n) {
    int first = 0, second = 1, next;

    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <=0) {
        printf("Invalid Input\n");
    }
    else {
        fibonacci(n);
    }
    return 0;
}