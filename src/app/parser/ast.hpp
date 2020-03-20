#ifndef toyc_ast_header
#define toyc_ast_header

#include <string>
#include <vector>

namespace toyc
{
  namespace app
  {
    struct Body
    {
      Body(const std::string& t, const std::string& n, const std::vector<Body>& p)
        : type(t), name(n), params(p)
      {
      }

      std::string type;
      std::string name;
      std::vector<Body> params;
    };
    
    struct AST 
    {
      explicit AST(const std::vector<Body>& b)
        : type("Program"), body(b) 
      {
      }
      
      std::string type; 
      std::vector<Body> body;  
    };
  }
}
#endif

