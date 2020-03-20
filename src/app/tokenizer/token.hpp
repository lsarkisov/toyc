#ifndef toyc_token_header
#define toyc_token_header

#include <string>

namespace toyc
{
  namespace app
  {
    template<typename T>
    struct Token
    {
      Token(const std::string& t, T v)
        : type(t), value(v)
      {
      }

      std::string type;
      T value; 
    };
  }
}
#endif

