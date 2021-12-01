/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <stdio.h>


int isPrime(long int x)
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
        long int prod = 600851475143;
        long int x = 3;
        long int largest_prime = 1;

        while (x < prod)
        {
                while (prod % x == 0)
                {
                        prod = prod / x;
                        if (isPrime(x))
                        {
                                largest_prime = x;
                        }
                }
                x += 2;
        }
        if (prod > largest_prime && isPrime(prod))
                largest_prime = prod;
        printf("%d\n", largest_prime);
        return 0;
}
