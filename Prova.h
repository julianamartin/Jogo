#pragma once
#include "Inimigo.h"
class Prova : public Inimigo
{
private:
	static int quantidade;

public:
	Prova();
	~Prova();
	void Inicializa();
	void setPosicao1();
	void setPosicao2();
	int getQuant() { return quantidade; }
	void zeraQnt() { quantidade = 0; }
};
