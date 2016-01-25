/*
 * StringsController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: amag6880
 */

#include "StringsController.h"
#include <iostream>
#include <string>
using namespace std;

StringsController :: StringsController()
{
	this -> count = 99;
	this -> word = "";
}

void StringsController :: setWord(string word)
{
	this -> word = word;
}

string StringsController :: getWord()
{
	return this -> word;
}

void StringsController :: start()
{
	cout << "In the SillyAppController\'s start method" << endl;
	cout << "Type a word." << endl;
	string tempWord;
	string tempWord2;
	cin >> tempWord;
	cin >> tempWord2;
	setWord(tempWord);
	cout << getWord() << " is what you typed" << endl;
	cout << tempWord.size() << " is the size of your word" << endl;
	cout << tempWord.empty() << endl;

}
