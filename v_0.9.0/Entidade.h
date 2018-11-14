#pragma once
#include "pch.h"
class Entidade
{
protected:
	RectangleShape objP;
	Texture* textura;
	Vector2f posicao; //altera na inicializa


public:
	Entidade();
	~Entidade();
	virtual void Inicializa() {}
	void Desenha(RenderWindow& window);
};

