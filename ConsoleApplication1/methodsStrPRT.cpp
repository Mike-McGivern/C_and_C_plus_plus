#include <iostream>
//#include <string>
#include <algorithm>
#include <cctype>
using namespace std;


void Sort(char& str) {
    sort(str.begin(), str.end());
}
void getInput(char* arr[3]) {
    /*

    */
    char[] line;
    for (int i = 0; i < 3; i++) {
        cout << "Enter line " << i + 1 << ": ";
        getline(cin, line);
        arr[i] = new char(line);
    }

}
void Search(char* arr[3], const char& keyword) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[i]->find(keyword) != char::npos) {
            cout << "key -> " << keyword << "' found in line " << i + 1 << ": " << *arr[i] << endl;
            count++;
        }
    }
    cout << "Total number of lines where the keyword was found: " << count << endl;
}
void DisplayStrings(char* arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] != nullptr) {
            cout << *arr[i] << endl;
        }
    }
}
void ShowLens(char* arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] != nullptr) {
            cout << "Length of the string " << i + 1 << ": " << arr[i]->length() << endl;
        }
    }
}
int alphaChars(char* arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != nullptr) {
            for (const char& c : *arr[i]) {
                if (isalpha(c)) {
                    ++count;
                }
            }
        }
    }
    return count;
}