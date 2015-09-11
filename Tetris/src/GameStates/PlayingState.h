/*
 * PlayingState.h
 *
 *  Created on: Sep 6, 2015
 *      Author: Zach
 */

#ifndef GAMESTATES_PLAYINGSTATE_H_
#define GAMESTATES_PLAYINGSTATE_H_

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
class PlayingState {
public:
	//Grid size 10x22

	sf::Uint32 BLOCK_SIZE = 30;

	sf::RenderTexture* rtext;

	PlayingState();
	virtual ~PlayingState();

	void update();
	sf::Sprite draw();

};

#endif /* GAMESTATES_PLAYINGSTATE_H_ */
