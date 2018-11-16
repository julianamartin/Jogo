#pragma once
#include "pch.h"
#include"Animacao.h"
#include "Personagem.h"
#include "Colisor.h"
#include "Tempo.h"
#include "Energia.h"
#include "Dinheiro.h"

class Jogador : public Personagem
{
private:
	RectangleShape objP;
	Animacao animação;
	unsigned int row;
	float rapidez;
	bool faceRight;
	float alturaPulo;
	bool podePular;
	Tempo tempo;
	Energia energia;
	Dinheiro dinheiro;


public:
	Jogador();
	~Jogador();
	void Atualiza1(float deltaTime); // do personagem 1
	void Atualiza2(float deltaTime); // do personagem 2
	void Desenha(RenderWindow& window);
	void EmColisão(Vector2f direção);
	Vector2f getPosition();
	Colisor getColisão();
	void Inicializa(Texture* texture, Vector2u imageCount, float switchTime, float rapidez, float alturaPulo);
	void Mover(float deltaTime);
	void setPosicao1();
	void setPosicao2();
	void afetaJog(float tempo, float energia, float dinheiro);
	void morreu() { morre = true; }
	void chegouPorta() { porta = true; }
	Tempo aTempo() { return tempo; }
	Energia aEnergia() { return energia; }
	Dinheiro aDinheiro() { return dinheiro; }

};