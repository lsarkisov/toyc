#ifndef toyc_token_header
#define toyc_token_header

#include <string>

namespace toyc
{
  namespace app
  {
    struct Token
    {
      Token(const std::string& t, std::string v)
        : type(t), value(v)
      {
      }

      std::string type;
      std::string value; 
    };
  }
}
#endif

