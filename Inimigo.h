#pragma once
#include "Personagem.h"

class Inimigo : public Personagem
{
protected:

public:
	Inimigo();
	~Inimigo();
	void Mover(float deltaTime);
};

