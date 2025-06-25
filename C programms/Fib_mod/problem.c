#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

unsigned fib(unsigned n, unsigned m) {
    // put your code here
    unsigned a = 0, b = 1, k = 1;
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

int main(void) {
  unsigned n, m;
  int res;
  res = scanf("%u%u", &n, &m);
  assert(res == 2);

  printf("%u", fib(n, m));
  return 0;
}
