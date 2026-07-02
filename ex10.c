#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int x = 65;
    char c = 'a';
    system("clear");
    
    for(i = 0; i<256; i++)
    {
        printf("%d\t%c\n", i, i);
    }
    printf("%d\n",x);
    printf("%c\n",c);

    printf("\n%c\n",c);
    printf("%d\n",x);
    return 0;
}