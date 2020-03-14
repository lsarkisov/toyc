#ifndef toyc_token_header
#define toyc_token_header

#include <string>

using std::string;

namespace toyc
{
  namespace app
  {
    template<typename T>
    struct Token
    {
      Token(const string& t, T v)
        : type(t), value(v)
      {
      }

      string type;
      T value; 
    };
  }
}
#endif

