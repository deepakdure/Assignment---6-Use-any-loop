// 4. Write a program to calculate sum of squares of first N natural numbers
#include <stdio.h>
int main()
{
    int x, y = 0, i;
    printf("enter a numberr\n");
    scanf("%d", &x);
    for (i = 1; i <= x; i++)
        y = y + i * i;
    printf("%d", y);
    return 0;
}