#include "parse.hpp"

namespace toyc 
{
  namespace app
  {
    Parse::Parse(const std::vector<Token>& token)
    {
      /*
        {
          type: 'Program',
          body: [{
            type: 'CallExpression',
            name: 'add',
            params: [{
              type: 'NumberLiteral',
              value: '2'
            }, {
              type: 'CallExpression',
              name: 'subtract',
              params: [{
                type: 'NumberLiteral',
                value: '4'
              }, {
                type: 'NumberLiteral',
                value: '2'
              }]
            }]
          }]
        }
      */
      
      std::for_each(token.begin(), token.end(), [i=0](auto& t) mutable {
        if (t.type == "string")
        {
          
        }
        std::cout << i << ". { " << t.type << ", " << t.value << " }\n";
         ++i; 
      });

    };    
    
    Parse::~Parse()
    {
      std::cout << "Destructor of Parse()\n";
    };    
  }
}


