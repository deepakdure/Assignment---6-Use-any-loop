// 7. Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int n, s = 0;
    printf("enter a number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        s++;
        n = n / 10;
    }
    printf("%d", s);
    return 0;
}