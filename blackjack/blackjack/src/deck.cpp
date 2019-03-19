#include <iostream>
#include "deck.h"

int deck::get_max_num_cards()
{
	return max_num_cards;
}

int deck::get_max_num_per_suit()
{
	return max_num_per_suit;
}

deck::deck(int set_max_cards, int set_max_suit)
{
	max_num_per_suit = set_max_suit;
	max_num_cards = set_max_cards;
}

deck::~deck() {};