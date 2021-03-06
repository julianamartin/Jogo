#pragma once
#include "pch.h"

class Atributo 
{
protected:
	float valor;
	RectangleShape barra1;
	RectangleShape barra2;
	Text nome;
	Font fonte;
	Vector2f tamanho;

public:
	Atributo();
	~Atributo();
	void Desenha(RenderWindow& window);
	void DiminuiValor(float v);
	virtual void Atualiza() { }
};
