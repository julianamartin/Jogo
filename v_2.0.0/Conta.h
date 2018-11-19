#pragma once
#include "Inimigo.h"
class Conta : public Inimigo
{
private:
	static int quantidade;
	//float dinheiro;
	//float tempo;
public:
	Conta();
	~Conta();
	void Inicializa();
	void setPosicao();
	void setPosicao(Vector2f pos);
	float getTempo() { return tempo; }
	float getDinheiro() { return dinheiro; }
	int getQuant() { return quantidade; }
	void zeraQnt() { quantidade = 0; }
};


