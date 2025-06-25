#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
long long iabs(long long x)
{
    return (x<0)? -x:x;
}

long long gcd(long long x, long long y) {
  long long q=1;
  x = iabs(x);
  y = iabs(y);
  assert(x!=0 && y!=0);
  while (q!=0){
    if (x <=0 || y <= 0)
    {
        break;}
    if (y > x)
    {
        q = y % x;
        y = q;}
    else {
        q = x % y;
        x = q;}
  }
  if (x==0 && y!=0)
    {
        return y;
    }
  if (y==0 && x!=0)
    {
        return x;
    }
}
int main() {
    // put your code here
    long long x, y, tmp, g, b1_a1=1, b1_a2=0, b2_a1=0, b2_a2=1, a1, a2, x1, y1, b_c;
    int res;
    res = scanf("%lld%lld", &x, &y);
    assert(res == 2);
    g = gcd(x, y);
    x1 = iabs(x/g);
    y1 = iabs(y/g);
    b_c = x1/y1;
    if (y1!=1){
        while ((x1%y1)!=1)
        {
            b_c = x1/y1;

            tmp = b1_a1;
            b1_a1 = b_c*b1_a1 + b2_a1;
            b2_a1 = tmp;


            tmp = b1_a2;
            b1_a2 = b_c*b1_a2 + b2_a2;
            b2_a2 = tmp;

            tmp = x1;
            x1 = y1;
            y1 = tmp%y1;
        }}
    b_c = x1/y1;
    if (y1 == 1)
        {
            b_c = x1-1;
        }
    a2 = (-b2_a1 - b_c*b1_a1)/(b2_a2*b1_a1 - b1_a2*b2_a1);
    a1 = (1 - b1_a2*a2)/b1_a1;

    while ((x*a1 + y*a2) != g)
        {
            a1 = -1*a1;
            if ((x*a1 + y*a2) != g)
                {
                    a2 = -1*a2;
                }
        }


    printf("%lld %lld %lld\n", a1, a2, g);

    return 0;
}
