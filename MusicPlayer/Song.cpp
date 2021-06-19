/*
 * Song.cpp
 *
 *  Created on: 19-Jun-2021
 *      Author: user
 */

#include "Song.h"
#include <iostream>
#include <iomanip>
using namespace std;
Song::Song() {
	// TODO Auto-generated constructor stub
}

Song::~Song() {
	// TODO Auto-generated destructor stub
}

Song::Song(string n, string a, short r, int d):name(n),artist(a),rating(r),duration(d) {
}

//Song::Song(string n, string a, short r, int d) : name{n},artist{a},rating{r},duration{d}{
//}

ostream& operator <<(ostream &os, const Song &song) {
	os<<setfill(' ')<<left
			<<setw(16)<<song.name
			<<setw(16)<<song.artist
			<<setw(5)<<song.rating
			<<setw(5)<<song.duration<<"\n";
	return os;
}
