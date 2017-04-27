#include <iostream>
#include <cstdlib> // Require for rand()
#include <ctime>   // For time function to produce the random number
using namespace std;

void playGame();
char playValid(char);
void coinflip();
int coinValid(int);

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
	playValid(play);
	
}

char playValid(char play)//get this to work
{
	system("cls");
	cout << play << endl;
	system("pause");
	if (play == 'Y')
	{
		coinflip();
		cout << "" << endl; 
		playGame();
	
	}
	else if (play=='N')
	{
		cout << "Thank you for playing. Your balance is $" << endl;//get balance 
	}

	else
	{
		cout << "Wrong option entered. Going back to first menu" << endl;
		playGame();
	}
	

	return play;
}

void coinflip()
{
	cout << "Pick 1)Heads or 2)Tails, and then I'll flip the coin." << endl;
	int coinpick;
	cin >> coinpick;
	coinValid(coinpick);
	
}

int coinValid(int coinpick)
{
	cout << coinpick << endl;
	system("pause");
	return coinpick;
}
