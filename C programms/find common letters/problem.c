#include <stdio.h>

int main() {
    char s[51], s1[51];
    fgets(s, 51, stdin);
    fgets(s1, 51, stdin);
    int k = 0, m = 0, n=0, a, b, j=0, detector = 0;
    while (k < strlen(s1))
    {
        a = s1[k];
        m = 0;
        n = 0;
        j = 0;
        while (m < strlen(s))
        {
            b = s[m];
            if (a==b)
            {
                n++;
            }
            m++;
        }
        m=0;
        while (m < strlen(s1))
        {
            b = s1[m];
            if (a==b)
            {
                j++;
            }
            m++;
        }
        if (n<j)
        {
            detector = 0;
            break;
        }
        else
        {
            detector = 1;
        }
        k++;
    }
    if (detector == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
