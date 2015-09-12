/*
 * Block.cpp
 *
 *  Created on: Sep 10, 2015
 *      Author: Zach
 */

#include "Block.h"

Block::Block(sf::Color color, sf::Vector2<int> pos[4]) {
	squares = new Square[4] {Square(color), Square(color), Square(color), Square(color)};

	setShape(pos);
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

void Block::setShape(sf::Vector2<int> pos[4]) {
	for (int x = 0; x < 4; x++) {
		squareLocations[x] = pos[x];
	}
}

Square* Block::getSquares() {
	return squares;
}

void Block::update() {

}
