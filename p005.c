/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include <stdio.h>


int check(int x)
{
        int d;
        for (d = 2; d <= 20; d++)
        {
                if (x % d)
                {
                        return 0;
                }
        }
        return 1;
}

int main()
{
        int x = 20;
        while (!check(x))
        {
                x += 20;
        }
        printf("%d\n", x);
}
