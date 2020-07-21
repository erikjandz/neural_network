#include <iostream>
#include <SFML\Graphics.hpp>
#include "neural_network.hpp"


int main() {
	sf::Image test;
	test.loadFromFile("sand.png");
	sf::Color temp = test.getPixel(0, 0);
}