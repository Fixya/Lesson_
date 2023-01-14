#include "setting.h"
#include "functions.h"
#include "bat.h"

using namespace sf;
int main() {
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
	Bat bat;
	batInit(bat);
	Ball ball;
	initBall(ball);
	Object object;
	obInit(object);

	while (window.isOpen())
	{
		while (window.isOpen()) {
			checkEvents(window, ball);
			updateGame(bat, ball, object);
			checkCollisions();
			drawGame(window, bat, ball, object);
		}
		return 0;
	}
}