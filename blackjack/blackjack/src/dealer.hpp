#pragma once

class dealer
{
private:
	int beginning_balance;
	int numb_decks;

public:

	int change_beginning_balance(int new_balance);
	void deal();

};