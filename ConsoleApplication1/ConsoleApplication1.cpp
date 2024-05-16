// StringPTR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <string>
#include <algorithm>
#include<cctype>
using namespace std;
/*
void Sort(string &str) {
    sort(str.begin(), str.end());
}
void getInput(string* arr[3]) {

    string line;
    for (int i = 0; i < 3; i++) {
        cout << "Enter line " << i + 1 << ": ";
        getline(std::cin, line);
        arr[i] = new string(line);
    }

}
void Search(string* arr[3], const string& keyword) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (arr[i]->find(keyword) != string::npos) {
            cout << "key -> " << keyword << "' found in line " << i + 1 << ": " << *arr[i] << endl;
            count++;
        }
    }
    cout << "Total number of lines where the keyword was found: " << count << endl;
}
void DisplayStrings(string* arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] != nullptr) {
            cout << *arr[i] << endl;
        }
    }
}
void ShowLens(string* arr[], int n) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] != nullptr) {
            cout << "Length of the string " << i + 1 << ": " << arr[i]->length() << endl;
        }
    }
}
int alphaChars(string* arr[], int n) {
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
*/
int main()
{
    char arr1[20];
    char arr2[20];
    char str1[] = "I love Pep9 more than Burger King Chicken Sandwiches"; // How do I use this required string when your static protocol doesnt allow string this big?
    char str2[] = "29 + 7 is not 108";
    char str3[] = "A fish loves her water";
    int lenStr1 = len(str1);
    int lenStr2 = len(str2);
    int lenStr3 = len(str3);
    cout << "why dog?" << endl;
    //ptr to arr strings. //THESE ARE THE 2 PARLL arrs
   // strcpy(arr1, "Dog");
   // strcpy_s(arr1, 4, "dog");
   // strcpy_s(arr2, 4, "Dog");
    //cout << arr1 << endl << endl;
    cin.getline(arr2, 19);
    cin >> arr2;
    cout << arr2; // echo
    int logic = 0;
    // cout << "hi";
    cout << endl;
    if (arr1 > arr2) {
        strcmp(arr1, arr2);
        if (str1 < str2) logic = -1;
        else if (str1 == str2) logic = 0;
        else logic = 1;

    }
    int compare = strcmp(arr1, arr2);
    cout << endl;
    cout << " compare is  " << compare << endl;
    if (compare < 0) {
        cout << arr1 << " is lower than " << arr2 << endl;
    }
    else if (compare > 0) {
        cout << arr1 << " is higher than " << arr2 << endl;
    }
    else {
        cout << arr1 << " is the same as " << arr2 << endl;
    }
    if (strstr(arr1, "orsdrfg")) {
        cout << " found string";
    }
    else {
        cout << " did not find str";
    }
    //WHY DOES IT EXIT AFTER THIS EVERY TIME?????
    cout << "why doesnt it get to here??";
    displayStrings(str1, lenStr1);
    displayString(str2, lenStr2);
    displayString(str3, lenStr3);
    //using disp func method display.
    //srch str call srch
    //disp lens call showlens
    //cout sum alphanumeric char call alphachar
    //strcpy_s(char *strBestriation, size_t numberOfElement, const char *strSource);
    //using strcpy_s(dst, strlens(src) + 1, src);
    Search(str1, lenStr1);
    Search(str2, lenStr2);
    Search(str3, lenStr3);
    Sort(str1);
    Sort(str2);
    Sort(str3);
    displayStrings(str1, lenStr1);
    displayStrings(str2, lenStr2);
    displayStrings(str3, lenStr3);
    ShowLens(str1, lenStr1);
    ShowLens(str2, lenStr2);
    ShowLens(str3, lenStr3);
    int SumOfAlphas = alphaChars(str1, lenStr1) + alphaChars(str2, lenStr2) + alphaChars(str3, lenStr3);
    cout << SumOfAlphas;
}