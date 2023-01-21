#pragma once
#include "SFML/Graphics.hpp"

const float WINDOW_WIDTH = 1600.f;
const float WINDOW_HEIGHT = 900.f;
const std::string WINDOW_TITLE = "SFML Simple Arcanoid P33122";

const float BAT_WIDTH = 150.f;
const float BAT_HEIGHT = 15.f;
const float BAT_OFFSET = 50.f;
const sf::Color BAT_COLOR{ sf::Color(255, 255, 255) };
const sf::Vector2f BAT_START_POS{ (WINDOW_WIDTH - BAT_WIDTH) / 2,WINDOW_HEIGHT - BAT_OFFSET - BAT_HEIGHT };
const float BAT_SPEED = 5;

const float BALL_RADIUS = 15.f;
const sf::Color BALL_COLOR{ sf::Color(218, 165, 32) };
const sf::Vector2f BALL_START_POS{ (WINDOW_WIDTH - 2 * BALL_RADIUS) / 2,(WINDOW_HEIGHT - 2 * BALL_RADIUS) / 2 };

const float OB_WIDTH = 90.f;
const float OB_HEIGHT = 45.f;
const float OB_OFFSET = 20.f;
const sf::Color OB_COLOR{ sf::Color(50, 205, 50) };
const sf::Vector2f OB_POS{ OB_WIDTH / 2,OB_HEIGHT / 2 };
const int size_ob = 13;
const int size_lvl = 3;

const sf::Vector2f textPosition{ 10.f, 10.f };
const sf::Vector2f textPosition1{ 70.f, 10.f };
const sf::Vector2f textPosition2{ 10.f, WINDOW_HEIGHT - 40 };
const sf::Vector2f textPosition3{ 50.f, WINDOW_HEIGHT - 40 };
const sf::Vector2f textPosition4{ WINDOW_WIDTH / 2 - 15, WINDOW_HEIGHT / 2 };
const float rectWidth = 100.f;
const float rectHeight = 70.f;
const sf::Vector2f rect_Size(rectWidth, rectHeight);
const sf::Color rectColor{ sf::Color(199, 21, 133) };