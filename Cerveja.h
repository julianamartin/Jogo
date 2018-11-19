#pragma once
#include "Obstaculo.h"

class Cerveja : public Obstaculo
{
private:
	static int quantidade;

public:
	Cerveja();
	~Cerveja();
	void Inicializa();
	void setPosicao1();
	void setPosicao2();
	int getQuant() { return quantidade; }
	void zeraQnt() { quantidade = 0; }
};


