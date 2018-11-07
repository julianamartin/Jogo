#include "pch.h"
#include "Plataforma.h"


Plataforma::Plataforma(sf::Texture* texture, sf::Vector2f size, sf::Vector2f posição)
{
	plataforma.setSize(size);
	plataforma.setOrigin(size / 2.0f);
	plataforma.setTexture(texture);
	plataforma.setPosition(posição);
}
Plataforma::~Plataforma()
{
}
Colisor Plataforma::getColisão()
{
	return (Colisor(plataforma));
}
void Plataforma::Desenha(sf::RenderWindow& window)
{
	window.draw(plataforma);
}