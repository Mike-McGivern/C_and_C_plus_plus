// ArraysPtr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ArrayTools.h"
#include <vector>
using namespace std;

//-----------------------------------------------------------------------------
void DisplayArray(short int* a) { 
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++) {
        cout << a[i];
        cout << endl;
    }
}

short int* ConcatArray(short int* a1, short int* a2) { // do this one before get
    int len1 = sizeof(a1) / sizeof(a1[0]);

    int len2 = sizeof(a2) / sizeof(a2[0]);
    short int* toReturn = new short int[len1 + len2];
    int toReturnLen = len1 + len2;
   /* for (int i = 0; i < toReturnLen; i++) {

    } */
    for (int i = 0; i < len1; i++) {
        toReturn[i] = a1[i];
   }
    for (int i = 0; i < len2; i++) {
        toReturn[i + len1] = a2[i];
    }
    return toReturn;
    
}

short int* GetArrayN(short int* orig, int n) {
    short int* toReturn = new short int[n];
    for (int i = 0; i < n; i++) {
        toReturn[i] = orig[i];
    }
    return toReturn;
}

void ReverseArray(short int* arr) {
    int len = sizeof(arr) / sizeof(arr[0]);
    /*
        keep first ele. reverse the rest of te elements
    */
    //SET I AS 1 AND NOT 0 SO THE STARTING INDEX IS THE 2ND ONE.
    for (int i = 1, j = len - 1; i < j; i++, j--) {
        short int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void ScrambleArray(short int* a) {
    int len = sizeof(a) / sizeof(a[0]);
    /*
        given an array scramble it. random number generator. 
    */
    for (int i = len - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        short int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    //display array?
}

int main()
{
   
    //------------------------------------
    // Declare 2 arrays of short int
    short int Arr1[] = { 7, 99, 22, 33, -10, 88, 11 };
    short int Arr2[] = { 9, -9, 1, 22, 333, 4, 555, 6, 9 };
    //--------------------------------------------------------------------------------------------------------------------------------------
    short int* nptr;

    // Declare and assign pointers variables to each of the 2 arrays declared above
    short int* ar1, * ar2;   // TODO: assign these variables.
    // Display Arr1 and Arr2
    //howto assign arr* ptrs.
    ar1 = Arr1;
    ar2 = Arr2;
    //ar1 and ar2 is a ptr.
    //ar1 = &Arr1[0];
    DisplayArray(ar1);
    //ar2 = &Arr2[0];
    DisplayArray(ar2);

    // Call the ConcatArray function pass in a pointer to Arr1 and
   // a pointer to Arr2 as parameters. ---------------  You can use nptr to accept the return value. ---------------------
    //------------------------------------------------------------------------------------------------------------------------------------
    //nptr = &Arr1[0];
    nptr = ConcatArray(ar1, ar2);

    // Display the New Array
    DisplayArray(nptr);

    // Call GetArrayN with and display each array separately

    short int* suba1 = GetArrayN(nptr, 1); // PTR* is set
    DisplayArray(suba1);
    delete[] suba1;
    suba1 = NULL;
    //********** should I do &Arrs here?? 

    short int* suba2 = GetArrayN(nptr, 2); // PRT* is set
    DisplayArray(suba2);
    delete[] suba2;
    suba2 = NULL;

    // Reverse the order

    //nptr = &Arr1[1];
    ReverseArray(nptr);


    // Display the New Array (reverse order now)

    //nptr = &Arr1[0];
    DisplayArray(nptr);
    // Display the Memory usages



    delete[] nptr;
    nptr = NULL;

    short int sarray1[] = { 7, 11, 22, 33, 444, 88, 7 };
    short int sarray2[] = { 7, 10, 20, 33, 444, 88, 99 };
    short int sarray3[] = { 7, 1111, 2222, 3333, 4444, 888, 1111 };

    /*
            do i need to give sarrptr*
            */


    ScrambleArray(sarray1);

    cout << endl;
    DisplayArray(sarray1);


    ScrambleArray(sarray2);
    DisplayArray(sarray2);

    cout << endl;
    ScrambleArray(sarray3);
    DisplayArray(sarray3);
}
//---------------------------------------------------------