#include "pch.h"
#include "Entidade.h"


Entidade::Entidade()
{
}


Entidade::~Entidade()
{
}
void Entidade::Desenha(RenderWindow& window)
{
	window.draw(objP);
}


Colisor Entidade::getColisão()
{
	return(Colisor(objP));
}

/*void Entidade::Inicializa(Texture textura, Vector2f posicao, Vector2f tamanho)
{
	this->textura = textura;
	this->posicao = posicao;
	this->tamanho = tamanho;
	objP.setSize(tamanho);
	objP.setOrigin(objP.getSize() / 2.0f);
	objP.setPosition(posicao);
	objP.setTexture(&textura);
}*/