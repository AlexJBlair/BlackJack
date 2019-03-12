#include <iostream>
#include "card.h"

// Implementation of Card
char card::get_suit()
{
	if (suit != 'd' || 's' || 'h' || 'c')
	{
		std::cout << "Invalid suit!" << std::endl;
	}
	return suit;
}

int card::get_value()
{
	return value;
}


card::card(){}
card::card(int m_val, char m_suit)
{
	value = m_val;
	suit = m_suit;
}

card::~card(){}

