#pragma once
#include "Entidade.h"

class Obstaculo : public Entidade
{
protected:
	Texture textura;
public:
	Obstaculo();
	~Obstaculo();
	virtual void Inicializa(Texture* textura, Vector2f posicao) = 0;
};

