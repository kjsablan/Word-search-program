/*
 * Word.h
 *
 *  Created on: May 2, 2021
 *      Author: Keoni
 */

#ifndef WORD_H_
#define WORD_H_
#include <string>

class Word {

private:

	std::string word;

public:
	Word();
	Word(std::string w);
	std::string getWord();

	virtual ~Word();
};

#endif /* WORD_H_ */
