// addition of two matrices
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, a[3][3], b[3][3], sum[3][3];
    system("clear");
    printf("Enter elements of 1st matrix:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix:\n");  
    for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                printf("Enter element b[%d][%d]: ", i, j);
                scanf("%d", &b[i][j]);
            }
        }
    // adding two matrices
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // displaying the sum of two matrices       
    printf("Sum of two matrices:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}