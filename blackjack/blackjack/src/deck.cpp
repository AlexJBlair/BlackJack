#include <iostream>
#include "deck.h"

deck::deck(int maxS, int maxC)
{
	max_num_per_suit = maxS;
	max_num_cards = maxC;
}

deck::~deck() {};