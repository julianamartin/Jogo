#include "pch.h"
#include "DP.h"


DP::DP()
{
	velocidade.x = 50.0f;
}


DP::~DP()
{
}

void DP::Inicializa(Texture * textura, Vector2f posicao)
{
	(*textura).loadFromFile("cerveja.png");
	objP.setSize(sf::Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
	objP.setPosition(posicao.x, posicao.y);
	objP.setTexture(textura);
}
