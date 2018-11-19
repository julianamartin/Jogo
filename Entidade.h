#pragma once
#include "pch.h"
#include "Colisor.h"

class Entidade
{
protected:
	RectangleShape objP;
	Texture textura;
	Vector2f posicao; 
	Vector2f tamanho;
	bool morre;
	bool porta;
	int ID;
	float energ;
	float temp;
	float din;

public:
	Entidade();
	virtual ~Entidade();
	
	void Desenha(RenderWindow& window);
	float getEnergia() const { return energ; }
	float getTempo() const { return temp; }
	float getDinheiro() const { return din; }
	Colisor getColisão();
	bool getMorre() const { return morre; }
	bool getPorta() const { return porta; }
	Vector2f getPosicao() const { return objP.getPosition(); }
	void setPosicao(Vector2f pos);
	const int getID() const { return ID; }
	virtual void zeraQnt() { }
};

