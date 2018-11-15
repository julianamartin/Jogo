#pragma once
#include "Personagem.h"
class Prova : public Personagem
{
public:
	Prova();
	~Prova();
	void Inicializa(Texture* textura, Vector2f posicao);
	void Mover(float deltaTime);
};

