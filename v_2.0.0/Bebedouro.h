#pragma once
#include "Entidade.h"
class Bebedouro : public Entidade
{
private:
	static int quantidade;
	//float energia;
	//float tempo;
public:
	Bebedouro();
	~Bebedouro();
	void Inicializa();
	void setPosicao();
	void setPosicao(Vector2f pos);
	//float getEnergia() { return energia; }
	//float getTempo() { return tempo; }
	int getQuant() { return quantidade; }
	void zeraQnt() { quantidade = 0; }
};

