#include "pch.h"
#include "Conta.h"


Conta::Conta()
{
	velocidade.x = 95.0f;
}


Conta::~Conta()
{
}

void Conta::Inicializa(Texture * textura, Vector2f posicao)
{
	(*textura).loadFromFile("cerveja.png");
	objP.setSize(sf::Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
	objP.setPosition(posicao.x, posicao.y);
	objP.setTexture(textura);
} 

void Conta::Mover(float deltaTime)
{

}
