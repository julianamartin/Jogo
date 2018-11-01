#pragma once
#include <SFML/Graphics.hpp>
#include"Animacao.h"
#include "Personagem.h"

class Jogador : public Personagem
{
private:
	sf::RectangleShape body;
	Animacao animação;
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

