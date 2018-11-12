#pragma once
#include "Entidade.h"
class Bebedouro : public Entidade
{
public:
	Bebedouro();
	~Bebedouro();
	void Inicializa(Texture* textura, Vector2f posicao);
};

