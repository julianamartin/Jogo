#pragma once
#include "pch.h"
class Entidade
{
private:
	float x;
	float y;
public:
	Entidade();
	~Entidade();
	virtual void mover() = 0;
	virtual void Inicializa() = 0;
};

