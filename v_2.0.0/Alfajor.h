#pragma once
#include "Obstaculo.h"
class Alfajor : public Obstaculo
{
private:
	static int quantidade;
	//float energia;
	//float dinheiro;
public:
	Alfajor();
	~Alfajor();
	void Inicializa();
	void setPosicao();
	void setPosicao(Vector2f pos);
	//float getEnergia() { return energia; }
	//float getDinheiro() { return dinheiro; }
	int getQuant() { return quantidade; }
	void zeraQnt() { quantidade = 0; }
};



