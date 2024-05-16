// Bank.cpp

#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
float amountNeeded = 0.00;
int ftAtmNeed = 0;
int hunds(float input) {
    int count = 0;
    for (; input >= 100; input -= 100) {
        ++count;
        amountNeeded -= 100;

    }
    return count;

}
int fifty(float input) {
    int count = 0;
    for (; input >= 50; input -= 50) {
        ++count;
        amountNeeded -= 50;
    }
    return count;

}
int twenty(float input) {
    int count = 0;
    for (; input >= 20; input -= 20) {
        ++count;
        amountNeeded -= 20;
    }
    return count;

}
int tens(float input) {
    int count = 0;
    for (; input >= 10; input -= 10) {
        ++count;
        amountNeeded -= 10;
    }
    return count;
}
int fives(float input) {
    int count = 0;
    for (; input >= 5; input -= 5) {
        ++count;
        amountNeeded -= 5;
    }
    return count;

}
int penny(int count) {
    return -1; /* amountNeeded++ */;
}
int ones(float input) {
    int count = 0;
    for (; input >= 1; input--) {
        ++count;
        amountNeeded -= 1;
    }
    return count;
}
int quarters(float input) {
    int count = 0;
    int ftQutar = input * 4;
    ftAtmNeed = (int)(amountNeeded) * 4;
    for (; ftQutar >= 4; ftQutar -= 4) {
        cout << "qutar";
        ++count;
        ftAtmNeed -= 4;
    }
    amountNeeded = (float)(ftQutar / 4);
   /* if (count >= 3) {
        //penny();
        //penny();
    } */
    return count;
}
int dimes(float input) {
    int ftConv = input * 10;
    int count = 0;
    ftAtmNeed = (int)(amountNeeded) * 10;
    for (; ftConv >= 10; ftConv -= 10) {
        cout << "dime";
        ++count;
        --ftAtmNeed;
    }
    amountNeeded = (float)(ftAtmNeed / 10);
    return count;
}
int nickels(float input) {
    int FtNick = input * 2;/* */;
    int count = 0;
    ftAtmNeed = (int)(amountNeeded) * 2;
    for (; FtNick >= 5; input -= 5) {
        cout << "nick";
        ++count;
        ftAtmNeed -= 5;
    }
    amountNeeded = (float)(ftAtmNeed / 2);
    return count;
}
int pennies(float input  /* int count */ ) {
    int count = 0;
    int ftConv = input * 10;
    cout << ftConv;
    ftAtmNeed = (int)(amountNeeded) * 100;
    for (; ftConv >= 1; input -= 1) {
        cout << "pen";
        ++count;
        ftAtmNeed--;
    }
    amountNeeded = (float)(ftAtmNeed / 100);
    return count;
}
int main()
{
    double DubQutar = 0.00;
    double DubDime = 0.0;
    double DubNick = 0;
    bool BoolPen = false;
    for (;;) {
        //int amountNeeded = 0;
        cout << "\n";
        cout << "Enter the amount of cash you need to withdrawl \n";
        cout << "$";
        cin >> amountNeeded;
        cout << amountNeeded;
        int hundBills = hunds(amountNeeded);
        int fiftyBills = fifty(amountNeeded);
        int twentyBills = twenty(amountNeeded);
        int tensBills = tens(amountNeeded);
        int fivesBills = fives(amountNeeded);
        int onesBills = ones(amountNeeded);
        // DubQutar;
        int quarterCents = round(quarters(amountNeeded));
        //DubDime
        //cout << "Dime Run";
        int dimeCents = round(dimes(amountNeeded));
        //DubNick
        int nickelsCents = round(nickels(amountNeeded));
        //cout << "Pen";
        //BoolPen 
        int penCents = ceil(pennies(amountNeeded)); //truncate;
        cout << "Dispensing cash \n";
        cout << "Pennies: ";
        cout << penCents;
        cout << "\n";
        cout << "Nickels: ";
        cout << nickelsCents;
        cout << "\n";
        cout << "Dimes: ";
        cout << dimeCents;
        cout << "\n";
        cout << "Quarters: ";
        cout << quarterCents;
        cout << "\n";
        cout << "Ones: ";
        cout << onesBills;
        cout << "\n";
        cout << "Fives: ";
        cout << fivesBills;
        cout << "\n";
        cout << "Tens: ";
        cout << tensBills;
        cout << "\n";
        cout << "Twenties: ";
        cout << twentyBills;
        cout << "\n";
        cout << "Fifties: ";
        cout << fiftyBills;
        cout << "\n";
        cout << "Hundreds: ";
        cout << hundBills;
        cout << "\n";

    }
}

