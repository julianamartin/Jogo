#pragma once
#include "pch.h"
#include "Atributo.h"

class Tempo : public Atributo
{
private:

public:
	Tempo();
	~Tempo();
	void Atualiza(float deltaTime);
};

