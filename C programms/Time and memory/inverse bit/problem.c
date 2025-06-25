#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int n, k = 0, i, n2 = 0;
    scanf("%d", &n);
    unsigned char *a = calloc(n, sizeof(int)), n1, bit;
    while (k<n)
        {
            scanf("%d", &a[k]);
            k++;
        }
    scanf("%d", &n2);
    i = n2/8;
    bit = n2%8;
    a[i] = a[i]^(1<<bit);
    k = 0;
    while(k<n)
        {
            printf("%d ", a[k]);
            k++;
        }
    free(a);
    return 0;
}
