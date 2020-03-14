#ifndef toyc_tokenizer_header
#define toyc_tokenizer_header

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

namespace toyc 
{
  namespace app
  {
    class Tokenize {
      public:
        Tokenize(const string&);
        void shay_hi();
        ~Tokenize() {}
      private:
        vector<string> tokens;

    };
  }
}

#endif

