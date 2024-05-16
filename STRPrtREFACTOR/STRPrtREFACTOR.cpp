// STRPrtREFACTOR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include "Header1.h"
//#include "Source1.cpp"
#include <cstring>;
using namespace std;
/*

    love is keyword
*/
int main()
{
       //arr of 3 strings
    //ptr to a single char
    //create an arr
    char* strings[3];
    //char* strings = { };
    getInput(strings);
    cout << "**********************" << endl;
    cout << "You entered: ";
    DisplayStrings(strings, strlen(strings)+1);
    cout << endl;
    cout << "***********************" << endl;
    //search for key
    const char* key = "Love";
    Search(strings, key);
    Sort(strings);
    cout << "***********************" << endl;
    cout << "\n";
    cout << "String Lens: " << endl;
    ShowLens(strings, strlen(strings));
    cout << "************************* \n";
    //alpha numeral char count.
    int alphaCount = alphaChars(strings, strlen(strings));
    cout << endl;
    cout << "The total number of alphanumeric chars is: " << alphaCount << endl;

   // for (int i = 0; i < 3; i++) {
    //    delete[] strings[i];
    //}
    return -1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
