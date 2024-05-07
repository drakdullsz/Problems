#include <stdio.h>
#include <math.h>
int main() {
  int N, K, i=0, j=0;
  scanf("%d", &N);
  int a[N][N], b[N][N];
  while (i<N)
  {
      j=0;
      while(j<N)
      {
          scanf("%d", &a[i][j]);
          b[i][j] = a[i][j];
          j++;
      }
      i++;
  }
  scanf("%d", &K);
  i=0;
  j=0;
  while (i<N)
  {
      j=0;
      while (j<N)
      {
          b[i][j] = a[i][(((N-K+j))%N+N)%N];
          printf("%d ", b[i][j]);
          j++;
      }
      printf("\n");
      i++;
  }
  return 0;
}
