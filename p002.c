#include <stdio.h>

int main()
{
        int sum = 0;
        int a = 1;
        int b = 1;
        int s;

        do {
                s = a+b;
                a = b;
                b = s;
                if ( !(s & 0x1) ) {sum += s;}
        } while (s <= 4000000);
        printf("%d\n", sum);
        return 0;
}
