#include <iostream>

//Only compiles
auto cpp_14() noexcept {
  return "Hello world\n";
}

#include <iostream>


void f()
{
  int sum = 0;
  for (int i=0; i!=10000000; ++i)
  {
    sum +=i;
  }
  std::cout << sum << '\n';
}

void g()
{
  int sum = 0;
  for (int i=0; i!=100000000; ++i)
  {
    sum +=i;
  }
  std::cout << sum << '\n';
}

#include <cassert>
int main()
{
  #ifndef NDEBUG
  #error Do not profile in debug mode
  #endif
  assert(!"Do not profile in debug mode");

  f();
  g();
  cpp_14();
}
