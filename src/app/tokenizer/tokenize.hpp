#ifndef toyc_tokenizer_header
#define toyc_tokenizer_header

#include "token.hpp"

#include <cstdlib> 
#include <cstring> 
#include <iostream>
#include <ostream>
#include <ostream>
#include <string>
#include <vector>
#include <regex>
#include <locale>


using std::cout;
using std::ostream;
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
        
        void run();
        
        template<typename T>
        Token<T> add_token(const string&, T v); 
        
        template<typename T>
        friend ostream& operator << (ostream& os, const Token<T>&);
        
        ~Tokenize() {}
        
      private:
        const string in;
        vector<Token<string>> tokens;
    };
  }
}

#endif

