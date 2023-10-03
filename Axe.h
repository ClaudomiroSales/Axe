#ifndef AXE_H
#define AXE_H

#include <string>
using std::string;

enum Color
   {
      RED,
      BLUE,
      WHITE
   };

class Axe
{
public:
    Axe( string = "", Color = RED );

    void setAxeName( string );

    void printAxeNames( ) const;

private:
    string axename;

    //Conta quantos nomes já houve
    int numPreviousName;

    //No máximo devem ter MAXNUMNAMES que foram cadastrados
    static const int MAXNUMNAMES = 10;
    string previoursAxeNames[ MAXNUMNAMES ];

    Color color;

    
};

#endif