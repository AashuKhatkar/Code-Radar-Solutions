#include <stdio.h>

nt main()
{
    char a[100], c[100];
    int b;
    scanf("%s %d %s", &a, &b, &c);
    printf("Name: %s", a);
    printf("Age: %d", b);
    printf("Hobby: %s", c);
    return 0;
}