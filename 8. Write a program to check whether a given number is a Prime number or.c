// 8. Write a program to check whether a given number is a Prime number or not
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter a number\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not A Prime Number");
            break;
        }
    }
    if (n == i)
        printf("Prime Number");
    return 0;
}
