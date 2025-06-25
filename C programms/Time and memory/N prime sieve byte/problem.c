#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct sieve_t {
  int n;
  char *s;
};



void fill_sieve(struct sieve_t *sv) {
  //
    long long n = sv->n, k = 2, n1;
    sv->s[0] = 1;
    sv->s[1] = 1;
    sv->s[2] = 0;
    while (k<n)
    {
        n1 = 1;
        if (sv->s[k] == 0)
        {
            n1 = k;
                while (n1*k < n)
                {
                    sv->s[k*n1] = 1;
                    n1++;
                }
        }
        k++;
    }
}

int nth_prime(struct sieve_t *sv, int N) {
  //
    int n=N, k = 0, m = 0, sza;
    while (m<n)
    {
        if (sv->s[k] == 0)
        {
            m++;
        }
         k++;
    }
    return k-1;
}

int main()
{
    struct sieve_t sv;
    int n1, k1;
    scanf("%d%d", &n1, &k1);
    sv.n = n1;
    sv.s = (unsigned char*)calloc(sv.n, sizeof(unsigned char));
    fill_sieve(&sv);
    printf("%d\n", nth_prime(&sv, k1));
    free(sv.s);
    return 0;
}
