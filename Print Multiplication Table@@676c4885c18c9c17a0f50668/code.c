#include<stdio.h>
int main()
{
    int n, i, product=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        product = n*i;
    }
    printf("%d x %d = %d", n, i, product);
    return 0;
}