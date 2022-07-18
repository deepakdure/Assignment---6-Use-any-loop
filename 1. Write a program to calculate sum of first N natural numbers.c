// 1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int s, i, n;
    printf("enter a number\n");
    scanf("%d", &n);
    s = 0;
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("%d", s);
    return 0;
}