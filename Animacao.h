#pragma once
#include <SFML/Graphics.hpp>

class Animacao
{
private:
	sf::Vector2u imageCount;
	sf::Vector2u currentImage;
	float totalTime;
	float switchTime;
public:
	sf::IntRect uvRect;

public:
	Animacao(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	~Animacao();
	void Atualiza(int row, float deltaTime, bool faceRight);
};

