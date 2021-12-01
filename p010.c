/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <stdio.h>


int isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return 0;
    if (n <= 3)  return 1;
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return 0;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return 0;

    return 1;
}

int main()
{
        int n = 5;
        long int sum = 5;
        while (n < 2000000)
        {
                if (isPrime(n))
                        sum += n;
                if (isPrime(n+2))
                        sum += n+2;
                n += 6;
                printf("%d\n", n);
        }
        printf("%ld\n", sum);
        return 0;
}
