#pragma once
#include "SFML/Graphics.hpp"
#include "bat.h"

void checkEvents(sf::RenderWindow& window, Ball& ball) {
	sf::Event event;
	if (ball.ball.getPosition().y >= (WINDOW_HEIGHT - 2 * BALL_RADIUS))
		window.close();
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed )
			window.close();
	}
}

void updateGame(Bat& bat, Ball& ball, Object& object) {
	batControl(bat);
	batReboundEdges(bat);
	ballControl(ball, bat);
	moveBall(ball);
	obControl(object, ball);
}

void checkCollisions() {}

void drawGame(sf::RenderWindow& window, Bat& bat, Ball& ball, Object& object) {
	window.clear();
	batDraw(window, bat);
	ballDraw(window, ball);
	obDraw(window, object);
	window.display();
}