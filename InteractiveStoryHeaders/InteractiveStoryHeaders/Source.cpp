#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

//prototype functions





int main()
{

	//Show title of game sim
	cout << "\n\n\t\t *** Welcome to the Advanced Technology Lab Sim!***\n\n";
	// Creating a string variable to hold the user name:
	string userName;
	// Call function to get user name
	userName = GetUserName();
	//Story Start
	StoryStart(userName);
	// Display into to user
	GetUserInput(userName);
	//This return will end the game
	return 0;
}


