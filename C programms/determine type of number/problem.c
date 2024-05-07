#include <stdio.h>

int main() {
    char s[21];
    fgets(s, 21, stdin);
    int k = 0, a, n=0, m=0, p=0;
    while (k < (strlen(s)-1))
    {
        a = s[k];
        if (a < 48)
        {
            if (a!=46 && a!=45)
            {
            p++;
            }
        }
        if (a > 57)
            {
               p++;
            }
        if (a==46 && (k==0 || k==(strlen(s)-2)))
            {
            p++;
            }
        if (a==45 && k>0)
            {
                p++;
            }
        if (a==46 && k!=0 && k!=(strlen(s)-1))
        {
            n++;
        }
        k++;
    }
    if (p==0 && n<=1)
    {
        if (n==1)
        {
            printf("float");
        }
        if (n==0)
        {
            printf("int");
        }
    }
    else
    {
        printf("error");
    }
    return 0;
}
