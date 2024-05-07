#include <stdio.h>

int main() {
  int N, i=0, j=0, s1 = 0, s2=0;
  scanf("%d", &N);
  int a[N][N];
  while (i<N)
  {
      j = 0;
      while (j<N)
      {
          scanf("%d", &a[i][j]);
          if (i<j)
          {
              s1 = s1 + a[i][j];
          }
          if ((i+j)>(N-1))
          {
              s2 = s2 + a[i][j];
          }
          j++;
      }
      i++;
  }
  if (s1>=s2)
  {
      printf("%d %d", s2, s1);
  }
  else
  {
      printf("%d %d", s1, s2);
  }
    return 0;
}
