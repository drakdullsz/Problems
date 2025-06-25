#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int n, k, res, n1 = 0, n2 = 0;
    res = scanf("%d", &n);
    assert(res == 1);
    k = n;
    if (n == 0)
        {
            printf("%d", -1);
        }
    else{
        while ((k&1)!=1)
            {
                k = k >> 1;
                n2++;
            }
        while (n!=0)
            {
                n = n >> 1;
                n1++;
            }
        printf("%d %d\n", n1-1, n2);
    }
    return 0;
}




