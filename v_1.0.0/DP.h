#pragma once
#include "Personagem.h"
class DP : public Personagem
{
public:
	DP();
	~DP();
	void Inicializa(Texture* textura, Vector2f posicao);
	void Mover(float deltaTime);
};

