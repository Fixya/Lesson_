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
	all_text hp;
	all_text font;
	all_text point;
	batInit(bat);
	initBall(ball);
	obInit(object, attempts);
	textInit(text, font);

	

	while (window.isOpen())
	{
		checkEvents(window, hp);
		updateGame(bat, ball, object, text, hp, attempts, point);
		checkCollisions();
		drawGame(window, bat, ball, object, text);
	}
		return 0;
}