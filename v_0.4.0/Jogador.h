#pragma once
#include "pch.h"
#include"Animacao.h"
#include "Personagem.h"
#include "Colisor.h"

class Jogador : public Personagem
{
private:
	RectangleShape objP;
	Animacao animação;
	unsigned int row;
	float rapidez;
	bool faceRight;
	sf::Vector2f velocidade;
	float alturaPulo;
	bool podePular;

public:
	Jogador();
	~Jogador();
	void Atualiza(float deltaTime); // do personagem
	void Desenha(RenderWindow& window);
	void EmColisão(Vector2f direção);
	Vector2f getPosition();
	Colisor getColisão();
	void Inicializa(Texture* texture, Vector2u imageCount, float switchTime, float rapidez, float alturaPulo);
	void Mover(float deltaTime);

};

