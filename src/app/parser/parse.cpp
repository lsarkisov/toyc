#include "parse.hpp"

namespace toyc 
{
  namespace app
  {
    Parse::Parse(const std::vector<Token<std::string>>& token)
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
      std::for_each(token.begin(), token.end(), [&](auto& t) {
          std::cout << "{ " << t.type << ", " << t.value << " }\n"; 
      });

    };    
    
    Parse::~Parse()
    {
      std::cout << "Destructor of Parse()\n";
    };    
  }
}


