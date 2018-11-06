#pragma once
#include <time.h>
#include "Fase1.h"
#include "Fase2.h"
class Jogo
{
	Fase1 fase1;
	Fase2 fase2;
	RenderWindow window;
	bool multiplayer;

public:
	Jogo();
	~Jogo();
	void Executar();
	
};

