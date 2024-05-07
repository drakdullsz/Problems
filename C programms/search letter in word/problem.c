#include <stdio.h>

int main() {
  int n, i=0, k=-1, m=-1, c;
  char a[100], b;
  scanf("%c", &b);
  n = b;
  while (i<100)
  {
      if (k!=-1)
      {
          break;
      }
      scanf("%c", &a[i]);
      c = a[i];
      if (c==n)
      {
          k=i;
      }
      i++;

  }
    if (k!=-1)
    {
        printf("%d", k-1);
    }
    else
    {
        printf("%d", k);
    }
    return 0;
}
