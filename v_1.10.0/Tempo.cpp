#include "pch.h"
#include "Tempo.h"


Tempo::Tempo() :
Atributo()
{

}
Tempo::~Tempo()
{
}

void Tempo::Atualiza()
{

}

void Tempo::Inicializa1()
{
	tamanho = Vector2f(250.0f, 15.0f);
	valor = 10.0f;
	nome.setString("Tempo1");
	nome.setFillColor(Color::White);
	nome.setFont(fonte);
	nome.setCharacterSize(24);
	nome.setPosition(20.0f, 20.0f);
	barra1.setSize(tamanho);
	barra1.setFillColor(Color::Green);
	barra1.setOrigin(barra1.getSize() / 2.0f);
	barra1.setPosition(260.0f, 36.0f);
	/* barra2.setSize(tamanho);
	barra2.setFillColor(Color(150, 150, 150));
	barra2.setPosition(2f, 35.0f); */
}

void Tempo::Inicializa2()
{

}
