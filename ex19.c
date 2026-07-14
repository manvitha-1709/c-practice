// linear search
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10], i, n, key, found = 0;
    system("clear");
    printf("enter number of elements in array: ");
    scanf("%d", &n);
    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            found = 1;
            break;
        }
    }
    if (found)
        printf("%d is present at index %d\n", key, i);
    else
        printf("%d is not present in the array\n", key);
    return 0;
}