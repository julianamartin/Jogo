#include "Tempo.h"


Tempo::Tempo()
{
	nome.setString("Tempo");
	nome.setFillColor(Color::White);
	nome.setFont(fonte);
	nome.setCharacterSize(36);
	nome.setPosition(20.0f, 1000.0f);
	barra1.setSize(Vector2f(90.0f, 30.0f));
	barra1.setFillColor(Color::Green);
	barra1.setPosition(200.0f, 1000.0f);
	barra2.setSize(Vector2f(90.0f, 30.0f));
	barra2.setFillColor(Color(150, 150, 150));
	barra2.setPosition(200.0f, 1000.0f);

}
Tempo::~Tempo()
{

}
void Tempo::Atualiza(float deltaTime)
{
	
}