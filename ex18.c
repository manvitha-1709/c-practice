//multiplication of two matrices
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][3], b[3][3], mul[3][3], i, j, k;
    system("clear");
    printf("enter elements of 1st matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter elements of 2nd matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter element b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]); 
        }
    }
    // multiplying two matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                mul[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }
    // displaying the multiplication of two matrices
    printf("Multiplication of two matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}