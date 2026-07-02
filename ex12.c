#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5];
    int i;
    system("clear");
    printf("Enter 5 elements of the array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    system("clear");
    printf("The elements of the array are......:\n");
    for (i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}