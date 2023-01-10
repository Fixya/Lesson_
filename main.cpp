#include "setting.h"
#include "functions.h"
#include "bat.h"

using namespace sf;
int main()
{
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),WINDOW_TITLE);
	Bat bat;
	batInit(bat);
	Ball ball;
	initBall(ball);

	Event event;
	while (window.pollEvent(event))
	{
		if (event.type == Event::Closed || ball.ball.getPosition().y >= (WINDOW_HEIGHT - 2 * BALL_RADIUS))
			window.close();
	}
	while (window.isOpen())
	{
	while (window.isOpen()) {
		checkEvents(window);
		updateGame(bat, ball);
		checkCollisions();
		drawGame(window, bat, ball);
	}
	return 0;
}