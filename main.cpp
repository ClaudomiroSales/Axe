#include <iostream>
using std::cout;
using std::cerr;

#include <string>
using std::string;
using std::getline;

#include <fstream>
using std::fstream;
using std::ifstream;

#include <sstream>
using std::istringstream;

#include <map>
using std::map;



#include "Axe.h"
#include "Axe.cpp"

void printArrays( const Axe & );

int main( )
{
    map<string, double> variables;

    ifstream inputFile("test.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening file." << '\n';
        return 1; // Exit with an error code
    }

    string line;    
    string variableName;
    char equalsSign;
    double value;
    while (getline(inputFile, line)) 
    {
        istringstream iss(line);
        if (iss >> variableName >> equalsSign >> value && equalsSign == '=') 
            variables[variableName] = value;
        else
            cerr << "Error parsing line: " << line << '\n';
    }

    inputFile.close();

    /*
    double color; 
    if (variables.find("color") != variables.end())
        color = variables["color"]; 
    else
        cerr << "'color' variable not found." << '\n';
   
    cout << "Value of color variable: " << color << '\n';
     */

    cout << "Value of Weigth variable: " << variables["Weigth"] << '\n';

    string axeName1 = "superAxe";
    Axe ax(axeName1, Color(variables["color"]) );  


    
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