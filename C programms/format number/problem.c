#include <stdio.h>

int main() {
  int k=0, N, b, m, c, n=0;
  int a[10], s[10];
  scanf("%d", &N);
  b = N;
  while (b>0)
  {
      c = b%10;
      a[k] = c;
      k++;
      b = b/10;
  }
  while (n<k)
  {
      s[n] = a[k-n-1];
      n++;
  }
  n = 0;
  m = k%3;
  c = k/3;
  if (k>3)
  {
  while (n < m)
  {
      printf("%d", s[n]);
      n++;
  }
  if (m!=0)
  {
      printf(" ");
  }
  while (n < k)
  {
      if ((n+3) < k)
      {
          printf("%d%d%d ", s[n], s[n+1], s[n+2]);
      }
      else
      {
         printf("%d%d%d", s[n], s[n+1], s[n+2]);
      }
      n=n+3;
  }
  }
  else
  {
      printf("%d", N);
  }
  return 0;
}
