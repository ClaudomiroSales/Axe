#include <iostream>
using std::cout;

#include <string>
using std::string;


#include "Axe.h"
#include "Axe.cpp"

void printArrays( const Axe & );

int main( )
{
    cout << "Depurar Axe\n";  
    string axeName1 = "superAxe";
    Axe ax(axeName1, BLUE );  
    
    return 0;

}

void printArrays( const Axe &ax )
{
    Axe arr[2];

    arr[ 0 ] = ax;
    arr[ 1 ] = ax;

    arr[ 0 ].printAxeNames( );
    arr[ 1 ].printAxeNames( );
}