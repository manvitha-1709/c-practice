// write a program to swapp e two numbers using a temporary variable and without using a temporary variable
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping using a temporary variable: a = %d, b = %d\n", a, b);

    // Swapping without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping without using a temporary variable: a = %d, b = %d\n", a, b);

    return 0;
}