#include "pch.h"
#include "Porta.h"


Porta::Porta()
{
}
Porta::~Porta()
{
}
void Porta::Inicializa(int i)
{
	textura.loadFromFile("porta.png");
	objP.setSize(sf::Vector2f(100.0f, 100.0f));
	objP.setOrigin(objP.getSize());
	objP.setTexture(&textura);
	if (i == 1)
		objP.setPosition(1900.0f, 190.0f);
	if (i == 2)
		objP.setPosition(1250.0f, 240.0f);
}