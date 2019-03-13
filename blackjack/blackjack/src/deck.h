#pragma once
// Declaration of deck

#include "card.h"

class deck : public card
{
private:
	int max_num_cards = 52;
	int max_num_per_suit = 13;

private:
	char val_of_zero = 'A';
	char val_of_eleven = 'J';
	char val_of_twelve = 'Q';
	char val_of_thirteen = 'K';

public:
	deck(int maxC, int maxS);
	~deck();
};