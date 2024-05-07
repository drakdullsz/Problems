#include <stdio.h>

int main() {
    int N, k=0, m=0, n=0, c, b[26];
    scanf("%d", &N);
    char a[N*2];
    while (k <= N*2)
    {
        scanf("%c", &a[k]);
        k++;
    }
    k=0;
    while (k<26)
    {
        b[k] = 0;
        k++;
    }
    k=0;
    while (k<26)
    {
        m=0;
        n=0;
    while (m < N*2)
    {
        c = (int)a[m];
        if (a[m]==(65+k) || a[m]==(97+k))
        {
            n++;
        }
        m++;
    }
    b[k] = n;
    k++;
    }
    k=0;
    while (k<26)
    {
        printf("%d ", b[k]);
        k++;
    }
    return 0;
}
