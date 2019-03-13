#include "rules.h"
#include <iostream>
using std::endl;
using std::cout;
// Implementation of rules
bool stay(bool choice)
{
	if (choice == true)
	{
		return true;
	}
	else return false;
}

int bet(int amount,  &balance)
{

}

bool no_more_than_21(int total_value)
{
	if (total_value > 21)
	{
		cout << "You bust!" << endl;
	}
	else if (total_value <= 21)
	{
		cout << "Hit or Stay?" << endl;
	}
}