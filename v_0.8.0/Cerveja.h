#pragma once
#include "Obstaculo.h"
class Cerveja : public Obstaculo
{
public:
	Cerveja();
	~Cerveja();
	void Inicializa(Texture* textura, Vector2f posicao);
};

