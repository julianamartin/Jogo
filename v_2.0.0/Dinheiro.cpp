#include "pch.h"
#include "Dinheiro.h"


Dinheiro::Dinheiro()
{
	tamanho = Vector2f(200.0f, 15.0f);
	valor = 60.0f;

	nome.setFillColor(Color::White);
	nome.setFont(fonte);
	nome.setCharacterSize(24);
	barra1.setSize(tamanho);
	barra1.setFillColor(Color::Green);
	barra1.setOrigin(barra1.getSize() / 2.0f);
}

Dinheiro::~Dinheiro()
{

}

void Dinheiro::Atualiza()
{

}
void Dinheiro::Inicializa1()
{
	nome.setString("Dinheiro 1");
	nome.setPosition(400.0f, 20.0f);

	barra1.setPosition(630.0f, 36.0f);
}
void Dinheiro::Inicializa2()
{
	nome.setString("Dinheiro 2");
	nome.setPosition(400.0f, 50.0f);

	barra1.setPosition(630.0f, 66.0f);
}
