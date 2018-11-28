/* Write a program to print Fibonacci Series using recursion. The Fibonacci numbers are the numbers in the
following integer sequence
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

By definition, the First two Fibonacci  numbers are 0 and 1, and each subsequent number is the sum of the previous two

Fn = Fn-1 + Fn-2

With the seed values F0 = 0 and F1 = 1*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, f0 = 0, f1 = 1, fn;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", f0);
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return 0;
}
