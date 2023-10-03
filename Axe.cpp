#include <iostream>
using std::cout;

#include "Axe.h"

// Construtores com atributos Const
Axe::Axe( string axename, Color color )
:color( color )
{
    cout << "Classe Axe\n";

    numPreviousName = 0;
    setAxeName( axename );

    cout << "Axe " << axename << " foi criado \n";
    cout << "Numero de nomes anteriores " << numPreviousName << '\n';
    cout << "Cor do axe: " << Color(color) << '\n';
}

void Axe::setAxeName( string axename )
{
    //Nome anterior é salvo    
    if( numPreviousName ==  0 )
    {   
        //Nome nome é atualizado
        this->axename = axename;
        numPreviousName++;
        return;
    }

    //Nome anterior é salvo    
    if( numPreviousName <  MAXNUMNAMES )
        previoursAxeNames[ numPreviousName - 1 ] = this->axename;
    
    numPreviousName++;
    //Nome nome é atualizado
    this->axename = axename;
    
}

void Axe::printAxeNames( ) const
{
    //Imprimi todos os nomes anteriores mas não o atual
    cout << "Imprimindo " << numPreviousName << " axe name(s)\n";
    for( int i = 0; i < numPreviousName; i++ )
        cout << previoursAxeNames[ i ] << '\n';    
   
}
