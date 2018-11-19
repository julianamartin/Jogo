#pragma once
#include "Obstaculo.h"
class Cerveja : public Obstaculo
{
private:
	static int quantidade;
	//float tempo;
	//float dinheiro;

public:
	Cerveja();
	~Cerveja();
	void Inicializa();
	void setPosicao1();
	void setPosicao2();
	void setPosicao(Vector2f pos);
	//float getTempo() { return tempo; }
	//float getDinheiro() { return dinheiro; }
	int getQuant() { return quantidade; }
	void zeraQnt() { quantidade = 0; }
};


