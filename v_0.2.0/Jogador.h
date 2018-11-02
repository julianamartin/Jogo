#pragma once
#include "pch.h"
#include"Animacao.h"
#include "Personagem.h"
#include "Colisor.h"

class Jogador : public Personagem
{
private:
	sf::RectangleShape objP;
	Animacao anima��o;
	unsigned int row;
	float rapidez;
	bool faceRight;
	sf::Vector2f velocidade;
	float alturaPulo;
	bool podePular;

public:
	Jogador(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float rapidez, float alturaPulo);
	~Jogador();
	void Atualiza(float deltaTime);
	void Desenha(sf::RenderWindow& window);
	void EmColis�o(sf::Vector2f dire��o);
	sf::Vector2f getPosition();
	Colisor getColis�o();

};

