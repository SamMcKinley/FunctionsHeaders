#include "Functions.h"
#include<iostream>
#include <string>

string GetUserName()
{
	// Creating a string variable to hold the user name:
	string userName;
	//telling the user to enter their name.
	cout << "\nWhat is your name?";
	//getting the name from user
	getline(cin, userName);
	//return name
	return userName;
}

void StoryStart(string userName)
{
	cout << "\nWelcome to Classified Advanced Technology Lab LB-00\n";
	cout << "\nYou arrive at the classified location of LB-00, ready for your first day of work.\n ";
	cout << "\nYou hear a voice over the intercom that says 'Welcome, new employee! Please make your way to room 01 and pick up the items that you will require for your first day.'\n ";
	cout << "\nAs you make your way to room 01, an alarm goes off, and you hear an intercom say 'Emergency! Unidentified person Spotted! Unidentified person is at Classifed room 23! All employees move to intervene or eliminate!\n";
	cout << "\nYou hear a voice from further down the hall say 'Hey! New Guy! Room 23 is a very important room for our advanced technology! We may need your help!\n";
}

void GetUserInput(string userName)
{
	// Giving the player a choice as to what they want to do
	string userChoice;



	bool winCondition = false;

	do
	{//telling the user to enter their decision.
		cout << "\nDo you want to get your gear or find the intruder?";
		//Getting the user's choice
		getline(cin, userChoice);
		if (userChoice == "get gear" || userChoice == "get my gear")
		{
			GearScenario(userName);
			winCondition = true;
		}
		else if (userChoice == "find intruder" || userChoice == "find the intruder")
		{
			IntruderScenario(userName);
			winCondition = true;
		}

		else
		{
			cout << "I didn't understand. Please re-enter\n";
		}


	} while (!winCondition);
}

void IntruderScenario(string userName)
{
	cout << "\nYou decided to go after the intruder.\n";
	cout << "\nYou hear a voice from further down the hall say 'How did the intruder get past the password locked door without a card key?'\n";
	cout << "\nYou notice that the door, that is supposed to be locked is open, with the lock, opened without a problem.\n";
	cout << "\nYou hear another voice yell 'Out of my way! I'll deal with the intruder!'\n";
	cout << "\nYou remember seeing the man that is running toward the open door as the man that asked you to help with the intruder situation.\n";
	cout << "\nThe man who asked you to help appears to be a security guard. 'Leave this to me. This is what I've been training for!'\n";
	cout << "\nYou see him go into the room. After a few seconds, there is a sound that sounds like a scream followed by gunshots. You see an odd green smoke come out of the room, then the security guard exit the room, fall to the ground, with a single bullet wound in his chest.\n";
	cout << "\nYou enter the room, but you breathe in the odd green smoke and you are immediately paralyzed. If only you had a gas mask!";
	cout << "\nYou see a strange man enter your field of view. He is dressed all in black, with a gas mask on.\n";
	cout << "\nYou hear him say 'What kind of idiot enters a room like this without one of these? I'll put you out of your misery.'\n";
	cout << "\nHe fires a pistol directly at you. You die.\n";
}

void GearScenario(string userName)
{
	cout << "\nYou have decided to get your gear before going in to Room 23\n";
	cout << "\nYou enter room 01 to find your locker. You find a gas mask, a taser which has a tag saying 'Use in emergencies only. Could harm certain chemicals.', a lab coat, and a Key Card.";
	cout << "\nA strange man dressed all in black runs up to you and says 'Give me that Gas Mask!' You notice that the man isn't in his lab coat. 'Is this man suspicious enough?'\n";
	cout << "\nYou decide to go to Room 23, but the man follows you all the way there pestering you about your Gas Mask. Just as you are about to give it to him, you see a man in security gear yell 'Thats him!' as they point to the man in black.\n";
	cout << "\nThey point their guns at him, but he pulls out a pistol and grabs you by the neck. 'Open that door or this person dies!' 'Thank goodness I grabbed my gear,' you think.\n";
	cout << "\nWhen the Security guard and you lock eyes, they lower their guns and you pull out and use your Taser on the man in black. He collapses.\n";
	cout << "\nThe Security guards take the man away. 'What was that man after?' you ask the guard. 'He was after the gas in Room 23, which is a more potent form of tear gas. Instead of simply blinding someone, it gets into the body and paralyzes whoever breathes it in.' He explains.\n";
	cout << "\nThe Security guard approaches you. 'Thanks to  you, that experimental gas wasn't taken from us. Great job!'";
}