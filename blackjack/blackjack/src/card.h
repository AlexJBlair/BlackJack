#pragma once

// Value and Suit are properties of cards
// TODO: Somehow associate each suit with the words 
// Diamond, Spades, Hearts, and Clubs
class card
{
private:
	int value;
	char suit;

public:
	int get_value();

	char get_suit();

	card(int m_val, char m_suit);

	card();

	~card();
};