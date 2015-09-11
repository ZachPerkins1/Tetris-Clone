/*
 * Square.cpp
 *
 *  Created on: Sep 7, 2015
 *      Author: Zach
 */

#include "Square.h"

Square::Square(sf::Color color) {
	sprite = new sf::Sprite();
	if (!texture.loadFromFile("assets/images/square.png")) {
		std::printf("[ERR] Could not load texture from assets/images/square.png");
	}

	texture.setSmooth(true);
	sprite->setTexture(texture);
	sprite->setColor(color);
}

Square::~Square() {
	delete sprite;
}

void Square::setColor(sf::Color color) {
	sprite->setColor(color);
}

sf::Sprite* Square::getSprite() {
	return sprite;
}

Square::CollisionPos Square::testCollision(Grid* grid) {
}
