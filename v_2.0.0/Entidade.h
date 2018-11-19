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
	int ID;
	float energia;
	float tempo;
	float dinheiro;

public:
	Entidade();
	~Entidade();
	
	void Desenha(RenderWindow& window);
	float getEnergia() { return energia; }
	float getTempo() { return tempo; }
	float getDinheiro() { return dinheiro; }
	Colisor getColisão();
	bool getMorre() { return morre; }
	bool getPorta() { return porta; }
	//virtual void Mover(float deltaTime) { } 
	Vector2f getPosicao() { return objP.getPosition(); }
	//if pos == intervalo, set velocidade....
	//virtual int getQuant() = 0;
	int getID() { return ID; }
	//void gravarEntidade(ofstream arquivo);
	virtual void zeraQnt() { }
};

