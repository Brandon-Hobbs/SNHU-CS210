#include <Python.h>
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
#include <fstream>

#include "PythonWrapper.h"

using namespace std;


int main()
{
	int userMenuChoice; //user enetered values
	bool goodInput = false; //bool to control the exit of the menu loop
	string userPYParam; //user entered values then passed to Python functions
	
	//CallProcedure("printsomething");
	//cout << callIntFunc("PrintMe","House") << endl;
	//cout << callIntFunc("SquareValue", 2);

	do {
		//create the menu
		cout << "1: Count frequency of all purchased items" << endl;
		cout << "2: Count frequency of user entered item" << endl;
		cout << "3: Display histogram" << endl;
		cout << "4: Exit" << endl;
		cout << "Enter your selection as a number 1, 2, 3, or 4..." << endl;

		//try and catch the inputs in case of error
		try {
			cin >> userMenuChoice;

			if (userMenuChoice > 0 && userMenuChoice < 5) {// limit the user menu inputs to good values
				goodInput = true;
			}
			else {//throw error for catch
				goodInput = false;
				throw 1;
			}

			switch (userMenuChoice) {
				case 1:
					//Frequency of all words
					cout << "\nCalculating item frequency..." << endl;
					//call functions here
					CallProcedure("allWords");
					Sleep(5000);
					break;
				case 2:
					//Double a number
					cout << "\nWhat item do you want to search..." << endl;
					cin >> userPYParam;
					//call function
					cout << userPYParam << " was purchased this many times: " << callIntFunc("userWord", userPYParam);
					Sleep(5000); //hold the screen for 5 seconds
					break;
				case 3:
					//histogram
					cout << "\nCalculating the histogram...\n" << endl;
					//call functions here
					CallProcedure("histogram"); //make the DAT file
					printHistogram(); //print the histogram
					Sleep(5000);
					break;
				case 4:
					//do nothing
					break;
				default:
					throw 2;
			}
		}
		catch (int err) { //catch the errors
			cout << "\nPlease check your input." << endl; //throw the error message			
			Sleep(3000);
		}
		
		cin.clear(); //clear any error flags
		cin.ignore(INT_MAX, '\n'); //clear any lingering inputs
		system("cls"); //refresh the menu screen 

	} while (!goodInput || userMenuChoice != 4); //loop if user input is bad or not the exit criteria

	return 0;
}