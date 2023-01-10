#pragma once
#include "SFML/Graphics.hpp"

const float WINDOW_WIDTH = 1600.f;
const float WINDOW_HEIGHT = 900.f;
const std::string WINDOW_TITLE = "SFML Simple Arcanoid P33122";

const float BAT_WIDTH = 150.f;
const float BAT_HEIGHT = 15.f;
const float BAT_OFFSET = 50.f;
const sf::Color BAT_COLOR{ sf::Color::White };
const sf::Vector2f BAT_START_POS{
 (WINDOW_WIDTH - BAT_WIDTH) / 2,
 WINDOW_HEIGHT - BAT_OFFSET - BAT_HEIGHT
};
const float BAT_SPEED = 5.f;
const float BALL_RADIUS = 15.f;
const sf::Color BALL_COLOR{ sf::Color::Yellow };
const sf::Vector2f BALL_START_POS{
 (WINDOW_WIDTH - 2 * BALL_RADIUS) / 2,
 (WINDOW_HEIGHT - 2 * BALL_RADIUS) / 2
};