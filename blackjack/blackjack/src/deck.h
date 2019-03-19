#pragma once
// Declaration of deck

#include "card.h"

class deck : public card
{
private:
	int max_num_cards = 52;
	int max_num_per_suit = 13;

/*
private:
	char val_of_zero = 'A';
	char val_of_eleven = 'J';
	char val_of_twelve = 'Q';
	char val_of_thirteen = 'K';
*/

public:

	int get_max_num_cards();
	int get_max_num_per_suit();

	deck(int set_max_cards, int set_max_suit);
	~deck();
};