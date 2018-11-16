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
	bool morre;
	bool porta;

public:
	Entidade();
	~Entidade();
	
	void Desenha(RenderWindow& window);
	virtual float getEnergia() { return 0.0f; }
	virtual float getTempo() { return 0.0f; }
	virtual float getDinheiro() { return 0.0f; }
	Colisor getColisão();
	bool getMorre() { return morre; }
	bool getPorta() { return porta; }
	virtual void Mover(float deltaTime){}
};

