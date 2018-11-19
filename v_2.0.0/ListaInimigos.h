#pragma once
#include "Inimigo.h"
#include "pch.h"

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

