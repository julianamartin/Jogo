#include "pch.h"
#include "Menu.h"


void Menu::Inicializa(float largura, float altura)
{
	/*//menu[0].setFillColor(Color::Red);
	menu[0].setString("Jogar");
	menu[0].setPosition(Vector2f(largura/2, altura/(N_elementos + 1)*1 ));

	//menu[1].setColor(Color::Red);
	menu[1].setString("Jogar multiplayer");
	menu[1].setPosition(Vector2f(largura / 2, altura /(N_elementos + 1) * 2));

	//menu[2].setFillColor(Color::Red);
	menu[2].setString("Play 2");
	menu[2].setPosition(Vector2f(largura / 2, altura /(N_elementos + 1) * 4));*/

	if (!font.loadFromFile("arial.ttf"))
	{
		printf("Erro: arial.tff nao foi encontrada na pasta do jogo\n");
	}

	menu[0].setFont(font);
	menu[0].setFillColor(sf::Color::Red);
	menu[0].setString("Fase1");
	menu[0].setPosition(sf::Vector2f(largura / 2, altura / (N_elementos + 1) * 1));
	menu[0].setCharacterSize(20);

	menu[1].setFont(font);
	menu[1].setFillColor(sf::Color::White);
	menu[1].setString("Fase 2");
	menu[1].setPosition(sf::Vector2f(largura / 2, altura / (N_elementos + 1) * 2));
	menu[1].setCharacterSize(20);

	menu[2].setFont(font);
	menu[2].setFillColor(sf::Color::White);
	menu[2].setString("Sair");
	menu[2].setPosition(sf::Vector2f(largura / 2, altura / (N_elementos + 1) * 3));
	menu[2].setCharacterSize(20);

	/*pausar.setString("Para pausar aperte ESC");
	pausar.setFont(font);
	pausar.setFillColor(sf::Color::Yellow);
	pausar.setPosition(sf::Vector2f(largura / 2, altura / (N_elementos + 1) * 4));
	pausar.setCharacterSize(14);

	continuar.setString("Para continuar aperte F5");
	continuar.setFont(font);
	continuar.setFillColor(sf::Color::Yellow);
	continuar.setPosition(sf::Vector2f(largura / 2, altura / (N_elementos + 1) * 5));
	continuar.setCharacterSize(14);*/

	selectedItemIndex = 0;
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
	window.draw(pausar);
	window.draw(continuar);
}
void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < 3)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}