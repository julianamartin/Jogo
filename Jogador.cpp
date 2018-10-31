#include "pch.h"
#include "Jogador.h"


Jogador::Jogador(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float velocidade):
animação(texture,imageCount,switchTime)
{
	this->velocidade = velocidade;
	row = 0;
	faceRight = true;

	body.setSize(sf::Vector2f(100.0f, 150.0f));
	body.setOrigin(body.getSize() / 2.0f);
	body.setPosition(206.0f, 206.0f);
	body.setTexture(texture);
}

Jogador::~Jogador()
{
}
void Jogador::Atualiza(float deltaTime)
{
	sf::Vector2f movimento(0.0f, 0.0f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		movimento.x -= velocidade * deltaTime;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		movimento.x += velocidade * deltaTime;
	
	if (movimento.x == 0.0f)
	{
		row = 0;
	}
	else
	{
		row = 1;
		if (movimento.x > 0.0f)
			faceRight = true;
		else
			faceRight = false;
		
	}
	animação.Atualiza(row, deltaTime, faceRight);
	body.setTextureRect(animação.uvRect);
	body.move(movimento);
}

void Jogador::Desenha(sf::RenderWindow& window)
{
	window.draw(body);
}

sf::Vector2f Jogador::getPosition()
{
	return (body.getPosition());
}

