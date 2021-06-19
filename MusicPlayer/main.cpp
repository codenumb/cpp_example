/*
 * main.cpp
 *
 *  Created on: 19-Jun-2021
 *      Author: user
 */


#include <iostream>
#include <string>
#include "MusicPlayer.h"


int main ()
{
	MusicPlayer player{};
	char opts{};
	while(1)
	{
		player.printHome();
		cout<<">";
		cin>>opts;
		switch(opts)
		{
			case 'F':
			case 'N':
			case 'P':
				player.playSong(opts);
				break;
			case 'A':
				player.addSong();
				break;
			case 'L':
				player.printPlayList();
				break;
			default:
				break;
		}
	}
	return 0;
}



