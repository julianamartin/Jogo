#pragma once
#include "pch.h"
class Entidade
{
protected:
    RectangleShape objP;
    Texture* textura;
    Vector2f posicao(500.0f, 500.0f); //altera na inicializa


public:
	Entidade();
	~Entidade();
	virtual void Inicializa() = 0;
	void Desenha(RenderWindow& window);
};

