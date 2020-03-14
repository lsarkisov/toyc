#include "app/tokenizer/tokenize.hpp"

#include <iostream>

using std::cout;

int main()
{
  cout << "Hello, Compiler\n";
  
  const string expr = "add(2, subtract(4, 2))";
  toyc::app::Tokenize* test = new toyc::app::Tokenize(expr);
  test->run();
    
  return 0;
}
