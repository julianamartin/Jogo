#pragma once
#include "pch.h"
#include "Jogador.h"
class Fase
{
protected:
	Jogador* jog1;
	Jogador* jog2;

public:
	Fase();
	~Fase(); 
	virtual void Inicializa() = 0;
};

