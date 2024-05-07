#include <cassert>
#include <iostream>

template <class Int>
Int gcd(Int a, Int b) {
  assert(a > 0 && b > 0);

  Int current_gcd = 1;
  Int c = a, d = b;
  while (c>0 || d>0)
    {
        if (c==0 || d==0)
            {
                break;
            }
        if (c>d)
            {
                c = c%d;
            }
        else
            {
                d = d%c;
            }
    }
  if (c==0)
    {
        current_gcd = d;
    }
  else
    {
        current_gcd = c;
    }
  return current_gcd;
}

int main(void) {
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
  return 0;
}
