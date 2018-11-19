#include "pch.h"
#include "Tempo.h"


Tempo::Tempo() :
Atributo()
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
Tempo::~Tempo()
{
}

/* void Tempo::Atualiza(float deltaTime)
{
	float x = deltaTime * 250.0f / 60.0f; //o que vai diminuir da barra1
	tamanho.x -= x;
	barra1.setSize(tamanho);
} */

void Tempo::Inicializa1()
{

	nome.setString("Tempo 1");
	
	nome.setPosition(20.0f, 20.0f);
	
	barra1.setPosition(260.0f, 36.0f);
}

void Tempo::Inicializa2()
{
	nome.setString("Tempo 2");

	nome.setPosition(20.0f, 50.0f);

	barra1.setPosition(260.0f, 66.0f);
}
