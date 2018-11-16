#pragma once
#include "Inimigo.h"
class Prova : public Inimigo
{
private:
	static int quantidade;
	float energia;
	float tempo;

public:
	Prova();
	~Prova();
	void Inicializa();
	void setPosicao1();
	void setPosicao2();
	float getEnergia() { return energia; }
	float getTempo() { return tempo; }
};
