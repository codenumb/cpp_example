/*
 * MusicPlayer.cpp
 *
 *  Created on: 19-Jun-2021
 *      Author: user
 */

#include "MusicPlayer.h"
#include <stdio.h>

using namespace std;
MusicPlayer::MusicPlayer() {
	oldState.copyfmt(cout);
	// TODO Auto-generated constructor stub

}

MusicPlayer::~MusicPlayer() {
	// TODO Auto-generated destructor stub
}

void MusicPlayer::printPlayList() {
	cout<<__func__<<"\n";
	for_each(playList.begin(), playList.end(), [](Song song){cout<<song;});
}

void MusicPlayer::printHome() {
	cout<<setfill('=')<<setw(40)<<"\n=";
	restoreConsole();
	if(!playList.empty())
		cout<<"\nPlaying:\n"<<*currentSong<<"\n";
	else
		cout<<"\n";
	cout<<  "F - Play First Song\n"
			"N - Play Next Song\n"
			"P - Play Previous song\n"
			"A - Add song to playlist\n"
			"L - List current play list\n";
	cout<<setw(40)<<right<<setfill('=')<<"=\n";
	restoreConsole();
}

void MusicPlayer::addSong() {

	Song song;
	string name{},artist{};
	short rating{};
	int duration{};
	cout<<"\nName:";
	cin >> name;
	cout<<"Artist:";
	cin>>artist;
	cout<<"Rating:";
	cin >> rating;
	cout<<"Duration:";
	cin>>duration;
	if(playList.empty())
	{
		playList.push_front(Song(name,artist,rating,duration));
		currentSong=playList.begin();
	}
	else
	{
		this->playList.insert(currentSong, Song(name,artist,rating,duration));
		currentSong--;
	}
	cout<<"Added!\n";
}

void MusicPlayer::playSong(list<Song>::iterator &itr) {
	currentSong=itr;
	printHome();
}

void MusicPlayer::playSong(char opt) {
	switch (opt) {
		case 'F':
			currentSong=playList.begin();
			break;
		case 'N':
			currentSong++;
			if(currentSong==playList.end())
				currentSong=playList.begin();
			break;
		case 'P':
			if(currentSong==playList.begin())
				currentSong=playList.end();
			currentSong--;
			break;
		default:
			break;
	}
	printHome();
}

void MusicPlayer::restoreConsole() {
	cout.copyfmt(oldState);
}
