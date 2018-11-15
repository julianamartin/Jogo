#include "pch.h"
#include "Cerveja.h"


Cerveja::Cerveja()
{
}


Cerveja::~Cerveja()
{
}
void Cerveja::Inicializa(Texture* textura, Vector2f posicao)
{
	(*textura).loadFromFile("cerveja.png");
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
	objP.setPosition(posicao.x, posicao.y);
	objP.setTexture(textura);
}