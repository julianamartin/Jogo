#include "pch.h"
#include "Menu.h"


void Menu::Inicializa(float largura, float altura)
{
	if (!font.loadFromFile("arial.ttf"))
	{
		printf("Erro: arial.tff nao foi encontrada na pasta do jogo\n");
	}

	menu[0].setFont(font);
	menu[0].setFillColor(Color::Red);
	menu[0].setString("Jogar multiplayer");
	menu[0].setPosition(Vector2f(largura / 2, altura / (N_elementos + 1) * 0.5f));
	menu[0].setCharacterSize(20);

	FloatRect menu1Rect = menu[1].getLocalBounds();
	menu[1].setFont(font);
	menu[1].setFillColor(Color::White);
	menu[1].setString("Fase 1-Subindo a rampa do E");
	menu[1].setOrigin(Vector2f((menu1Rect.width + menu1Rect.left) / 2.0f, (menu1Rect.height + menu1Rect.top) / 2.0f));
	menu[1].setPosition(Vector2f(largura / 2.0f, altura / (N_elementos + 1) * 1.0f));
	menu[1].setCharacterSize(20);

	menu[2].setFont(font);
	menu[2].setFillColor(Color::White);
	menu[2].setString("Fase 2-Em busca do bloco N");
	menu[2].setPosition(Vector2f(largura / 2.0f, altura / (N_elementos + 1) * 2));
	menu[2].setCharacterSize(20);

	menu[3].setFont(font);
	menu[3].setFillColor(Color::White);
	menu[3].setString("Sair");
	menu[3].setPosition(Vector2f(largura / 2, altura / (N_elementos + 1) * 3));
	menu[3].setCharacterSize(20);

	pausar.setString("Para pausar aperte ESC");
	pausar.setFont(font);
	pausar.setFillColor(sf::Color::Black);
	pausar.setPosition(sf::Vector2f(largura / 2, altura / (N_elementos + 1) * 4.5));
	pausar.setCharacterSize(14);

	continuar.setString("Para continuar aperte F5");
	continuar.setFont(font);
	continuar.setFillColor(sf::Color::Black);
	continuar.setPosition(sf::Vector2f(largura / 2, altura / (N_elementos + 1) * 5));
	continuar.setCharacterSize(14);

	salvar.setString("Para salvar aperte F4");
	salvar.setFont(font);
	salvar.setFillColor(sf::Color::Black);
	salvar.setPosition(sf::Vector2f(largura / 2, altura / (N_elementos + 1) * 5.5));
	salvar.setCharacterSize(14);

	recuperar.setString("Para recuperar aperte F3");
	recuperar.setFont(font);
	recuperar.setFillColor(sf::Color::Black);
	recuperar.setPosition(sf::Vector2f(largura / 2, altura / (N_elementos + 1) * 6));
	recuperar.setCharacterSize(14);

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
	window.draw(salvar);
	window.draw(recuperar);
}

void Menu::MoveUp()
{
	if (selectedItemIndex > 0)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < 4)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}