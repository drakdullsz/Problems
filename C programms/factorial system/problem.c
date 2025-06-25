#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long faq(unsigned long long n){
    unsigned long long k = 0, s = 1;
    while(k<n)
        {
            k++;
            s = s*k;
        }
    return s;
}



int main() {
    // put your code here
    unsigned long long x, y, s = 0, n = 1, k = 1;
    int res;
    res = scanf("%llu", &x);
    assert(res == 1);


    while (x > faq(n))
            {
                n++;
                if (faq(n)>x) {n = n-1; break;}
            }
    while (n>0)
        {
        k = 0;
        while (k*faq(n) < x)
            {
                k++;
                if (faq(n)*k > x ) {k = k-1; break;}
            }

        s = s + k*faq(n);
        x = x - k*faq(n);
        printf("%llu.", k);
        n--;
        }
    return 0;
}
