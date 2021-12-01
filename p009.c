/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>
#include <math.h>


int main()
{
        double a, b, c;
        a = 1.0f;
        b = 1.0f;
        c = 1.0f;

        while (a + b + c != 1000.0f)
        {
                while (a + b + c < 1000.0f)
                {
                        ++b;
                        c = sqrt(a*a + b*b);
                }
                if (a+b+c != 1000)
                {
                        b = 1;
                        ++a;
                }
                //printf("%d\n", a+b+c);
        }
        printf("a = %f\nb = %f\nc = %f\n abc = %f\n", a, b, c, a*b*c);
        return 0;
}
