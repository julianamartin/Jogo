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
	void zeraQnt();
	Lista<Entidade>::Elemento<Entidade>* getPrim() { return objLEnt.getPrim(); }
	//void criaElem(int n_al, int n_be, int n_ce, int n_co, int n_pr, int n_dp, ListaInimigos* lInim);
	//void destroiElem();
	//void setFase(Fase* f) { fs = f; }
	//void gravarElementos(ofstream arquivo);
};


