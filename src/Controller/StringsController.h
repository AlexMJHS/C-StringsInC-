/*
 * StringsController.h
 *
 *  Created on: Jan 25, 2016
 *      Author: amag6880
 */

#ifndef CONTROLLER_STRINGSCONTROLLER_H_
#define CONTROLLER_STRINGSCONTROLLER_H_
#include <string>
using namespace std;

class StringsController
{
private:
	string word;
	int count;
public:
	StringsController();
	void setWord(string);
	string getWord();
	int getSize();
	void start();
};



#endif /* CONTROLLER_STRINGSCONTROLLER_H_ */
