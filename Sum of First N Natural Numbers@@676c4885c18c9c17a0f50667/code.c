#include<stdio.h>
int main()
{
    int n, sum=1;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        printf("%d", sum);
        sum=sum+1;
    }
    return 0;
}