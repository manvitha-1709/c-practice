// prime numbers in the given array
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a[50];
    int n, i, j, nof;
    printf("enter number of elements in array(max 50):");
    scanf("%d", &n);
    system("clear");
    printf("enter %d elements:", n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }
    system("clear");
    printf("the elements of array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nthe prime numbers in the given array are:\n");
    for (i = 0; i < n; i++)
    {
        nof = 0;
        for (j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                nof++;
            }
        }
        if (nof == 2)
            printf("%d\t", a[i]);
    }
}