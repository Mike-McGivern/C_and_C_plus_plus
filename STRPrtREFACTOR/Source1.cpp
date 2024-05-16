#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cctype>
#include "Header1.h"
//#include "STRPrtREFACTOR.cpp"
#include <cstring>;
using namespace std;



void ShowLens(char* arr[]) {
	for (int i = 0; i < 3; i++) {
		cout << "Length of str number " << i + 1 << " is: ";
		cout << strlen(arr[i]) << endl;
	}
}
int AlphaChars(char* arr[]) {
	int summationChar = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < strlen(arr[i]); j++) {
			if (isalpha(arr[i][j])) {
				++summationChar;
			}
		}
	}
	return summationChar;

}
void Sort(char* str) {
    std::sort(str, str + strlen(str));
}
void getInput(char* string[3]) {
    /*

    */
    char line;
    for (int i = 0; i < 3; i++) {
        cout << "Enter line " << i + 1 << ": ";
        cin >> line;
        //arr[i] = new char(line);
    }

}
void Search(char* arr[], char* keyword) {
   // const char* key = keyword
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (key == arr && (!arr)) {
            cout << "key -> " << keyword << "' found in line " << i + 1 << "is ";
            cout << arr[i] << endl;
            count++;
        }
    }
    cout << "Total number of lines where the keyword was found: " << count << endl;
}
void DisplayStrings(char* arr, int n) {
    for (int i = 0; i < 3; ++i) {
        if (!arr) {
            cout << arr[i] << endl;
        }
    }
}
