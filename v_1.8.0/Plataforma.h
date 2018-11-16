#pragma once
#include "pch.h"
#include "Colisor.h"
#include "Jogador.h"

class Plataforma
{
public:
	Plataforma();
	~Plataforma();
	void Inicializa1();
	void Inicializa2();
	RectangleShape* getTijolo(int i);
	vector<RectangleShape*> getPlat();
	int getTam();
	void Desenha(RenderWindow& window);
	void criaBase(Vector2f tamanho, Vector2f posicao);
	void verificaColisao(Jogador* jog);

protected:
	vector<RectangleShape*> vPlat;

};