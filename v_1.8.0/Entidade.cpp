#include "pch.h"
#include "Entidade.h"


Entidade::Entidade()
{
	morre = false;
}
Entidade::~Entidade()
{
}
void Entidade::Desenha(RenderWindow& window)
{
	window.draw(objP);
}
Colisor Entidade::getColis�o()
{
	return(Colisor(objP));
}