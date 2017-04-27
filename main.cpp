#include <iostream>
#include <cstdlib> // Require for rand()
#include <ctime>   // For time function to produce the random number
using namespace std;

void playGame();
char menuValid(char play);
void coinflip();

int main()
{
	cout << "Welcome to the coin game." << endl;
	cout << "It will cost $1 to play" << endl;
	cout << "If you guess right, we will match your bet one to one" << endl;

	playGame();






	return 0;
}

void playGame()
{
	char play;
	
	cout << "Would you like to play the Game (Y/N)" << endl;
	cin >> play;
	play=toupper(play);
	menuValid(play);
	
}

char menuValid(char play)//get this to work
{
	system("cls");
	cout << play << endl;
	system("pause");
	if (play == 'Y')
	{
		coinflip();
		cout << "Thank you for playing. Your balance is $" << endl; //get balance 
		playGame();
	
	}
	else if (play=='N')
	{
		cout << "GOOGLE" << endl;
	}

	else
	{
		cout << "Wrong option entered. Bringing back to front menu" << endl;
		playGame();
	}
	

	return play;
}

void coinflip()
{
	cout << "Pick 1)Heads or 2)Tails, and then I'll flip the coin." << endl;

	
	
}
