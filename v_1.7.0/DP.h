#pragma once
#include "Personagem.h"
class DP : public Personagem
{
private:
	static int quantidade;
public:
	DP();
	~DP();
	void Inicializa();
	void setPosicao();
	void Mover(float deltaTime);
};



