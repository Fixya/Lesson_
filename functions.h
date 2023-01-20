#pragma once
#include "SFML/Graphics.hpp"
#include "bat.h"

void checkEvents(sf::RenderWindow& window, all_text& hp) {
	sf::Event event;
	if (hp.hp == 0)
		window.close();
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed )
			window.close();
	}
}

void updateGame(Bat& bat, Ball& ball, Object& object, all_text& text, all_text& lvl, all_text& hp, Object& attempts, all_text& indicator) {
	batControl(bat);
	batReboundEdges(bat);
	ballControl(ball, bat);
	moveBall(ball, hp, text);
	obControl(object, ball, attempts);
	PText1(text, lvl, hp);
	lvlAl(indicator, attempts, lvl, object, text);
}

void checkCollisions() {}

void drawGame(sf::RenderWindow& window, Bat& bat, Ball& ball, Object& object, all_text& text, all_text& lvl) {
	window.clear();
	batDraw(window, bat);
	ballDraw(window, ball);
	obDraw(window, object, lvl);
	textDraw(window, text);
	window.display();
}