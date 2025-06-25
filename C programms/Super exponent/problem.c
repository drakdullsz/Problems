#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long pow1(unsigned long long x, unsigned long long y, unsigned long long n)
{
    unsigned long long s = 1;
    while (y>0)
        {
            if (y%2 == 1)
                {
                    s = (s*x)%n;
                }
            y = y/2;
            x = (x*x);
        }
    return s;
}



int main() {
    // put your code here
    unsigned long long x, y, s, n, z;
    int res;
    res = scanf("%llu%llu%llu", &x, &y, &n);
    assert(res == 3);
    s = x;
    z = x;
    while (y>1)
        {
            x = pow1(x, z, n)%n;
            y = y - 1;
        }
    printf("%llu\n", x%n);
    return 0;
}
