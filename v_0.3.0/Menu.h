#pragma once
#include "pch.h"

#define N_elementos  3

class Menu
{
private:
	Text menu[N_elementos];
public:
	Menu();
	~Menu();
	void Desenha(RenderWindow& window);
	void Inicializa(float largura, float altura);


};

