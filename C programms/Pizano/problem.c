#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

unsigned long long fib(unsigned long long n, unsigned long long m) {
    unsigned long long a = 0, b = 1, k = 1;
    while (k<n)
        {
            a = (a+b)%m;
            b = (b+a)%m;
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

unsigned long long piz(unsigned long long m) {
    unsigned long long a = 0, b = 1, k = 1, flag = 0;

    if (m == 1)
        {
            flag = 1;
            k = 1;
        }
    if (m == 2)
        {
            flag = 1;
            k = 3;
        }
    while (flag == 0)
        {
            a = (a+b)%m;
            if (a==0 && b==1)
                {
                    k = k+1;
                    break;
                }
            b = (b+a)%m;
            if (b==0 && ((b+a)%m) == 1)
                {
                    k = k+1;
                    break;
                }
            k = k+2;
        }
    return k;
}

int main(void) {
  unsigned long long n, m;
  int res;
  res = scanf("%llu%llu", &n, &m);
  assert(res == 2);
  n = n%piz(m);
  printf("%llu %llu", fib(n, m), piz(m));
  return 0;
}
