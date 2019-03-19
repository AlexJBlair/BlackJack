#include <iostream>
#include "card.h"

// This class seems to be working
// Implementation of Card
char card::get_c_suit()
{
	if (c_suit != 'd' || 'D' ||
	's'  || 'S' ||
	 'h' || 'H' ||
	 'c' || 'C')
	{
		std::cout << "Invalid suit!" << std::endl;
	}

	 /* 
	 provide if statements here to convert char input to string output return type
	  */
	return c_suit;
}

std::string card::get_c_value()
{
	if( c_value == "13")
{
	return "King";
}
else if (c_value == "12")
{
	return "Queen";
}
else if (c_value == "11")
{
	return "Jack";
}
else
	return c_value;
}


card::card(){}

card::card(int val, char suit)
{
	c_value = val;
	c_suit = suit;
}

card::~card(){}