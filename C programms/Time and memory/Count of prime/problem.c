#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int n, k = 1, res, m = 2, p, fl, *a = malloc(1000000 * sizeof(int));
    res = scanf("%d", &n);
    assert(res == 1);
    a[0] = 1;
    a[1] = 2;
    while(m <= n)
        {
            fl = 0;
            p = 1;
            while ((a[p]*a[p]) <= m)
                {
                    if ( (m%a[p]) == 0)
                        {
                            fl = 1;
                            break;
                        }
                    p++;
                }

            if (fl==0)
            {
                a[k] = m;
                k++;
            }
            m++;
        }
    printf("%d", k-1);
    return 0;
}
