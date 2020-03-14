#include "./tokenize.hpp"
#include <vector>

namespace toyc 
{
  namespace app
  {
    Tokenize::Tokenize(const string& input)
      : in(input) {}
    void Tokenize::run()
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
      cout << "I am a Tokenize\n";
    }
  }
}


