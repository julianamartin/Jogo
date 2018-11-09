#pragma once
#include "Jogador.h"
#include"Plataforma.h"
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
	vector <Plataforma> plataformas;

public:
	Fase();
	~Fase(); 
	void Inicializa(RenderWindow* window, float deltaTime, bool multiplayer);
	virtual void Executar() = 0;
	RenderWindow* getWindow() { return window; }

};

