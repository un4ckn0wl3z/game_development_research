//============================================================================
// Name        : HangMan.cpp
// Author      : Anuwat
// Version     : v0.1
// Copyright   : Your copyright notice
// Description : Simple HangMan game in C++, Ansi-style
//============================================================================

#include "Game.h"

int main() {
	SetConsoleTitle("Hangman");
	do {

		PlayGame();

	} while (WantToPlayAgain());

	return 0;
}
