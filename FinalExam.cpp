#include <iostream>
#include <array>
#include <string>
#include <cstdlib>
#include <random>
#include <ctime>



using namespace std;


//CPW 218
//Student: Ethen Lee Oliva
//Instructor: Ken Meerdink
//Assignment: C++ Final Exam
//Description: This will be the final test of everything you've learned in C++.
//this program can display and shuffle a deck of 52 playing cards, noted by a number and letter 

const int DECK_SIZE = 52;
const array<string, DECK_SIZE> cards{
		 "AH", "AC", "AD", "AS",
		 "2H", "2C", "2D", "2S",
		 "3H", "3C", "3D", "3S",
		 "4H", "4C", "4D", "4S",
		 "5H", "5C", "5D", "5S",
		 "6H", "6C", "6D", "6S",
		 "7H", "7C", "7D", "7S",
		 "8H", "8C", "8D", "8S",
		 "9H", "9C", "9D", "9S",
		 "10H", "10C", "10D", "10S",
		 "JH", "JC", "JD", "JS",
		 "QH", "QC", "QD", "QS",
		 "KH", "KC", "KD", "KS", };

void initializeDeck(array<const string*, DECK_SIZE>* deck);
void displayDeck(array<const string*, DECK_SIZE> deck);
void shuffleDeck(array<const string*, DECK_SIZE>* deck);
void printMenu();

int main() {

	array<const string*, DECK_SIZE> deck;
	initializeDeck(&deck);

	int userChoice = -1;
	while (userChoice != 0) {
		printMenu();
		cin >> userChoice;
		if (userChoice == 1) {
			shuffleDeck(&deck);
		}
		else if (userChoice == 2) {
			displayDeck(deck);
		}
	}

	system("pause");
	return 0;
}

void initializeDeck(array<const string*, DECK_SIZE>* deck) {
	for (size_t i = 0; i < DECK_SIZE; ++i) {
		(*deck)[i] = &cards[i];
	}
}

void printMenu() {
	cout << "0 - Quit" << endl;
	cout << "1 - Shuffle deck" << endl;
	cout << "2 - Display deck" << endl;
}
//Get this working first.
void displayDeck(array<const string*, DECK_SIZE> deck) {
	cout << "Here is your deck of cards! Pick a card, any card! Just kidding!" << endl <<
	"This is a programming exam, not a magic show!" << endl;

	for (int i = 0; i < DECK_SIZE; i++)
	{
		//This displays the deck, but does not account for new lines
		cout << *deck[i] << " ";
		//Implements proper formatting with endlines.
		if (i == 12 || i == 25 || i == 38)
		{
			cout << endl << endl;
		}
		
	}
	
}

void shuffleDeck(array<const string*, DECK_SIZE>* deck) {
	// TO DO: REPLACE THE BODY OF THIS FUNCTION
	cout << "Shuffle the deck here" << endl;
}