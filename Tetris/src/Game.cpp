/*
 * Game.cpp
 *
 *  Created on: Sep 6, 2015
 *      Author: Zach
 */

#include "GameStates/PlayingState.h"

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "Tetris/Square.h"

#include <windows.h>
#include <iostream>

int main() {
	const sf::Uint32 sleepTime = 1000/60;

	const int WIDTH = 900;
	const int HEIGHT = 600;

	bool running = true;

	//TODO: Add more states
	PlayingState* playState = new PlayingState();

	sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode(WIDTH, HEIGHT), "Tetris - Eric Edition");
	window->setMouseCursorVisible(false);

	Square* sq = new Square(sf::Color::Green);

	sf::Sprite sprite;
	sf::Texture t;

	if (!t.loadFromFile("assets/images/square.png"))
	{

	}

	sprite.setTexture(t);

	//Game loop
	while (running && window->isOpen()) {
		sf::Clock clock;

		sf::Event event;
		while (window->pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window->close();
		}

		window->clear();



		sf::Sprite* sp = sq->getSprite();
		window->draw(*sp);
		window->draw(playState->draw());

		window->display();

		sf::Time dt = clock.getElapsedTime();

		sf::sleep(sf::milliseconds(sleepTime) - dt);

	}
}

