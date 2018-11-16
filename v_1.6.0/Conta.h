#pragma once
#include "Personagem.h"
class Conta : public Personagem
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
	void Mover(float deltaTime);
	float getTempo() { return tempo; }
	float getDinheiro() { return dinheiro; }
};


