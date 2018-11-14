#pragma once
#include "Personagem.h"
class Conta : public Personagem
{
public:
	Conta();
	~Conta();
	void Inicializa(Texture* textura, Vector2f posicao);
};

