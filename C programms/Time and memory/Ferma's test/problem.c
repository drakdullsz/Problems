#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>
unsigned long long prd_m(unsigned long long a, unsigned long long b, unsigned long long m){
    unsigned long long a1 = a, b1 = b, pr1 = 0;
    while (a1 > 0ULL)
        {
            if ((a1 % 2) == 1)
                {
                if (((pr1/2 + b1/2))%m<9223372036854775808ULL){
                    pr1  = (pr1 + b1)%m;
                }
                else {
                    pr1 = (-(18446744073709551615ULL - (pr1 + b1)))%m;
                }
                }
            if ((b1%m) >= 9223372036854775808ULL)
                {
                b1 = (-(18446744073709551615ULL - 2*b1))%m;
                }
            else {
                b1 = ((b1%m)*(2%m))%m;
            }
            a1 = a1/2;
        }
    return pr1%m;
}



unsigned long long pow1(unsigned long long x, unsigned long long y, unsigned long long n)
{
    unsigned long long s = 1;
    while (y>0)
        {
            if (y%2 == 1)
                {
                    s = prd_m(s,x,n)%n;
                }
            y = y/2;
            x = prd_m(x, x, n)%n;
        }
    return s%n;
}
unsigned long long absl(unsigned long long a){
    return (a>=0) ? a : -a;
}

int main()
{
    unsigned long long p, a;
    int res, cnt = 0;
    res = scanf("%llu", &p);
    assert(res==1);
    a = 2;
    while ((a%p)==0)
                {
                    a = (unsigned long long)(rand());
                    a = absl(a);
                }
    while(cnt<100){
    if ((pow1(a, (p-1), p))==1)
        {
            a = rand();
            while ((a%p)==0)
                {
                    a = (unsigned long long)(rand());
                    a = absl(a);
                }
            cnt++;
        }
    else
        {
            break;
        }
    }
    if (cnt>=100){
        printf("%d", 1);
    }
    else {
        printf("%d", 0);
    }
    return 0;
}
