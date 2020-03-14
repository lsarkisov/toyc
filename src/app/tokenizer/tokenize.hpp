#ifndef toyc_tokenizer_header
#define toyc_tokenizer_header

#include "token.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using std::cout;
using std::string;
using std::vector;
using std::shared_ptr;
using std::make_shared;

namespace toyc 
{
  namespace app
  {
    class Tokenize {
      public:
        Tokenize(const string&);
        void run();
        Token add_token(const string&, const char); 
        ~Tokenize() {}
      private:
        const string in;
        vector<Token> tokens;

    };
  }
}

#endif

