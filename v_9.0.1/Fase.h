#pragma once
#include "Jogador.h"
#include"Plataforma.h"
#include "Jogador.h"
#include "DP.h"
#include "Prova.h"
#include "Conta.h"
#include "Alfajor.h"
#include "Cerveja.h"
#include "Bebedouro.h"
#include "ListaEntidade.h"

class Fase
{
private:
	Texture jog1Texture;
	Texture jog2Texture;

protected:
	Jogador jog1;
	Jogador jog2;
	int n_dp;
	int n_prova;
	int n_conta;
	int n_alfajor;
	int n_cerveja;
	int n_bebed;

	RenderWindow* window;
	float deltaTime;
	bool multiplayer;
	Plataforma plat;
	void verificaColisao();
	ListaEntidade listaEnt;

public:
	Fase();
	~Fase(); 
	void Inicializa(RenderWindow* window, float deltaTime, bool multiplayer);
	virtual void Executar() = 0;
	RenderWindow* getWindow() { return window; }
	virtual void criaElem() = 0;

};

