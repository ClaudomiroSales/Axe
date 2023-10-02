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

    Axe arr[2];

    arr[ 0 ] = ax;
    arr[ 1 ] = ax;

    cout << "\n\n\n";
    cout << "Usando arrays.\n";

    arr[ 0 ].printAxeNames( );
    arr[ 1 ].printAxeNames( );

    cout << "\n\n\nUsando functions para imprimir arrays.\n";
    printArrays( ax );

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