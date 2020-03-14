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
        if (in[i] == ' ')
        {
          ++i;
          continue;
        }
        
        if (in[i] == '(' || in[i] == ')')
        {
            tokens.push_back(add_token("paren", in[i]));
            ++i;
            continue;
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


