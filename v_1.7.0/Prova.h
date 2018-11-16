#pragma once
#include "Personagem.h"
class Prova : public Personagem
{
private:
	static int quantidade;
	float energia;
	float tempo;

public:
	Prova();
	~Prova();
	void Inicializa(int f);
	void setPosicao1();
	void setPosicao2();
	void Mover(float deltaTime);
	float getEnergia() { return energia; }
	float getTempo() { return tempo; }
};
