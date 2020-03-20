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
      
        std::vector<Token<std::string>> get_token(); 
      private:
        template<typename T>
        Token<T> add_token(const std::string&, T v); 
        
        template<typename T>
        friend std::ostream& operator << (std::ostream& os, const Token<T>&);

      private:
        const std::string in;
        std::vector<Token<std::string>> tokens;
    };
  }
}

#endif

