// // write a program to print n natural numbers and calculate sum of n natural numbers
// #include <stdio.h>
// int main()
// {
//     int n, i = 1, sum = 0;
//     printf("enter value of n:");
//     scanf("%d", &n);
//     printf(" the first %d natural numbers are:\n", n);
//     while (i <= n)
//     {
//         printf("%d\t", i);
//         sum = sum + i;
//         i++;
//     }
//     printf("\nsum of %d natural numbers is :%d", n, sum);
//     return 0;
// }

// // write a program to calculate the sum of even and odd numbers from 1 to n natural numbers using while loop
// #include <stdio.h>
// int main()
// {
//     int n, i = 1, sum_even = 0, sum_odd = 0;
//     printf("enter the value of n:");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         if (i % 2 == 0)
//         {
//             sum_even = sum_even + i;
//         }
//         else
//         {
//             sum_odd = sum_odd + i;
//         }
//         i++;
//     }
//     printf("sum of first %d even numbers is :%d\n", n, sum_even);
//     printf("sum of first %d odd numbers is :%d\n", n, sum_odd);
//     return 0;
// }
