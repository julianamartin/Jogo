#include "pch.h"
#include "Porta.h"


Porta::Porta()
{
	porta = true;
}
Porta::~Porta()
{
}
void Porta::Inicializa(int i)
{
	textura.loadFromFile("porta.png");
	objP.setSize(sf::Vector2f(100.0f, 100.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
	objP.setTexture(&textura);
	if (i == 1)
		objP.setPosition(1850.0f, 140.0f);
	if (i == 2)
		objP.setPosition(1190.0f, 190.0f);
}
