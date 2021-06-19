/*
 * Song.h
 *
 *  Created on: 19-Jun-2021
 *      Author: user
 */

#ifndef SONG_H_
#define SONG_H_

#include <string>
#include <iostream>

using namespace std;

class Song {
public:
	Song();
	Song(string n,string a,short r,int d);
	virtual ~Song();
	string name{};
	string artist{};
	short rating{};
	int duration{};
	friend ostream &operator << (ostream &os, const Song &song);
};

#endif /* SONG_H_ */
