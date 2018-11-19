#include "pch.h"
#include "Atributo.h"

Atributo::Atributo()
{
	fonte.loadFromFile("arial.ttf");
	tamanho = Vector2f(0.0f, 0.0f);
	valor = 10.0f;
	nome.setString("");
	barra1.setSize(tamanho);
	barra1.setFillColor(Color::Green); 
}

Atributo::~Atributo()
{

}

void Atributo::Desenha(RenderWindow& window)
{
	//window.draw(barra2);
	window.draw(barra1);
	window.draw(nome);
}

void Atributo::operator-(float v)
{
	if (valor >= 0.0f)
	{
		valor -= v;
		tamanho.x -= (200.0f*v) / 60.0f; // 200.0f = tamanho original, 60.0f = valor original
		barra1.setSize(tamanho);
	}
}
