#ifndef toyc_tokenizer_header
#define toyc_tokenizer_header

#include "token.hpp"

#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <locale>


using std::cout;
using std::string;
using std::vector;
using std::shared_ptr;
using std::regex;
using std::regex_match;
using std::smatch;
using std::isdigit;

namespace toyc 
{
  namespace app
  {
    class Tokenize {
      public:
        Tokenize(const string&);
        
        template<typename T>
        Token<T> add_token(const string&, T v); 
        
        void run();
        
        ~Tokenize() {}
      
      private:
        const string in;
        vector<Token<char>> tokens;

    };
  }
}

#endif

