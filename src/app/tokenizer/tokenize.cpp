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
       
        if (isdigit(in[i]))
        {
          while(isdigit(in[i]))
          {
            cout << "IS DIGIT\n";
            ++i;
          }          
        }

        ++i;  
      }
      cout << tokens.size() << '\n';
    }
    
    template<typename T>
    Token<T> Tokenize::add_token(const string& type, T value)
    {
      return Token<T> {type, value}; 
    }
  }
}


