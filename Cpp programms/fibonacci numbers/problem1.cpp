#include <cassert>
#include <iostream>

class Fibonacci {
 public:
  static int get(int n) {
    assert(n >= 0);
    int a = 0, b = 1, k = 1;
    while (k<n)
        {
            a = a+b;
            b = b+a;
            k = k+2;
        }
    if (n%2 == 0)
    {
        return a;
    }
    else
    {
        return b;
    }
  }
};

int main(void) {
  int n;
  std::cin >> n;
  std::cout << Fibonacci::get(n) << std::endl;
  return 0;
}
