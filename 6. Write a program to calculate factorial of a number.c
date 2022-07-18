// 6. Write a program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int x, i, s = 1;
    printf("enter a number\n");
    scanf("%d", &x);
    for (i = x; i >= 1; i--)
    {
        s = s * i;
    }
    printf("%d", s);
    return 0;
}