#include "pch.h"
#include "Jogador.h"


Jogador::Jogador():
animação()
{
	porta = false;
	morre = false;

}

Jogador::~Jogador()
{
}
void Jogador::Atualiza1(float deltaTime)
{
	velocidade.x = 0.0f;

	if (Keyboard::isKeyPressed(Keyboard::Left))
		velocidade.x -= rapidez;
	if (Keyboard::isKeyPressed(Keyboard::Right))
		velocidade.x += rapidez;
	if (Keyboard::isKeyPressed(Keyboard::Up) && podePular)
	{
		podePular = false;
		velocidade.y = -sqrtf(2.0f * 9.79f * alturaPulo * 100.0f); //square root = 2.0f * gravidade * alturaPulo
	}
	velocidade.y += 9.79f * 100.0f * deltaTime;
	
	if (velocidade.x == 0.0f)
	{
		row = 0;
	}
	else
	{
		row = 1;
		if (velocidade.x > 0.0f)
			faceRight = true;
		else
			faceRight = false;
		
	}
	animação.Atualiza(row, deltaTime, faceRight);
	objP.setTextureRect(animação.uvRect);

	Mover(deltaTime);

	tempo - deltaTime; //atualiza barrinha do tempo
}
void Jogador::Atualiza2(float deltaTime)
{
	velocidade.x = 0.0f;

	if (Keyboard::isKeyPressed(Keyboard::Key::A))
		velocidade.x -= rapidez;
	if (Keyboard::isKeyPressed(Keyboard::Key::D))
		velocidade.x += rapidez;
	if (Keyboard::isKeyPressed(Keyboard::Key::W) && podePular)
	{
		podePular = false;
		velocidade.y = -sqrtf(2.0f * 9.79f * alturaPulo * 100.0f); //square root = 2.0f * gravidade * alturaPulo
	}
	velocidade.y += 9.79f * 100.0f * deltaTime;

	if (velocidade.x == 0.0f)
	{
		row = 0;
	}
	else
	{
		row = 1;
		if (velocidade.x > 0.0f)
			faceRight = true;
		else
			faceRight = false;

	}
	animação.Atualiza(row, deltaTime, faceRight);
	objP.setTextureRect(animação.uvRect);

	Mover(deltaTime);

	tempo - deltaTime; //atualiza barrinha do tempo
}
void Jogador::EmColisão(sf::Vector2f direção)
{
	if (direção.x < 0.0f)
	{
		velocidade.x = 0.0f; //Colisão Esquerda
	}
	else if (direção.x > 0.0f)
	{
		velocidade.x = 0.0f; //Colisão Direita
	}
	if (direção.y < 0.0f)
	{
		velocidade.y = 0.0f; //Colisão embaixo
		podePular = true;
	}
	else if (direção.y > 0.0f)
	{
		velocidade.y = 0.0f; //Colisão em cima
	}

}

void Jogador::Desenha(RenderWindow& window)
{
	window.draw(objP);
	tempo.Desenha(window);
	energia.Desenha(window);
	dinheiro.Desenha(window);
}

Colisor Jogador::getColisão()
{
	return(Colisor(objP));
}

void Jogador::Inicializa(Texture* texture, Vector2u imageCount, float switchTime, float rapidez, float alturaPulo)
{
	animação.Inicializa(texture, imageCount, switchTime);
	this->rapidez = rapidez;
	this->alturaPulo = alturaPulo;
	row = 0;
	faceRight = true;
	objP.setTexture(texture);
	objP.setSize(Vector2f(50.0f, 80.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
}

void Jogador::Mover(float deltaTime)
{
	objP.move(velocidade * deltaTime);
}

void Jogador::setPosicao1()
{

	objP.setPosition(40.0f, 950.0f);
}

void Jogador::setPosicao2()
{
	
	objP.setPosition(40.0f, 200.0f);
}

void Jogador::afetaJog(float t, float e, float d)
{
	if (tempo.getValor() >= 0.0f)
		tempo-t;
	if (energia.getValor() >= 0.0f)
		energia-e;
	if (dinheiro.getValor() >= 0.0f)
		dinheiro-d;
}

bool Jogador::esgotou()
{
	if (tempo.getValor() <= 0.0f || dinheiro.getValor() <= 0.0f || energia.getValor() <= 0.0f)
		return true;
	else
		return false;
}
