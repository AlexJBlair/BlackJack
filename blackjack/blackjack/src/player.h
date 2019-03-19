#pragma once
#include "deck.h"

class player
{
	friend deck;
private:
	int p_balance;

public:
	int p_card_Count;

public:
	int get_p_balance();
	int get_p_card_Count();
	int change_p_balance();
};