#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

int moveright(int *arr, int key, int last) {
  // TODO: ваш код здесь
  int i = 0, j, tmp;
  while (i<last){
    if (arr[i] > key){
        tmp = arr[i];
        arr[i] = key;
        arr[last] = tmp;
        j = i;
        while (j<last ){
            if (arr[j]>arr[last]){
                tmp = arr[last];
                arr[last] = arr[j];
                arr[j] = tmp;
                j = i;
            }
            j++;
        }
        break;
    }
    i++;
  }
  return last;
}

void inssort(int *arr, int len) {
  int i;
  for (i = 0; i < len; ++i) {
    int key, pos;
    key = arr[i];
    pos = moveright(arr, key, i);
    arr[pos] = key;
  }
}

int main()
{
    int n, i=0;
    scanf("%d", &n);
    int ar[n];
    while(i<n){
        scanf("%d", &ar[i]);
        i++;
    }
    inssort(ar, n);
    i = 0;
    while (i<n){
        printf("%d ", ar[i]);
        i++;
    }
    return 0;
}
