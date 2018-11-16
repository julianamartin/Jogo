#pragma once
#include "Lista.h"
#include"Entidade.h"
#include "Jogador.h"

class ListaEntidade
{
private:
	Lista <Entidade> objLEnt;
public:
	ListaEntidade();
	~ListaEntidade();
	void Desenhalista(RenderWindow& window);
	void InicializaLista();
	void Incluir(Entidade* elemento);
	void testaColisao(Jogador* jog);
	void limpa();
	void Mover(float deltaTIme);
};

