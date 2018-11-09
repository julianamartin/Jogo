#pragma once
#include"pch.h"
class Personagem
{
protected:

public:
	Personagem();
	~Personagem();
	virtual void Mover(float deltaTime) = 0;
	virtual void Desenha(RenderWindow& window) = 0;
	void Inicializa();

};

