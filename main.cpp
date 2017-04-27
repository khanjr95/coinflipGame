#include <iostream>
#include <cstdlib> // Require for rand()
#include <ctime>   // For time function to produce the random number
using namespace std;

void playGame();
char playValid(char);
void coinguess();
int coinFlip(int);
int coinValid(int);
int balance(int, int);

int main()
{
	cout << "Welcome to the coin game." << endl;
	cout << "It will cost $1 to play" << endl;
	cout << "If you guess right, we will match your bet one to one" << endl;

	playGame();

	auto x = rand();
	


	return 0;
}

void playGame()
{
	char play;

	cout << "Would you like to play the Game (Y/N)" << endl;
	cin >> play;
	play = toupper(play);
	playValid(play);

}

char playValid(char play)//get this to work
{
	cout << play << endl;
	//system("pause");
	if (play == 'Y')
	{
		coinguess();
		cout << "" << endl;
		playGame();

	}
	else if (play == 'N')
	{
		cout << "Thank you for playing."<< endl;//get balance 
		cout << "Goodbye!" << endl;
	}

	else
	{
		cout << "Wrong option entered. Going back to first menu" << endl;
		playGame();
	}


	return play;
}

void coinguess()
{
	cout << "Pick 1)Heads or 2)Tails, and then I'll flip the coin." << endl;
	int coinpick;
	cin >> coinpick;
	coinValid(coinpick);
	
	coinFlip(coinpick);
	//cout << flip <<","<< coinpick << endl;
	//balance(coinpick, flip);

	//cout << "Your balance is " << balance(coinpick) << endl;

}

int coinValid(int coinpick)
{
	//cout << coinpick << endl;
	while (coinpick != 1 && coinpick != 2)
	{
		cout << "Wrong choice selected, Please pick from 1 or 2!" << endl;
		cin >> coinpick;
		coinValid(coinpick);
	}

	return coinpick;
}

int coinFlip(int coinpick)
{
	int flip;
	flip = rand() % 2 + 1;
	if (flip == 0)
		cout << "The machine flip was heads." << endl;
	else
		cout << "The machine flip was tails." << endl;
	
	if (coinpick == flip)
	{
		balance(coinpick, flip);
	}
	else
	{
		balance(coinpick, flip);
	}

	return flip;
}

int balance(int coinpick, int flip)
{
	int userMoney = 15; // this value keeps the addition/subtraction at 16 or 14. fix this.

	while (userMoney != 0)
	{
		cout << coinpick<<","<< flip << endl;
		if (coinpick == flip)
		{
			cout << "Congrats you won this bet" << endl;
			userMoney++;
		}
		else
		{
			cout << "Sorry, you lost this bet" << endl;
			userMoney--;
		}
		cout << "Your balance is " << userMoney << endl; break;
	}

	
	return userMoney;
}
