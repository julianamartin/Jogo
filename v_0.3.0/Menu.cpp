#include "pch.h"
#include "Menu.h"


void Menu::Inicializa(float largura, float altura)
{
	//menu[0].setFillColor(Color::Red);
	menu[0].setString("Jogar");
	menu[0].setPosition(Vector2f(largura/2, altura/(N_elementos + 1)*1 ));

	//menu[1].setColor(Color::Red);
	menu[1].setString("Jogar multiplayer");
	menu[1].setPosition(Vector2f(largura / 2, altura /(N_elementos + 1) * 2));

	//menu[2].setFillColor(Color::Red);
	menu[2].setString("Play 2");
	menu[2].setPosition(Vector2f(largura / 2, altura /(N_elementos + 1) * 4));
}


Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::Desenha(RenderWindow& window)
{
	for (int i = 0; i < N_elementos; i++)
	{
		window.draw(menu[i]);
	}
}
