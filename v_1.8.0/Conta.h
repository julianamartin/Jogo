#pragma once
#include "Inimigo.h"
class Conta : public Inimigo
{
private:
	static int quantidade;
	float dinheiro;
	float tempo;
public:
	Conta();
	~Conta();
	void Inicializa();
	void setPosicao();
	float getTempo() { return tempo; }
	float getDinheiro() { return dinheiro; }
};


