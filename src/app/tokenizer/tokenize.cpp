#include "./tokenize.hpp"
#include <vector>

namespace toyc 
{
  namespace app
  {
    std::ostream & operator << (std::ostream& os, const Token& t)
    {
      return os 
        << "{ type: " 
        << t.type 
        << ", value: "
        << t.value 
        << " }";
    }

    Tokenize::Tokenize(const std::string& input)
      : in(input)
    {
      size_t i = 0; 

      while(i < in.size())
      {
        if (std::isspace(in[i]))
        {
          ++i;
        }
        
        if (in[i] == '(' || in[i] == ')')
        {
          tokens.push_back(add_token("paren", std::string(1, in[i])));
          ++i;
        }

        if (in[i] == '\'')
        {
          std::string j = ""; 
          while((i+1) < in.size() && in[i+1] != '\'' && std::isalpha(in[(i+1)])) 
          {
            j += std::string(1, in[i+1]);
            ++i;
          }
          tokens.push_back(add_token("string", j));
          ++i;
        }
       
        if (std::isdigit(in[i]))
        {
          std::string j = std::string(1, in[i]);
          while((i+1) < in.size() && std::isdigit(in[(i+1)])) 
          {
            j += in[i+1]; 
            ++i;
          }
          tokens.push_back(add_token("number", j));
        }
        
        if (std::isalpha(in[i]))
        {
          std::string j = std::string(1, in[i]);
          while((i+1) < in.size() && std::isalpha(in[(i+1)])) 
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
        std::cout << token << '\n'; 
      }  
    }
    
    Token Tokenize::add_token(const std::string& type, std::string value)
    {
      return Token {type, value}; 
    }
    
    std::vector<Token> Tokenize::get_token()
    {
      return tokens;
    } 
  }
}


