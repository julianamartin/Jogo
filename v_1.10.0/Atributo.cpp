#include "pch.h"
#include "Atributo.h"

Atributo::Atributo()
{
	fonte.loadFromFile("arial.ttf");
	tamanho = Vector2f(0.0f, 0.0f);
	valor = 10.0f;
	nome.setString("");
	nome.setFillColor(Color::White);
	nome.setFont(fonte);
	nome.setCharacterSize(36);
	//nome.setPosition(20.0f, 20.0f);
	barra1.setSize(tamanho);
	barra1.setFillColor(Color::Green);
	//barra1.setOrigin(barra1.getSize() / 2.0f);
	//barra1.setPosition(250.0f, 35.0f);
	/*barra2.setSize(tamanho);
	barra2.setFillColor(Color(150, 150, 150)); */
	//barra2.setPosition(250.0f, 35.0f);
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
	valor -= v;
}
