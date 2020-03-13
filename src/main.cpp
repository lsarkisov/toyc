#include "app/tokenizer.hpp"

#include <iostream>

using std::cout;

int main()
{
  cout << "Hello, Compiler\n";
  
  toyc::app::Tokenizer* test = new toyc::app::Tokenizer();
  test->shay_hi();
    
  return 0;
}
