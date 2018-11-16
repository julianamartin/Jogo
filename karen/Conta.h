#pragma once
#include "Personagem.h"
class Conta : public Personagem
{
private:
	static int quantidade;
	Texture texturaC;
public:
	Conta();
	~Conta();
	void Inicializa();
	void setPosicao1();
	void setPosicao2();
	void Mover(float deltaTime);
};


