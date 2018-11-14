#pragma once
#include "Lista.h"
#include"Entidade.h"
class ListaEntidade
{
private:
	Lista <Entidade> objLEnt;
public:
	ListaEntidade();
	~ListaEntidade();
	void Desenhalista();
	void InicializaLista();
	void Incluir(Entidade* elemento);
	void testaColisao(Jogador* jog);
};

