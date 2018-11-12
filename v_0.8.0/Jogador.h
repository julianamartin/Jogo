#pragma once
#include "pch.h"
#include"Animacao.h"
#include "Personagem.h"
#include "Colisor.h"

class Jogador : public Personagem
{
private:
	RectangleShape objP;
	Animacao anima��o;
	unsigned int row;
	float rapidez;
	bool faceRight;
	float alturaPulo;
	bool podePular;

public:
	Jogador();
	~Jogador();
	void Atualiza1(float deltaTime); // do personagem 1
	void Atualiza2(float deltaTime); // do personagem 2
	void Desenha(RenderWindow& window);
	void EmColis�o(Vector2f dire��o);
	Vector2f getPosition();
	Colisor getColis�o();
	void Inicializa(Texture* texture, Vector2u imageCount, float switchTime, float rapidez, float alturaPulo);
	void Mover(float deltaTime);

};

