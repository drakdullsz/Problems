#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct sieve_t {
  int n;
  unsigned char *s;
};



void fill_sieve(struct sieve_t *sv) {
    //
    long long k = 0, m, k1 = 0;
    unsigned char bit = 2;
    sv->s[0] = 0x53;
    while (k<(sv->n))
    {
        k1 = k;
        if (((sv->s[k]>>bit)&1)==0)
        {
            m = 8*k+bit;
            while ((m*(8*k+bit)) < (sv->n * 8))
            {
                k1 = (m*(8*k+bit))/8;
                sv->s[k1] = sv->s[k1] | (1 << (m*(8*k+bit))%8);
                if ((k==0) && (bit==2)){
                    m++;
                }
                else{
                    m = m+2;
                }
            }
        }
        bit++;
        if (bit>=8)
        {
            bit = 0;
            k++;
        }
    }
}

int is_prime(struct sieve_t *sv, unsigned n) {
    //
    unsigned k = n/8;
    unsigned char bit = n%8;
    if (((sv->s[k] >> bit)&1) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct sieve_t sv;
    int n1, k1;
    scanf("%d", &n1);
    sv.n = n1;
    sv.s = (unsigned char*)calloc(sv.n, sizeof(unsigned char));
    fill_sieve(&sv);
    k1 = 0;
    while (k1 < n1){
        printf("%x\n", sv.s[k1]);
        k1++;
    }
    free(sv.s);
    return 0;
}
