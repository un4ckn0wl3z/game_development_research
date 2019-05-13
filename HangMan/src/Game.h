/*
 * Game.h
 *
 *  Created on: May 12, 2019
 *      Author: anuwat
 */

#ifndef GAME_H_
#define GAME_H_


#include <iostream>
#include <cstring>
#include <cctype>
#include <windows.h>

using namespace std;


#define DRAW_END_LINE(x) cout << x << endl << endl;
#define DRAW(x) cout << x << endl;


void PlayGame();
bool WantToPlayAgain();
int GetSecretPhrase(char secretPhrase[], int maxSecretPhraseLen);
char * MakeHiddenPhrase(const char * secretPhrase, int secretPhraseLen);
void DrawBoard(int numberOfGuessLeft, const char * noptrHiddenPhase);


char GetGuess();

void UpdateBoard(char guess, char * noptrHiddenPhase, const char secretPhrase[],
		int secretPhraseLen, int & numberOfGuessLeft);

bool IsGameOver(int numberOfGuessLeft, const char * optrHiddenPhase,
		int secretPhraseLen);

void DisplayResult(const char * secretPhrase, int numberOfGuessLeft);






#endif /* GAME_H_ */
