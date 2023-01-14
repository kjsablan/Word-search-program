/*
 * HashTable.cpp
 *
 *  Created on: May 2, 2021
 *      Author: Keoni
 */

#include "HashTable.h"
#include <fstream>

HashTable::HashTable()
{
	// TODO Auto-generated constructor stub

	initTable();

}

void HashTable::initTable()
{
	for(int i = 0; i < 10000; i++)
	{
		node * n = new node;
		n->next = NULL;
		table[i] = n;
	}
}

unsigned int HashTable::hashStr(Word s, int size)
{
	unsigned int h = s.getWord()[0];
	for (unsigned int i = 1; i < s.getWord().length(); i++) //s.length()
	h += s.getWord()[i]*26*i;
	return h % size;
}

void HashTable::normalize(string s)
{
    string t = "";
    for (unsigned int i = 0; i < s.length(); i++) {
        if (s[i] <= 'Z' && s[i] >= 'A')     s[i] += ('a' - 'A');
        if (s[i] <= 'z' && s[i] >= 'a')     t+= s[i];
    }
    s = t;
}

bool HashTable::find(string s)
{
	int index = hashStr(s,SIZE);
	node * n = table[index];
//    auto start = high_resolution_clock::now();
	while(n!=NULL)
	{
		if(n->w.getWord() == s)
		{
			cout << "Found " << s << endl;
			return true;
		}
		else n=n->next;
	}
	cout << "Not Found";
	return false;
}

void HashTable::insert(string s)
{

	int index = hashStr(s,SIZE);

	if(true)
	{
		node * n = new node;
		node * temp = new node;
		temp = table[index];
		table[index]=n;
		n->next = temp;
		n->w = s;
	}

	bool finished = false;
	int endIndex = 0;
	  int current = endIndex;
	  int startIndex;
	  bool moreToSearch = (current != startIndex);

	  while (moreToSearch && !finished)
	  {
	    if (table[current] < table[current-1])
	    {
	      std::swap(table[current], table[current-1]);
	      current--;
	      moreToSearch = (current != startIndex);
	    }
	    else
	      finished = true;
	  }
}


HashTable::~HashTable()
{
	// TODO Auto-generated destructor stub
	delete []* table;
}

