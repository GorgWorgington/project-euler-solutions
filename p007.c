/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <stdio.h>


int isPrime(int x)
{
        if (x <= 1) return 0;
             //if (x % 2 == 0 && x > 2) return 0;
             for(int i = 3; i < x / 2; i+= 2)
             {
                 if (x % i == 0)
                     return 0;
             }
             return 1;
}

int main()
{
        int x = 3;
        int i = 2;

        while (i < 10001)
        {
                x += 2;
                if (isPrime(x))
                {
                        ++i;
                }
        }

        printf("%d\n", x);
        return 0;
}
