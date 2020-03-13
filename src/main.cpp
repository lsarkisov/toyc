#include "app/test.hpp"

#include <iostream>

using std::cout;

int main()
{
  cout << "Hello, Compiler\n";
  
  toyc::app::Test* test = new toyc::app::Test();
  test->shay_hi();
    
  return 0;
}
