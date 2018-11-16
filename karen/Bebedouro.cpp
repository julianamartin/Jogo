#include "pch.h"
#include "Bebedouro.h"


Bebedouro::Bebedouro()
{
	quantidade++;
	energia = 0.0f;
	tempo = 0.0f;
}


Bebedouro::~Bebedouro()
{
}

void Bebedouro::Inicializa(Texture * textura, Vector2f posicao)
{
	(*textura).loadFromFile("cerveja.png");
	objP.setSize(sf::Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
	objP.setPosition(posicao.x, posicao.y);
	objP.setTexture(textura);
}

int Bebedouro::quantidade = 0;