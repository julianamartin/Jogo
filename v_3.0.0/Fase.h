#pragma once
#include <time.h>
#include "Jogador.h"
#include"Plataforma.h"
#include "DP.h"
#include "Prova.h"
#include "Conta.h"
#include "Alfajor.h"
#include "Cerveja.h"
#include "Bebedouro.h"
#include "ListaEntidade.h"
#include "Porta.h"
#include "ListaInimigos.h"

//class ListaEntidade;

class Fase
{
private:
	Texture jog1Texture;
	Texture jog2Texture;

protected:
	Jogador jog1;
	Jogador jog2;
	Porta porta;

	RenderWindow* window;
	Plataforma plat;
	ListaEntidade listaEnt;
	ListaInimigos listaInim;

	float deltaTime;
	bool multiplayer;
	bool pause;

	int n_dp;
	int n_prova;
	int n_conta;
	int n_alfajor;
	int n_cerveja;
	int n_bebed;

	int fase;

	RectangleShape fundo;
	Texture texturaFundo;

public:
	Fase();
	~Fase(); 
	void Inicializa(RenderWindow* window, float deltaTime, bool multiplayer, int i);
	void Executar();
	void ExecutarRec(int i);
	void verificaColisao();
	void destroiElem();
	void salvarJogada();
	void recuperarJogada();
	virtual void criaElem() = 0;

};

