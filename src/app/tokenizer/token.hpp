#ifndef toyc_token_header
#define toyc_token_header

#include <string>

using std::string;

namespace toyc
{
  namespace app
  {
    struct Token
    {
      Token(const string& t, const char v)
      : type(t), value(v) { }
      string type;
      char value; 
    };
  }
}
#endif

