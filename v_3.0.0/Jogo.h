#pragma once
#include <time.h>
#include "Fase1.h"
#include "Fase2.h"
#include "Menu.h"

class Jogo
{
	Fase1* fase1;
	Fase2* fase2;
	RenderWindow window;
	bool multiplayer;
	Menu menu;

public:
	Jogo();
	~Jogo();
	void Executar();
	int recuperaFase();
	
};

