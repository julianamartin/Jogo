#include "pch.h"
#include "Alfajor.h"


Alfajor::Alfajor()
{
	dinheiro = 10.0f;
	energia = 20.0f;
}


Alfajor::~Alfajor()
{
}

void Alfajor::Inicializa(Texture* textura, Vector2f posicao)
{
	(*textura).loadFromFile("alfajor.png");
	objP.setSize(sf::Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
	objP.setPosition(posicao.x, posicao.y);
	objP.setTexture(textura);
}

