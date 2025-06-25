#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


unsigned long long fib(unsigned long long n) {

    unsigned long long a = 1, b = 1, k = 1;
    while (k<n)
        {
            a = (a+b);
            b = (b+a);
            k = k+2;
        }
    if (n%2 == 0)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main() {
    // put your code here
    unsigned long long x, y, s = 0, n = 1, k = 1, i = 0;
    int res;
    res = scanf("%llu", &x);
    assert(res == 1);


    while (x > fib(n))
            {
                n++;
                if (fib(n)>x) {n = n-1; break;}
            }

    unsigned long long s1[n];

     while(n>0)
        {
            k = 0;
            if ((k*fib(n)) <  x)
                {
                    k = 1;
                    if ( (k*fib(n)) > x) { k = 0;}
                }
            s = s + k*fib(n);
            x = x - k*fib(n);
            n--;
            s1[n] = k;
            i++;
        }
    while(i > 0)
    {
        i--;
        printf("%llu", s1[i]);
    }
    return 0;
}
