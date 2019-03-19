#include "rules.h"
#include "player.h"
#include <iostream>

// Players have cards and players play against the dealer
// Players also have a beginning balance and can bet, hit, stay, and recieve cards

int player::get_p_balance()
{
    return p_balance;
}

int player::get_p_card_Count()
{
    return p_card_Count;
}

/*

Not sure why this function not working
Please revisit.

int player::change_p_balance(int pot_balance)
{
    int temp;
    temp = pot_balance;
    p_balance = temp;
    return p_balance;
}
*/

