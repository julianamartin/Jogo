#pragma once
#include "Personagem.h"
class Prova : public Personagem
{
private:
	static int quantidade;

public:
	Prova();
	~Prova();
	void Inicializa(Texture* textura, Vector2f posicao);
	void Mover(float deltaTime);
};
