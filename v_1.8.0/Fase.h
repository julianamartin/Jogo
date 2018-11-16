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

	float deltaTime;
	bool multiplayer;
	bool pause;

	int n_dp;
	int n_prova;
	int n_conta;
	int n_alfajor;
	int n_cerveja;
	int n_bebed;

public:
	Fase();
	~Fase(); 
	void Inicializa(RenderWindow* window, float deltaTime, bool multiplayer);
	virtual void Executar() = 0;
	void verificaColisao();
	virtual void criaElem() = 0;
	void destroiElem();

};

