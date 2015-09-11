/*
 * PlayingState.cpp
 *
 *  Created on: Sep 6, 2015
 *      Author: Zach
 */

#include "PlayingState.h"
#include <iostream>

PlayingState::PlayingState() {
	rtext = new sf::RenderTexture();
	if (!rtext->create(10*BLOCK_SIZE, 20*BLOCK_SIZE)) {
		std::printf("Failed to create render surface for playing grid \n");
	}


}

PlayingState::~PlayingState() {
	// TODO Auto-generated destructor stub
}

void PlayingState::update() {
}

sf::Sprite PlayingState::draw() {
	rtext->clear(sf::Color::White);
	sf::Sprite sprite;
	sprite.setTexture(rtext->getTexture());

	return sprite;
}


