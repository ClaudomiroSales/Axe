#include <iostream>
using std::cout;

#include <string>
using std::string;


#include "Axe.h"
#include "Axe.cpp"

int main( )
{
    cout << "Depurar Axe\n";  
    string axeName1 = "superAxe";
    string axeName2 = "goodAxe";
    string axeName3 = "badAxe";
    string axeName4 = "betterAxe";
    Axe ax(axeName1);  

    ax.printAxeNames( );

    ax.setAxeName( axeName2 );

    ax.printAxeNames( );

    ax.setAxeName( axeName3 );

    ax.printAxeNames( );

    ax.setAxeName( axeName4 );

    ax.printAxeNames( );

    return 0;

}