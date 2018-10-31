#pragma once
#include <SFML/Graphics.hpp>
#include"Animacao.h"
class Jogador
{
private:
	sf::RectangleShape body;
	Animacao anima��o;
	unsigned int row;
	float velocidade;
	bool faceRight;

public:
	Jogador(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float velocidade);
	~Jogador();
	void Atualiza(float deltaTime);
	void Desenha(sf::RenderWindow& window);
	sf::Vector2f getPosition();

};

