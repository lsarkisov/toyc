#include "./tokenize.hpp"
#include <vector>

namespace toyc 
{
  namespace app
  {
    Tokenize::Tokenize(const string& input)
      : in(input) {}

    void Tokenize::run()
    {
      size_t i = 0; 

      while(i < in.size())
      {
        switch(in[i])
        {
          case '(':
            cout << "this is ( char\n";
            tokens.push_back(add_token("parent", in[i]));
            break;
          default:
            cout << "default case\n";
        }
        ++i;  
      }
    cout << tokens.size() << '\n';
    }
    Token Tokenize::add_token(const string& type, const char value)
    {
      return Token {type, value}; 
    }
  }
}


