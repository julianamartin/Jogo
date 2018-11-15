#include "pch.h"
#include "Prova.h"


Prova::Prova()
{
	quantidade++;
	velocidade.x = 90.0f;
}


Prova::~Prova()
{
}

void Prova::Inicializa(Texture * textura, Vector2f posicao)
{
	(*textura).loadFromFile("cerveja.png");
	objP.setSize(sf::Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
	objP.setPosition(posicao.x, posicao.y);
	objP.setTexture(textura);
} 

void Prova::Mover(float deltaTime)
{

}

int Prova::quantidade = 0;