/*
 * Block.h
 *
 *  Created on: Sep 10, 2015
 *      Author: Zach
 */


#ifndef TETRIS_BLOCK_H_
#define TETRIS_BLOCK_H_

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include "Square.h"

class Block {
public:
	Block(sf::Color blockColor);
	virtual ~Block();

	void setGridPosition(sf::Vector2<sf::Uint32>);
	void setVelocity(sf::Vector2<int>);
private:
	Square* squares[4];
	sf::Vector2<sf::Uint16> squareLocations[4];

	sf::Vector2<sf::Uint32> position;
	sf::Vector2<int> velocity;

protected:
	void setShape(sf::Vector2<sf::Uint16>[4]);

};

#endif /* TETRIS_BLOCK_H_ */
