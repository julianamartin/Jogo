#pragma once
#include "Personagem.h"
class Prova : public Personagem
{
private:
	static int quantidade;

public:
	Prova();
	~Prova();
	void Inicializa();
	void setPosicao1();
	void setPosicao2();
	void Mover(float deltaTime);
};
