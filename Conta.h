#pragma once
#include "Inimigo.h"

class Conta : public Inimigo
{
private:
	static int quantidade;

public:
	Conta();
	~Conta();
	void Inicializa();
	void setPosicao();
	int getQuant() { return quantidade; }
	void zeraQnt() { quantidade = 0; }
};


