#include <string>
using std::string;

#ifndef AXE_H
#define AXE_H

class Axe
{
public:
    Axe( string = "" );

    void setAxeName( string );

    void printAxeNames( ) const;

private:
    string axename;

    //Conta quantos nomes já houve
    int numPreviousName;

    //No máximo devem ter MAXNUMNAMES que foram cadastrados
    static const int MAXNUMNAMES = 10;
    string previoursAxeNames[ MAXNUMNAMES ];

    
};

#endif