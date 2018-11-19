#include "pch.h"
#include "Entidade.h"


Entidade::Entidade()
{
	morre = false;
	ID = 0;	
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
/* void Entidade::gravarEntidade(ofstream arquivo)
{
	arquivo << "oi";
} */