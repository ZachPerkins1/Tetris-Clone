/*
 * Block.cpp
 *
 *  Created on: Sep 10, 2015
 *      Author: Zach
 */

#include "Block.h"

Block::Block(sf::Color color) {
	for (int x = 0; x < 4; x++) {
		squares[x] = new Square(color);
	}

}

Block::~Block() {
	// TODO Auto-generated destructor stub
}

void Block::setGridPosition(sf::Vector2<sf::Uint32> vector2) {
	position = vector2;
}

void Block::setVelocity(sf::Vector2<int> vel) {
	velocity = vel;
}

void Block::setShape(sf::Vector2<sf::Uint16> pos[4]) {
	for (int x = 0; x < 4; x++) {
		squareLocations[x] = pos[x];
	}
}
