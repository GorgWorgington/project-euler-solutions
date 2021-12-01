/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* reverse:  reverse string s in place */
void reverse(char s[])
{
    int i, j;
    char c;

    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}


int isPalindrome(int x)
{
        char s1[36];
        char s2[36];
        sprintf(s1, "%d", x);
        strcpy(s2, s1);
        reverse(s2);
        if (!strcmp(s1, s2))
                {return 1;}
        else
                {return 0;}
}

int main()
{
        int a = 999;
        int b = 999;
        int prod;
        int la, lb;
        int lp = 0;
        while (a >= 100)
        {
                while (b >= 100)
                {
                        prod = a * b;
                        if (isPalindrome(prod))
                        {
                                if (prod > lp)
                                {
                                        la = a;
                                        lb = b;
                                        lp = prod;
                                }
                        }
                        --b;
                }
                --a;
                b = a;
        }
        printf("%d * %d = %d\n", la, lb, lp);
        return 0;
}
