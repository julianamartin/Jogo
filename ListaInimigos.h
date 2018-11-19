#pragma once
#include "Inimigo.h"

class ListaInimigos
{
private:
	vector<Inimigo*> objLInim;

public:
	ListaInimigos();
	~ListaInimigos();
	void Incluir(Inimigo* inimigo);
	void Mover(float deltaTime);
	void limpaLista();
};

