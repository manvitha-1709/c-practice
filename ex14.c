// biggest and smallest number in an array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50];
    int n , i , max ,min;
    printf("enter number of elements in array(max 50):");
    scanf("%d",&n);

    system("clear");

    printf("enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    system("clear");

    max = min = a[0];

    printf(" the elements of array are...:\n");
    for (i = 0; i<n ; i++)
    {
        printf("%d\t",a[i]);
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("\n biggest number in the array:%d\n",max);
    printf("\n smallest number in the array:%d\n",min);
    
    return 0 ;

}