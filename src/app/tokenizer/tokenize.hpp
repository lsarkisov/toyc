#ifndef toyc_tokenizer_header
#define toyc_tokenizer_header

#include "token.hpp"

#include <iostream>
#include <ostream>
#include <ostream>
#include <string>
#include <vector>
#include <regex>
#include <locale>

namespace toyc 
{
  namespace app
  {
    class Tokenize {
      public:
        explicit Tokenize(const std::string&);
        
        ~Tokenize() {}
      
        std::vector<Token> get_token(); 
      
      private:
        Token add_token(const std::string&, std::string v); 
        
        friend std::ostream& operator << (std::ostream& os, const Token&);

      private:
        const std::string in;
        std::vector<Token> tokens;
    };
  }
}

#endif

