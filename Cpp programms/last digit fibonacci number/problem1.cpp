#include <cassert>
#include <iostream>

class Fibonacci {
 public:
  static int get_last_digit(int n) {
    assert(n >= 1);
    int a = 0, b = 1, k = 1;
    while (k<n)
        {
            a = (a+b)%10;
            b = (b+a)%10;
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
  std::cout << Fibonacci::get_last_digit(n) << std::endl;
  return 0;
}
