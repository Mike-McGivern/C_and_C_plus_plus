// Dice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <stdio.h>
#include <random>
using namespace std;

int globalSeed;
int cash = 0;


int main(); //

void masterLoop();

int roll(void) {
	return rand() % 6 + 1; 
}
void quit(void) 
{
	cout << "------------------------------------------------------ \n";
	cout << "Starting quitting sequence... \n";
	int ones = 0, twos = 0, threes = 0, fours = 0, fives = 0, sixs = 0;
	int die;
	int accum = 0;
	for (int i = 0; i < 60000; ++i) {
		die = roll();
		if (die == 1) ++ones;
		else if (die == 2) ++twos;
		else if (die == 3) ++threes;
		else if (die == 4) ++fours;
		else if (die == 5) ++fives;
		else if (die == 6) ++sixs;
		++accum;
}

	//make a histogram......
	cout << "TOTAL ROLLS: " << accum << "\n"; //I FRICKING WISH I KNEW THIS EARLIER!!!!
	cout << "The number of ones is: ";
	cout << ones;
	cout << "\n";
	cout << "The number of twos is: ";
	cout << twos;
	cout << "\n";
	cout << "The number of threes is: ";
	cout << threes;
	cout << "\n";
	cout << "The number of fours is: ";
	cout << fours;
	cout << "\n";
	cout << "The number of fives is: ";
	cout << fives;
	cout << "\n";
	cout << "Finally, the number of sixes is: ";
	cout << sixs;
	exit(0);
}
void printBalance(int cash) {
	char val;
	//print the cash, if balance is negitive should I quit?  , how much cash should the user start with?
	cout << "your balance is $";
	cout << cash;
	cout << "\n";
	cout << "Would you like to play again? enter 'p' to play or 'q' to quit \n";
	cin >> val;
	cout << val;
	cout << "\n";
	if (val == 'q') {
		quit();
	}
	else if (val == 'p') {
		cout << "---------------------------------------- \n";
		//goto start;
		//return; //IM PRETTY SURE I NEED A GOTO TO MAKE THIS WORK CORRECTLY
		masterLoop();
	}
}
void masterLoop() {
	int n, m;
	for (;;) {
		// start:  //should i do this or is there a betterway?
		cout << "Enter r to roll die 1. (YOU MAY NOW ENTER A q TO QUIT) \n";
		char letter;
		cin >> letter;
		cout << letter;
		cout << "\n";
		if (letter == 'r') {
			n = roll();
			cout << "YOU ROLLED A ";
			cout << n;
			cout << "\n";
		}
		else if (letter == 'q') {
			quit();
		} //else goto line 20?
		cout << "Enter r to roll die 2. \n";
		cin >> letter;
		cout << letter;
		cout << "\n";
		if (letter == 'r') {
			m = roll();
			cout << "YOU ROLLED A ";
			cout << m;
			cout << "\n";
		}
		else if (letter == 'q') {
			quit();
		} //else goto line 20??
		int total1 = m + n;
		cout << "player rolled a ";
		cout << n;
		cout << " and a ";
		cout << m;
		cout << " for a total of ";
		cout << total1;
		cout << "\n";
		if (total1 == 7 || total1 == 11) {
			cout << "YOU WIN!!!";
			cash += 10.00;
			printBalance(cash);

			//would you like to play again?


		}
		if (total1 == 2 || total1 == 3 || total1 == 10 || total1 == 12) {
			cout << "YOU LOSE!!!";
			cash -= 11.00;
			printBalance(cash);

			//would you like to play again?


		}
		int target = 0;
		if (total1 == 4 || total1 == 5 || total1 == 6 || total1 == 8 || total1 == 9) {
			target = total1;
			cout << "the target value is now ";
			cout << target;
			cout << "\n";
		}
		//next rolls
		for (;;) {
			cout << "Enter r to roll die 1. \n";
			cin >> letter;
			cout << letter;
			cout << "\n";
			if (letter == 'r') {
				n = roll();
				cout << "YOU ROLLED A ";
				cout << n;
				cout << "\n";
			}
			else if (letter == 'q') {
				cout << "am i going to here?";
				quit();
			} // else goto ????
			cout << "Enter r to roll die 2. \n";
			cin >> letter;
			cout << letter;
			cout << "\n";
			if (letter == 'r') {
				m = roll();
				cout << "YOU ROLLED A ";
				cout << m;
				cout << "\n";
			}
			else if (letter == 'q') {
				cout << "am i going to here??";
				quit();
			} //else goto line 20??
			total1 = m + n;
			if (total1 == target) {
				cout << "YOU WIN!!!";
				cash += 10.00;
				printBalance(cash);

				//would you like to play again??

				break;
			}
			else if (total1 == 7) {
				cout << "YOU LOSE!!!";
				cash -= 11.00;
				printBalance(cash);

				//would you like to play again?

				break;
			}
		}
	}
}
int main()
{
	//signed float cash = 0.0;
	
	// 
	//unsigned long j;
	//srand((unsigned)time(NULL));


		cout << "Welcome to the amazing dice game where you lose more money than you can earn!! If you'd like to stop losing money just   enter a 'q' at any time.\n";
		cout << "Please enter a random seed. (PLEASE DON'T ENTER A q TO QUIT HERE)\n";
		///int seed;
		cin >> globalSeed;

		cout << "The random seed you entered is ";
		cout << globalSeed;
		cout << "\n";

		if (globalSeed >= 0) {
			srand(globalSeed);
		}
		else {
			srand(time(NULL));
		}
		masterLoop();

}

