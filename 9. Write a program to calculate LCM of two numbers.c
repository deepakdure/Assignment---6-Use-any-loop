// 9. Write a program to calculate LCM of two numbers
#include <stdio.h>
int main()
{
    int a, b, c, i;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    for (i = a > b ? a : b; i <= a * b; i = i + (a > b ? a : b))
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}