#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i , j , space , n;
    printf("enter the number of rows:");
    scanf("%d",&n);

    system("clear");

    for (i=1; i<=n; i++)
    {
        for(space=n; space>i; space--)
        {
            printf("\t");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d\t" ,j);
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%d\t" ,j);
        }
        printf("\n\n");
    }
return 0 ;
}