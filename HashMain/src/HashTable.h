/*
 * HashTable.h
 *
 *  Created on: May 2, 2021
 *      Author: Keoni
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_

#include <iostream>
#include <iomanip>
#include <chrono>
#include "Word.h"

using namespace std;

//const int SIZE = 10000;
class HashTable {

private:

	static const int SIZE = 10000;
	struct node {
		Word w;
		node *next;
	};

	node *table[SIZE];
	void initTable();

public:

	HashTable();
	unsigned int hashStr(Word, int);
	void normalize(string);
	void insert(string);
	bool find(string);
	virtual ~HashTable();

};

#endif /* HASHTABLE_H_ */
