//============================================================================
// Name        : HashMain.cpp
// Author      : keoni sablan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <chrono>
#include "HashTable.h"
using namespace std;
using namespace std::chrono;


int main(){
	HashTable hash;

	int wordcount = 0;
	ifstream in;
	in.open("words.txt");
	string s;
	while (in)
	{
		in >> s;
		hash.normalize(s);
		if (in)
		{
			hash.insert(s);
			wordcount++;
		}
	}


	cout << "Created table\n";
	cout << wordcount << " words read in " << endl;
	string search;
	do
	{
		cout << "Enter a word to find\n! to quit" << endl;
		cin >> search;
		auto start = high_resolution_clock::now();
		hash.find(search);
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		cout << "\nSearch time: " << duration.count() << " microseconds\n";
	}
	while(search!="!");
	cout << "bye" << endl;

	system("pause");
	return 0;
}
