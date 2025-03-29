#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; ) {
        for (int j = 0; j <= i; ) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}