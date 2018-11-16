#pragma once
#include "Atributo.h"

class Tempo : public Atributo
{
private:

public:
	Tempo();
	~Tempo();
	void Atualiza(float deltaTime);
};