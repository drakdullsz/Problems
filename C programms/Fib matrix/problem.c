#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void fib_mod(unsigned long long *a0, unsigned long long *a1, unsigned long long *a2, unsigned long long *a3, unsigned long long *n, unsigned long long *m) {

    unsigned long long b0 = 1, b1 = 0, b2 = 0, b3 = 1, k = 1, tmp1, tmp2, tmp3, tmp4, n1 = *n, m1 = *m, ar0 = *a0, ar1 = *a1, ar2 = *a2, ar3 = *a3;
    while (n1>0)
        {
            if ((n1%2) == 1)
                {
                    tmp1 = b0;
                    tmp2 = b1;
                    tmp3 = b2;
                    tmp4 = b3;
                    b0 = (tmp1*(ar0) + tmp2*(ar2))%m1;
                    b1 = (tmp1*(ar1) + tmp2*(ar3))%m1;
                    b2 = (tmp3*(ar0) + tmp4*(ar2))%m1;
                    b3 = (tmp3*(ar1) + tmp4*(ar3))%m1;
                }
            tmp1 = ar0;
            tmp2 = ar1;
            tmp3 = ar2;
            tmp4 = ar3;
            ar0 = (tmp1*tmp1 + tmp2*tmp3)%m1;
            ar1 = (tmp1*tmp2 + tmp2*tmp4)%m1;
            ar2 = (tmp3*tmp1 + tmp4*tmp3)%m1;
            ar3 = (tmp3*tmp2 + tmp4*tmp4)%m1;
            n1 = n1/2;
        }

        *a0 = b0;
        *a1 = b1;
        *a2 = b2;
        *a3 = b3;
}

int main() {
    // put your code here
    unsigned long long n, m, a0, a1, a2, a3;
    int res;
    res = scanf("%llu%llu%llu%llu%llu%llu", &a0, &a1, &a2, &a3, &n, &m);
    assert(res == 6);
    fib_mod(&a0, &a1, &a2, &a3, &n, &m);
    printf("%llu %llu %llu %llu\n", a0, a1, a2, a3);
    return 0;
}
