#include "app/tokenizer/tokenize.hpp"
#include "app/parser/parse.hpp"

#include <iostream>

using std::cout;

int main()
{
  cout << "Hello, Compiler\n";
  
  const string expr = "var i = 'abc'; add(274, subtract(4, 2))";
  toyc::app::Tokenize* test = new toyc::app::Tokenize(expr);
  test->run();

  new toyc::app::Parse();

  return 0;
}
