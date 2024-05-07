#include <stdio.h>
void print_date(int d, int m, int y, int k){
    if (k==0)
    {
        printf("%d%d.%d%d.%d%d", d/10, d%10, m/10, m%10, (y/10)%10, y%10);
    }
    if (k==1)
    {
        printf("%d%d.%d%d.%d", d/10, d%10, m/10, m%10, y);
    }
    if (k==2)
    {
        printf("%d/%d%d/%d%d", y, m/10, m%10,  d/10, d%10);
    }
}
int main(){
    int d, m, y, k;
    scanf("%d %d %d %d", &d, &m, &y, &k);
    print_date(d, m, y, k);
    return 0;
}
