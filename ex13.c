// sum of array elements
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50];
    int n, i, sum = 0;
    system("clear");
    printf("Enter the number of elements in the array (max 50): ");
    scanf("%d", &n);
    if (n > 50)
    {
        printf("Number of elements exceeds the maximum limit of 50.\n");
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}