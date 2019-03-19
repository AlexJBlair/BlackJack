#pragma once
#include "player.h"
// Declaration of Dealer

class dealer : public player
{

private:
	int beginning_balance;
	int numb_decks;

public:


int get_beginning_balance();
int change_beginning_balance(int pot_balance);
void deal();

};