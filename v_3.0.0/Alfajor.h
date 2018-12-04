#pragma once
#include "Obstaculo.h"
class Alfajor : public Obstaculo
{
private:
	static int quantidade;
public:
	Alfajor();
	~Alfajor();
	void Inicializa();
	void setPosicao();
	int getQuant() { return quantidade; }
	void zeraQnt() { quantidade = 0; }
};



