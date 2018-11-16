#pragma once
#include "Lista.h"
#include "Atributo.h"

class ListaAtributos
{
private:
	Lista <Atributo> objLAtr;
public:
	ListaAtributos();
	~ListaAtributos();
	void Desenha();
	void Colidiu();

};

