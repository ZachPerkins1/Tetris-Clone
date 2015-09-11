/*
 * Square.h
 *
 *  Created on: Sep 7, 2015
 *      Author: Zach
 */

#ifndef TETRIS_SQUARE_H_
#define TETRIS_SQUARE_H_

#include <SFML/Graphics.hpp>
#include "Grid.h"
#include <iostream>

class Square {
public:
	Square(sf::Color color);
	virtual ~Square();

	void setColor(sf::Color);
	void setPos(int gx, int gy);

	sf::Sprite* getSprite();

	enum CollisionPos {LEFT, RIGHT, TOP, BOTTOM};

	CollisionPos testCollision(Grid* grid);

private:
	sf::Sprite* sprite;
	sf::Texture texture;

};

#endif /* TETRIS_SQUARE_H_ */
