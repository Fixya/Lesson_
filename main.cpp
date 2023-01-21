#include "setting.h"
#include "functions.h"
#include "bat.h"

using namespace sf;
int main() {
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
	Bat bat;
	Ball ball;
	Object object;
	Object attempts;
	all_text text;
	all_text textRect;
	all_text lvl;
	all_text hp;
	all_text font;
	all_text indicator;
	batInit(bat);
	initBall(ball);
	obInit(object, attempts);
	textInit(text, textRect, font);


	while (window.isOpen()) 
	{
		checkEvents(window, hp);
		updateGame(bat, ball, object, text, lvl, hp, attempts, indicator);
		checkCollisions();
		drawGame(window, bat, ball, object, text, lvl);
	}
	return 0;
	
}