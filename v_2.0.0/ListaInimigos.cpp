#include "ListaInimigos.h"

ListaInimigos::ListaInimigos()
{
}

ListaInimigos::~ListaInimigos()
{
	limpaLista();
}

void ListaInimigos::Incluir(Inimigo* inimigo)
{
	objLInim.push_back(inimigo);
}

void ListaInimigos::Mover(float deltaTime)
{
	vector<Inimigo*>::iterator i;
	for (i = objLInim.begin(); i != objLInim.end(); i++)
	{
		(*i)->Mover(deltaTime);
	}
}

void ListaInimigos::limpaLista()
{
	objLInim.clear();
}