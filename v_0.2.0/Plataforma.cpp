#include "pch.h"
#include "Plataforma.h"


Plataforma::Plataforma(sf::Texture* texture, sf::Vector2f size, sf::Vector2f posi��o)
{
	plataforma.setSize(size);
	plataforma.setOrigin(size / 2.0f);
	plataforma.setTexture(texture);
	plataforma.setPosition(posi��o);
}
Plataforma::~Plataforma()
{
}
Colisor Plataforma::getColis�o()
{
	return (Colisor(plataforma));
}
void Plataforma::Desenha(sf::RenderWindow& window)
{
	window.draw(plataforma);
}