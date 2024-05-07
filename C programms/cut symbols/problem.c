#include <stdio.h>

int main() {
    char s[101];
    fgets(s, 101, stdin);
    int k=0, a, b, n=0;
    while (k<strlen(s))
    {
        a = s[k];
        b = s[k+1];
        if (a==47 && b == 42 && k!= (strlen(s)-2))
        {
            break;
        }
        printf("%c", s[k]);
        k++;
    }
    k = k+2;
    a = s[k];
    b = s[k+1];
    n = k;
    while (a != 42 && b!= 47)
    {
        if (k > strlen(s))
        {
            break;
        }
        a = s[k];
        b = s[k+1];
        k++;
    }
    if (k > strlen(s))
    {
        n = n-2;
        while (n<strlen(s))
        {
            printf("%c", s[n]);
            n++;
        }
    }
    k = k+1;
    if (b==47 && a!=42)
    {
        k = k+2;
    }
    while (k<strlen(s))
    {
        printf("%c", s[k]);
        k++;
    }
    return 0;
}
