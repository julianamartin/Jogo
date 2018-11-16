#pragma once
#include "Personagem.h"
class Conta : public Personagem
{
private:
	static int quantidade;
public:
	Conta();
	~Conta();
	void Inicializa();
	void setPosicao();
	void Mover(float deltaTime);
};


