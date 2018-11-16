#pragma once
#include "pch.h"
#include "Colisor.h"

class Entidade
{
protected:
	RectangleShape objP;
	Texture textura;
	Vector2f posicao; //altera na inicializa
	Vector2f tamanho;


public:
	Entidade();
	~Entidade();
	//void Inicializa(Texture textura, Vector2f posicao, Vector2f tamanho);
	void Desenha(RenderWindow& window);
	Colisor getColisão();
};

