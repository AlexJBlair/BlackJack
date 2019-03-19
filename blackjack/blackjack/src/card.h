#pragma once
// Declaration of Card
// Card is a super class
// Value and Suit are properties of cards
// TODO: Somehow associate each suit with the words 
// Diamond, Spades, Hearts, and Clubs
class card
{
// Non mutable values
private:
	std::string c_value;
	char c_suit;

// Access methods
public:
	std::string get_c_value();
	char get_c_suit();

// Constructors and destructors
public:
	card(int val, char suit);

	card();

	~card();
};