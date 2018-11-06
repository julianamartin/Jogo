#pragma once
#include "Jogador.h"
class Fase
{
private:
	Texture jog1Texture;
	Texture jog2Texture;
protected:
	Jogador jog1;
	Jogador jog2;
	RenderWindow* window;
	float deltaTime;
	bool multiplayer;

public:
	Fase(RenderWindow* window, float deltaTime, bool multiplayer);
	~Fase(); 
	virtual void Inicializa() = 0;
	RenderWindow* getWindow() { return window; }

};

