#pragma once
#include "pch.h"
#include "Colisor.h"

class Plataforma
{
private:
	RectangleShape plataforma;
public:
	Plataforma(Texture* texture, Vector2f size, Vector2f posição);
	~Plataforma();
	void Desenha(sf::RenderWindow& window);
	Colisor getColisão();
};



/*#include <iostream>
using namespace std;

class Plataforma
{
public:
	Plataforma();
	~Plataforma();
	void Inicializa1();
	void Inicializa2();
	RectangleShape getTijolo(int i);
	vector<RectangleShape> getPlat();
	int getTam();
	void Desenha(RenderWindow& window);


protected:
	vector<RectangleShape> vPlat;
};*/