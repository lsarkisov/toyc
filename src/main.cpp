#include "app/tokenizer/tokenize.hpp"
#include "app/tokenizer/token.hpp"
#include "app/parser/parse.hpp"

#include <iostream>
#include <vector>

int main()
{
  std::cout << "Hello, Compiler\n";
  
  std::string expr = "var i = 'abc'; add(274, subtract(4, 2))";
  toyc::app::Tokenize* t = new toyc::app::Tokenize(expr);
  std::vector<toyc::app::Token> tokens = t->get_token();

  new toyc::app::Parse(tokens);

  return 0;
}


