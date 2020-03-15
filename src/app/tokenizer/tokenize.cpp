#include "./tokenize.hpp"
#include <vector>

namespace toyc 
{
  namespace app
  {
    
    template<typename T>
    ostream & operator << (ostream& os, const Token<T>& t)
    {
      return os 
        << "{ type: " 
        << t.type 
        << ", value: "
        << t.value 
        << " }";
    } 

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
        }
        
        if (in[i] == '(' || in[i] == ')')
        {
          tokens.push_back(add_token("paren", string(1, in[i])));
          ++i;
        }

        if (in[i] == '\'')
        {
          string j = ""; 
          while((i+1) < in.size() && in[i+1] != '\'' && isalpha(in[(i+1)])) 
          {
            j += string(1, in[i+1]);
            ++i;
          }
          tokens.push_back(add_token("string", j));
          ++i;
        }
       
        if (isdigit(in[i]))
        {
          string j = string(1, in[i]);
          while((i+1) < in.size() && isdigit(in[(i+1)])) 
          {
            j += in[i+1]; 
            ++i;
          }
          tokens.push_back(add_token("number", j));
        }
        
        if (isalpha(in[i]))
        {
          string j = string(1, in[i]);
          while((i+1) < in.size() && isalpha(in[(i+1)])) 
          {
            j += in[i+1]; 
            ++i;
          }
          tokens.push_back(add_token("name", j));
        }
        
        ++i;  
      }

      for(auto & token : tokens)
      {
        cout << token << '\n'; 
      }  
    }
    
    template<typename T>
    Token<T> Tokenize::add_token(const string& type, T value)
    {
      return Token<T> {type, value}; 
    }
  }
}


