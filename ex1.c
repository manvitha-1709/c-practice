// // my first program
// #include <stdio.h>
// int main()
// {
//     printf("welcome to c language");
//     printf("\nwelcome to monopoly it solutions");
//     return 0;
// }

// // variable declaration and initialisation
// #include <stdio.h>
// int main()
// {
//     int a = 200;
//     float b = 12.23;
//     char c = 's';

//     printf("\na value is :%d", a);
//     printf("\nb value is :%.2f", b);
//     printf("\nc value is :%c", c);

//     return 0;
// }

// // accepting input from the user
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a;
//     float b;
//     char c;

//     system("clear");

//     printf("enter a value:");
//     scanf("%d", &a);

//     printf("enter b value:");
//     scanf("%f", &b);

//     fpurge(stdin);

//     printf("enter c value:");
//     scanf("%c", &c);

//     system("clear");

//     printf("a value is :%d\n", a);
//     printf("b value is :%.2f\n", b);
//     printf("c value is :%c\n", c);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a, b, c;

//     system("clear");

//     printf("enter a value :");
//     scanf("%d", &a);

//     printf("enter b value:");
//     scanf("%d", &b);

//     c = a + b;
//     printf("\n addition of a and b is :%d", c);

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #define PI = 3.1415
// int main()
// {
//     float radius, area;
//     system("clear");

//     printf("enter radius of circle:");
//     scanf("%f", &radius);
//     area = 3.1415 * radius * radius;
//     printf("\narea of circle is :%.2f", area);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     float p, t, r, s;
//     system("clear");

//     printf("enter principle amount:");
//     scanf("%f", &p);
//     printf("enter time in months:");
//     scanf("%f", &t);
//     printf("enter rate of interest:");
//     scanf("%f", &r);
//     system("clear");

//     s = (p * t * r) / 100;
//     printf("\nsimple interest is:%.2f", s);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int age;
//     system("clear");
//     printf("enter your age:");
//     scanf("%d", &age);
//     if (age >= 18)
//     {
//         printf("you are eligibile for voting");
//         printf("\nyou are major");
//     }
//     printf("\nthank you");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int age;
//     system("clear");
//     printf("enter your age:");
//     scanf("%d", &age);
//     if (age >= 18)
//     {
//         printf("you are eligible for voting");
//         printf("\nyour are major");
//     }
//     else
//     {
//         printf("you are not eligibile for voting");
//         printf("\nyou are minor");
//     }
//     printf("\nthank you");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a, b, c;
//     system("clear");
//     printf("enter values of a,b,c:");
//     scanf("%d%d%d", &a, &b, &c);
//     if (a > b && a > c)
//     {
//         printf("\na is greater than b and c");
//     }
//     else if (b > c && b > a)
//     {
//         printf("\nb is greater than a and c");
//     }
//     else if (c > a && c > a)
//     {
//         printf("\nc is greater than a and b");
//     }
//     else
//     {
//         printf("all are equal");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int cday, cmonth, cyear;
//     int bday, bmonth, byear;
//     int age;

//     system("clear");

//     printf("enter your current DD MM YYYY: ");
//     scanf("%d%d%d", &cday, &cmonth, &cyear);

//     printf("enter your birth DD MM YYYY:");
//     scanf("%d%d%d", &bday, &bmonth, &byear);

//     age = cyear - byear;
//     if (cmonth < bmonth || (cmonth == bmonth && cday < bday))
//     {
//         age--;
//     }
//     printf("your age is %d years\n", age);
//     return 0;
// }

// nested if statement
//     syntax;
//     if(condition1)
//     {
//         if(condition2)
//         {
//             if (condition3)
//             {
//                 // code to be executed if all conditions are true
//             }
//             else
//             {
//                 // code to be executed if condition3 is false
//             }
//         else
//         {
//             // code to be executed if condition2 is false
//         }
//     }
//     else
//     {
//         // code to be executed if condition1 is false
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a;
//     system("clear");
//     printf("enter a value:");
//     scanf("%d", &a);
//     if (a > 0)
//     {
//         printf("a is positive");
//         if (a % 2 == 0)
//         {
//             printf("\na is even");
//         }
//         else
//         {
//             printf("\na is odd");
//         }
//     }
//     else if (a < 0)
//     {
//         printf("a is negative");
//     }
//     else
//     {
//         printf("a is zero");
//     }
//     return 0;
// }
