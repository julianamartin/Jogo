#pragma once
#include "pch.h"
#include "Fase.h"
#include "Plataforma.h"
#include <time.h>

class Fase1 : public Fase
{
private:

public:
	Fase1();
	~Fase1();
	void DesenhaElem();
	void Executar();
};

