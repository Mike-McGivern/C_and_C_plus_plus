// inLab assign.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//const arrSize = 100
static int myvar[100];


/*

    We showed that Bufferflowing a stack variable will underflow for a longer time than a stack variable will overflow.
    we also showed that a Bufferflowing a heap variable will overflow for a longer time than a heap variable will underflow
    This is due to the way the operating system defines where the stack and heap are in memory.


    the average stack variable underflow(negitive) is: -100000ish


    the average stack variable overflow(positive) is: whereever the operating system takes control


    the average heap underflow(negitive) is: first mem. adress befor OS takes command


    the average heap overflow(positive) is: where other things other than variables are declared in memory.


    overall conclusion:
        Memory is limited to what you allocate in your program.
        Language does not block logic errors with under/overflows.
        OS may intervene to prevent access outside your program.
        Another variable within our program may be overwritten/accessed using overflow/underflow techniques.



*/








int main()
{
     //int myvar[100];
     /*for (int i = 0; ; ++i) {
        myvar[i] = i;
        cout << i << endl;
        cout.flush();

    } */
 /*  for (int j = 0; j < 100; ++j) {
        cout << myvar[j];
        cout << endl;

    } */

    int i = 99;
    while (1) {
        cout << i << endl;
        cout.flush();
        myvar[i] = 123;
        i--;


    }



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
