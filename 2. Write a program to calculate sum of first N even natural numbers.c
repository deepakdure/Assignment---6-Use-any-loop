// 2. Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
    int x, y = 0, i;
    printf("enter a numberr\n");
    scanf("%d", &x);
    for (i = 2; i <= x * 2; i += 2)
        y = y + i;
    printf("%d", y);
    return 0;
}