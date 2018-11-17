#include "Atributo.h"

Atributo::Atributo()
{
	fonte.loadFromFile("arial.ttf");
}

Atributo::~Atributo()
{

}

void Atributo::Desenha(RenderWindow& window)
{
	window.draw(barra2);
	window.draw(barra1);
	window.draw(nome);
}

void Atributo::DiminuiValor(float v)
{
	valor -= v;
}
