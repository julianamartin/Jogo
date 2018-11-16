#include "Tempo.h"


Tempo::Tempo()
{
	tamanho = Vector2f(300.0f, 20.0f);
	nome.setString("Tempo");
	nome.setFillColor(Color::White);
	nome.setFont(fonte);
	nome.setCharacterSize(36);
	nome.setPosition(20.0f, 20.0f);
	barra1.setSize(tamanho);
	barra1.setFillColor(Color::Green);
	barra1.setOrigin(barra1.getSize() / 2.0f);
	barra1.setPosition(250.0f, 35.0f);
	barra2.setSize(tamanho);
	barra2.setFillColor(Color(150, 150, 150));
	barra2.setPosition(250.0f, 35.0f);

}
Tempo::~Tempo()
{

}
void Tempo::Atualiza(float deltaTime)
{
	tamanho.x -= deltaTime * 1000.0f;
	barra1.setSize(tamanho);
}