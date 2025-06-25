#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    // put your code here
    unsigned long long x, y, a=0, r=1, tmp;
    int res;
    res = scanf("%llu %llu", &x, &y);
    assert(res == 2);
    while(r!=0)
    {
        a = x/y;
        printf("%llu ", a);
        r = x%y;
        x = x - a*y;
        if (y>x)
        {
            tmp = y;
            y = x;
            x = tmp;
        }
    }
    return 0;
}
