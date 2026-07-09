#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i , j, a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    system("clear");
    printf("elements of the double dimension array are:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;   
}












