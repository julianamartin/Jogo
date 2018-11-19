#pragma once
#include"Animacao.h"
#include "Personagem.h"
#include "Colisor.h"
#include "Tempo.h"
#include "Energia.h"
#include "Dinheiro.h"

class Jogador : public Personagem
{
private:
	Animacao anima��o;

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
	void EmColis�o(Vector2f dire��o);
	//Vector2f getPosition();
	Colisor getColis�o();
	void Inicializa(Texture* texture, Vector2u imageCount, float switchTime, float rapidez, float alturaPulo);
	void Mover(float deltaTime);
	void setPosicao1(); //fase 1
	void setPosicao2(); //fase 2
	void afetaJog(float tempo, float energia, float dinheiro);
	void chegouPorta() { porta = true; }

	void setTempo(float t) { static_cast<Atributo>(tempo) = t; }
	void setEnergia(float e) { static_cast<Atributo>(energia) = e; }
	void setDinheiro(float d) { static_cast<Atributo>(dinheiro) = d; }

	Tempo* aTempo() { return &tempo; }
	Energia* aEnergia() { return &energia; }
	Dinheiro* aDinheiro() { return &dinheiro; }

	float getTempo() const { return tempo.getValor(); }
	float getEnergia() const { return energia.getValor(); }
	float getDinheiro() const { return dinheiro.getValor(); } //posso colocar retorno const??

	bool esgotou();

};