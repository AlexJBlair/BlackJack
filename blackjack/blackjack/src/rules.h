#pragma once


// This header defines certain functions that have to do with the 
// rules of blackjack


bool no_more_than_21(int total_value);

// Add a given amount to the bet and subtract that amount from balance
int bet();

// perhaps pass stay as a reference to a toggle in main menu
bool stay(bool stay);


