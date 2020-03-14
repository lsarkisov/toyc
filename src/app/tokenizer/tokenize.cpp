#include "./tokenize.hpp"
#include <vector>

namespace toyc 
{
  namespace app
  {
    Tokenize::Tokenize(const string& in)
    {
      int i = in.size();

      while(i > 0)
      {
        switch(in[i])
        {
          case '(':
            cout << "this is ( char\n";
            break;
          default:
            cout << "default case\n";
        }
        --i;  
      }
    
    }
    void Tokenize::shay_hi()
    {
      cout << "I am a Tokenize\n";
    }
  }
}


