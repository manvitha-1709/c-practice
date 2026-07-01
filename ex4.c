// // write a program to print all the palindrome numbers from 1 to 1000 using for loop
// #include <stdio.h>
// int main()
// {
//     int n, temp, d, rev;
//     printf("enter the value of n:");
//     scanf("%d", &n);
//     for (n = 1; n <= 1000; n++)
//     {
//         temp = n;
//         rev = 0;
//         while (temp > 0)
//         {
//             d = temp % 10;
//             rev = rev * 10 + d;
//             temp = temp / 10;
// //         }
// //         if (n == rev)
// //         {
// //             printf("%d\t ", n);
// //         }
// //     }
// // }

// // write a program to print all armstrong numbers from 1 to 1000 using for loop
// #include <stdio.h>
// int main()
// {
//     int n, temp, d, sum;
//     for (n = 1; n <= 1000; n++)
//     {
//         temp = n;
//         sum = 0;
//         while (temp > 0)
//         {
//             d = temp % 10;
//             sum = sum + d * d * d;
//             temp = temp / 10;
//         }
//         if (n == sum)
//         {
//             printf("%d\t ", n);
//         }
//     }
//     return 0;
// }

// // write a program to print all prime numbers from 1 to 1000 using for loop
// #include <stdio.h>
// int main()
// {
//     int n, i, nof;
//     for (n = 1; n <= 1000; n++)
//     {
//         nof = 0;
//         i = 1;
//         while (i <= n)
//         {
//             if (n % i == 0)
//             {
//                 nof++;
//             }
//             i++;
//         }
//         if (nof == 2)
//         {
//             printf("%d\t", n);
//         }
//         else
//         {
//             // Do nothing for non-prime numbers
//         }
//     }
//     return 0;
// }

// // write a program to print all fibonacci numbers from 1 to 1000 using for loop
// #include <stdio.h>
// int main()
// {
//     int n1 = 0, n2 = 1, nextTerm;
//     printf("Fibonacci Series: ");
//     for (int i = 1; i <= 1000; ++i)
//     {
//         if (n1 > 1000)
//             break;
//         printf("%d\t", n1);
//         nextTerm = n1 + n2;
//         n1 = n2;
//         n2 = nextTerm;
//     }
//     return 0;
// }


