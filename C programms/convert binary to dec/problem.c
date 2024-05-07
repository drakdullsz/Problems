#include <stdio.h>
#include <math.h>
#include <stdint.h>
int main() {
  unsigned long long a[21], N, n = 0, b, c;
  scanf("%llu", &N);
  b = N;
  while (b > 0)
    {
        c = b%10;
        a[n] = c;
        b = b/10;
        n++;
    }
    int k = 0;
    double f=0.0;
    while (k < n)
        {
            f = a[k]*pow(2, k) + f;
            k++;
        }
    int h = (int)f;
    printf("%d", h);
    return 0;
}
