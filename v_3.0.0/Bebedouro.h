#pragma once
#include "Entidade.h"

class Bebedouro : public Entidade
{
private:
	static int quantidade;

public:
	Bebedouro();
	~Bebedouro();
	void Inicializa();
	void setPosicao();
	int getQuant() { return quantidade; }
	void zeraQnt() { quantidade = 0; }
};

