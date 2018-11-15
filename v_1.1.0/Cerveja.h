#pragma once
#include "Obstaculo.h"
class Cerveja : public Obstaculo
{
private:
	static int quantidade;
	float tempo;
	float dinheiro;

public:
	Cerveja();
	~Cerveja();
	void Inicializa(Texture* textura, Vector2f posicao);
};


