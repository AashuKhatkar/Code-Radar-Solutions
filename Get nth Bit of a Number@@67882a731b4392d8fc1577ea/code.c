#include <stdio.h>

int main()
{
    int a, n, bit_value;
    scanf("%d %d", &a, &n);
    bit_value = (num >> n) & 1;
    printf("%d", n, bit_value);

    return 0;
}