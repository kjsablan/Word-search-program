/*
 * Word.cpp
 *
 *  Created on: May 2, 2021
 *      Author: Keoni
 */

#include "Word.h"

Word::Word()
{
	// TODO Auto-generated constructor stub
	word = "";
}

Word::Word(std::string w)
{
	word = w;
}
std::string Word::getWord()
{
	return word;
}

Word::~Word()
{
	// TODO Auto-generated destructor stub
}

