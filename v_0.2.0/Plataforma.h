#pragma once
#include "pch.h"
#include "Colisor.h"

class Plataforma
{
private:
	RectangleShape plataforma;
public:
	Plataforma(Texture* texture, Vector2f size, Vector2f posi��o);
	~Plataforma();
	void Desenha(sf::RenderWindow& window);
	Colisor getColis�o();
};

