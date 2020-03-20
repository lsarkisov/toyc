#ifndef toyc_parse_header
#define toyc_parse_header

#include "../tokenizer/token.hpp"
#include "./ast.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

namespace toyc 
{
  namespace app
  {
    class Parse
    {
      public:
        explicit Parse(const std::vector<Token<std::string>>&);
        ~Parse();

      private:
    };    
  }
}

#endif

