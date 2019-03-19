#include <iostream>
#include "dealer.hpp"
#include "player.h"

// Implementation of Dealer
// Author: Alex Blair
// This class should be working

int::dealer::get_beginning_balance()
{
	return beginning_balance;
}

int::dealer::change_beginning_balance(int pot_balance)
{
	int po_balance = pot_balance;
	dealer::beginning_balance = po_balance;
	return beginning_balance;
}

void::dealer::deal()
{
	player::p_card_Count += 2;
}