// 10. Write a program to reverse a given number
#include <stdio.h>
int main()
{
    int n, s = 0, i, x;
    printf("enter a number\n");
    scanf("%d", &n);
    while (n)
    {
        s = s * 10;
        x = n % 10;
        s = s + x;
        n = n / 10;
    }
    printf("%d", s);
    return 0;
}