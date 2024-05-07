#include <stdio.h>
#include <string.h>
int main() {
  char s[101];
  fgets(s, 101, stdin);
  int k=0, n=0, a, b=0, c=0;
  while (k<strlen(s))
         {
             a = s[k];
             b = s[k+1];
             c = s[k-1];
             if (n==0 && k>0 && c!=32 && a==32)
             {
                 n++;
             }
             if (a==32 && b!=32 && k>0 && k<(strlen(s)-2))
             {
                 n++;
             }
             k++;
         }
  printf("%d", n);
  return 0;
}
