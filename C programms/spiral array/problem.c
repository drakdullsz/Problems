#include <stdio.h>

int main() {
  int N, M, i = 0, j=0, k=0, i1=0, j1=0;
  scanf("%d %d", &N, &M);
  int a[N][M];
  if (N>1 && M >1)
    {
  while (k<= N*M)
  {
  while (j<(M-j1))
    {
        k++;
        a[i][j] = k;
        j++;
        if ( k==(N*M))
        {
            break;
        }
    }
    if ( k==(N*M))
        {
            break;
        }
  while (i<(N-i1))
    {
        i++;
        k++;
        a[i][M-1-j1] = k;
        if (i==(N-1-i1) || k==(N*M))
            {
                break;
            }
    }
    if ( k==(N*M))
        {
            break;
        }
  while (j>j1)
    {
        j--;
        a[N-1-i1][j] = k;
        if (j==j1 || k==(N*M))
            {
                break;
            }
        k++;
    }
    if ( k==(N*M))
        {
            break;
        }
     while (i>(i1+1))
    {
        a[i][j1] = k;
        i--;
        k++;
        if (i==(i1+1) || k==(N*M))
            {
                a[i][j1] = k;
                break;
            }
    }
    if (k==(N*M)){break;}
    j1++;
    i1++;
    i = i1;
    j = j1;
  }
}
  if (N==1 && M ==1)
    {
        a[i][j]=k+1;
    }
  if (N==1 && M>1)
    {
        while (j< M)
            {
                k++;
                a[i][j]=k;
                j++;
            }
    }
    if (N>1 && M==1)
        {
            while (i< N)
                {
                    k++;
                    a[i][j]=k;
                    i++;
                }
        }
  i = 0;
  j = 0;
  while (i<N)
  {
      j=0;
      while (j<M)
      {
          printf("%3d", a[i][j]);
          j++;
      }
      printf("\n");
      i++;
  }
  return 0;
}
