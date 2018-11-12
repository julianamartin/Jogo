#pragma once
#include "Obstaculo.h"
class Alfajor : public Obstaculo
{
private:
	float energia;
	float dinheiro;
public:
	Alfajor();
	~Alfajor();
	void Inicializa(Texture* textura, Vector2f posicao);
};

