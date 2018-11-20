#include "pch.h"
#include "Menu.h"


void Menu::Inicializa(float largura, float altura)
{
	if (!font.loadFromFile("arial.ttf"))
	{
		printf("Erro: arial.tff nao foi encontrada na pasta do jogo\n");
	}

	menu[0].setFont(font);
	menu[0].setFillColor(Color::Yellow);
	menu[0].setString("Jogar multiplayer");
	menu[0].setPosition(Vector2f(largura / 2.0f, altura / (float)(N_elementos + 1) * 0.5f));
	menu[0].setCharacterSize(30);

	FloatRect menu1Rect = menu[1].getLocalBounds();
	menu[1].setFont(font);
	menu[1].setFillColor(Color::White);
	menu[1].setString("Fase 1 - Subindo a rampa do E");
	menu[1].setOrigin(Vector2f((menu1Rect.width + menu1Rect.left) / 2.0f, (menu1Rect.height + menu1Rect.top) / 2.0f));
	menu[1].setPosition(Vector2f(largura / 2.0f, altura / (float)(N_elementos + 1) * 1.5f));
	menu[1].setCharacterSize(30);

	menu[2].setFont(font);
	menu[2].setFillColor(Color::White);
	menu[2].setString("Fase 2 - Em busca do bloco N");
	menu[2].setPosition(Vector2f(largura / 2.0f, altura / (float)(N_elementos + 1) * 2.5f));
	menu[2].setCharacterSize(30);

	menu[3].setFont(font);
	menu[3].setFillColor(Color::White);
	menu[3].setString("Sair");
	menu[3].setPosition(Vector2f(largura / 2.0f, altura / (float)(N_elementos + 1) * 3.5f));
	menu[3].setCharacterSize(30);

	pausar.setString("Para pausar aperte ESC");
	pausar.setFont(font);
	pausar.setFillColor(Color::Black);
	pausar.setPosition(Vector2f(largura / 2.0f, altura / (float)(N_elementos + 1) * 4.5));
	pausar.setCharacterSize(24);

	continuar.setString("Para continuar aperte F5");
	continuar.setFont(font);
	continuar.setFillColor(Color::Black);
	continuar.setPosition(Vector2f(largura / 2.0f, altura / (float)(N_elementos + 1) * 5));
	continuar.setCharacterSize(24);

	salvar.setString("Para salvar aperte ESC + F4");
	salvar.setFont(font);
	salvar.setFillColor(Color::Black);
	salvar.setPosition(Vector2f(largura / 2.0f, altura / (float)(N_elementos + 1) * 5.5));
	salvar.setCharacterSize(24);

	recuperar.setString("Para recuperar aperte F3");
	recuperar.setFont(font);
	recuperar.setFillColor(sf::Color::Black);
	recuperar.setPosition(sf::Vector2f(largura / 2.0f, altura / (float)(N_elementos + 1) * 6));
	recuperar.setCharacterSize(24);

	texturaImg.loadFromFile("inimigosdadp.png");

	imagem.setSize(Vector2f(480.0f, 270.0f));
	imagem.setPosition(350.0f, 350.0f);
	imagem.setTexture(&texturaImg);

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
	window.draw(imagem);
}

void Menu::MoveUp()
{
	if (selectedItemIndex > 0)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(sf::Color::Yellow);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < 4)
	{
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(sf::Color::Yellow);
	}
}