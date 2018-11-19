#pragma once
#include "Lista.h"
#include"Entidade.h"
#include "Jogador.h"
/* #include "DP.h"
#include "Prova.h"
#include "Conta.h"
#include "Alfajor.h"
#include "Cerveja.h"
#include "Bebedouro.h"
#include "ListaInimigos.h" */

//#include "Fase.h"

//class Fase;

class ListaEntidade
{
private:
	Lista <Entidade> objLEnt;
	//Fase* fs;
public:
	ListaEntidade();
	~ListaEntidade();
	void Desenhalista(RenderWindow& window);
	void InicializaLista();
	void Incluir(Entidade* elemento);
	void testaColisao(Jogador* jog);
	void limpa();
	//void Mover(float deltaTime);
	Lista<Entidade>::Elemento<Entidade>* getPrim() { return objLEnt.getPrim(); }
	//void criaElem(int n_al, int n_be, int n_ce, int n_co, int n_pr, int n_dp, ListaInimigos* lInim);
	//void destroiElem();
	//void setFase(Fase* f) { fs = f; }
	//void gravarElementos(ofstream arquivo);
	void zeraQnt();
};


