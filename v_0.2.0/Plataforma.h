#pragma once
#include "pch.h"
#include "Colisor.h"

class Plataforma
{
private:
	RectangleShape plataforma;
public:
	Plataforma(sf::Texture* texture, sf::Vector2f size, sf::Vector2f posição);
	~Plataforma();
	void Desenha(sf::RenderWindow& window);
	Colisor getColisão();
};

