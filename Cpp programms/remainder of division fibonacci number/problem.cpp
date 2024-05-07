#include <cassert>
#include <iostream>

class Fibonacci {
 public:
  static int get_remainder(long long int n, int m) {
    assert(n >= 1);
    assert(m >= 2);
    int pi_m =1, a = 0, b = 1;
    int arr[6*m];
    arr[0]=0;
    arr[1]=1;
    while (pi_m<(6*m))
        {
            pi_m ++;
            arr[pi_m] = (arr[pi_m -1]%m + arr[pi_m-2]%m)%m;
            if ((arr[pi_m]%m == 0 && arr[pi_m -1]%m == 1)||(arr[pi_m -1]%m==0 && arr[pi_m]%m==1))
                {
                    break;
                }
        }
    return arr[n%pi_m];
  }
};

int main(void) {
  long long n;
  int m;
  std::cin >> n >> m;
  std::cout << Fibonacci::get_remainder(n, m) << std::endl;
  return 0;
}
