/*
 * MusicPlayer.h
 *
 *  Created on: 19-Jun-2021
 *      Author: user
 */

#ifndef MUSICPLAYER_H_
#define MUSICPLAYER_H_

#include <string>
#include <list>
#include <algorithm>
#include <iostream>
#include "Song.h"
#include <iomanip>

using namespace std;

class MusicPlayer {
public:
	MusicPlayer();
	virtual ~MusicPlayer();
	list<Song>playList{};
	void printHome();
	void printPlayList();
	void addSong();
	void playSong(char opt);
	void playSong(list<Song>::iterator &itr);
//	bool removeSong(list<Song>::iterator &it);
//	bool removeSong(list<Song>::iterator &it);
	void restoreConsole();
private:
	list<Song>::iterator currentSong;
	std::ios oldState{nullptr};
};

#endif /* MUSICPLAYER_H_ */
