#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

int main()
{
    int n, k = 2, res, p, fl, m = 0, sza;
    res = scanf("%d", &n);
    assert(res == 1);
    double n1 = (double)n;
    if (n>1)
        {
            sza = (int)(2.0*n1*(log(n1)+log(log(n1))));
        }
    else
        {
            sza = n;
        }
    char *a = calloc(sza, sizeof(int));
    a[2] = 1;
    while (m < n)
        {
            p = 2;
            fl = 0;
            while ((p*p)<=k)
            {
                if ((k%p) == 0)
                {
                    fl = 1;
                    break;
                }
                p++;
            }
            if (fl==0)
                {
                    a[k] = 1;
                    m = m + a[k];
                }
            k++;

        }
    printf("%d", (k-1));
    free(a);
    return 0;
}
