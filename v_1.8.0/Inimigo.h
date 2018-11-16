#pragma once
#include "Personagem.h"
class Inimigo : public Personagem
{
public:
	Inimigo();
	~Inimigo();
	void Mover(float deltaTime);
};

