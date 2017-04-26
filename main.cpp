#include <iostream>
#include <cstdlib> // Require for rand()
#include <ctime>   // For time function to produce the random number
using namespace std;

void playGame();
int menuValid(int);


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
	
}

char menuValid(char play)//get this to work
{
	system("cls");
	while (play = 'Y' && 'N')
	{
		if (play = 'Y') {}
		//{coinflip();}
		else { cout << "Thank you for playing. Your balance is $" << endl; }//get balance 
	}
	
	{
		cout << "You have not input valid option, please try again.(Y/N)" << endl;
	}

	return play;
}
