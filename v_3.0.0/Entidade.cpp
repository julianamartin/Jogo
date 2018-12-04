#include "pch.h"
#include "Entidade.h"


Entidade::Entidade()
{
	morre = false;
	ID = 0;	
	temp = 0.0f;
	din = 0.0f;
	energ = 0.0f;
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


void Entidade::setPosicao(Vector2f pos)
{
	posicao = pos;
	objP.setPosition(posicao);
}