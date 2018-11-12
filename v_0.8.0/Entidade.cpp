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