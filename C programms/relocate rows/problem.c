#include <stdio.h>

int main() {
  int N, M, i=0, j=0, s=0;
  scanf("%d %d", &N, &M);
  int a[N][M], b[M], c[N][M], d[M];
  while (i<N)
  {
      j = 0;
      while (j<M)
      {
          scanf("%d", &a[i][j]);
          c[i][j] = a[i][j];
          j++;
      }
      i++;
  }
    i=0;
    j = 0;
    while (j<M)
    {
        i=0;
        s = 0;
        while (i<N)
        {
            s = s+a[i][j];
            i++;
        }
        b[j] = s;
        d[j] = s;
        j++;
    }
    int maxs = b[0], mins = b[0], k=0, n=0;
    i = 0;
    j = 0;
    while (j<M)
    {
        if (b[j] >= maxs)
        {
            maxs = b[j];
            k = j;
        }
        if (b[j] <= mins)
        {
            mins = b[j];
            n = j;
        }
        j++;
    }
    i = 0;
    j = 0;
    while (j<M)
    {
        if (b[j]== maxs)
        {
            k=j;
            break;
        }
        j++;
    }
    j=0;
    while (j<M)
    {
        if (b[j]== mins)
        {
            n=j;
            break;
        }
        j++;
    }
    j=0;
    while (i<N)
    {
        j = 0;
        while (j<M)
        {
            if (j==k)
            {
                c[i][j] = a[i][n];
            }
            if (j == n)
            {
                c[i][j] = a[i][k];
            }
            printf("%d ", c[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    //printf("\n%d %d", k, n);
    return 0;
}
