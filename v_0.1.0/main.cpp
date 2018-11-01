#include "pch.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
#include <time.h>
#include "Jogador.h"

//static const float VIEW_HEIGHT = 512.0f;

//void ResizeView(const sf::RenderWindow& window, sf::View& view);

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Inimigos da DP", sf::Style::Close | sf::Style::Resize);
	//sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));

	sf::Texture playerTexture;
	playerTexture.loadFromFile("kit_from_firefox.png");

	Jogador player (&playerTexture, sf::Vector2u(3, 9), 0.3f, 100.0f);

	float deltaTime = 0.0f;
	sf::Clock clock;

	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds();

		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case sf::Event::Closed :
				window.close();
				break;

			case sf::Event::Resized :
				printf("Altura: %i\n Largura: %i\n", evnt.size.height, evnt.size.width);
				//ResizeView(window, view);
				break;

			case sf::Event::TextEntered :
				if (evnt.text.unicode < 128)
					printf("%c", evnt.text.unicode);
			}
		}

		player.Atualiza(deltaTime);
		//view.setCenter(player.getPosition());

		window.clear(sf::Color (150, 150, 150));
		player.Desenha(window);
		//window.setView(view);
		window.display();

	}

	return 0;
}

/*void ResizeView(const sf::RenderWindow& window, sf::View& view)
{
	float proporção = (float) window.getSize().x / (float)window.getSize().y;
	view.setSize(VIEW_HEIGHT * proporção, VIEW_HEIGHT);
}*/
