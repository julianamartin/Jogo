#include "pch.h"
#include "Conta.h"


Conta::Conta()
{
	quantidade++;
	velocidade.x = 95.0f;
}


Conta::~Conta()
{
}

void Conta::Inicializa()
{
	texturaC.loadFromFile("cerveja.png");
	objP.setTexture(&texturaC);
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);

}

void Conta::setPosicao1()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(500.0f, 105.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(100.0f, 105.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(150.0f, 105.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(200.0f, 105.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(250.0f, 105.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(300.0f, 105.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(350.0f, 105.0f);
						}

					}

				}

			}

		} 
		
	}

	objP.setPosition(posicao);
}

void Conta::setPosicao2()
{
	Vector2f posicao;

	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(50.0f, 940.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(100.0f, 940.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(150.0f, 940.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(200.0f, 940.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(250.0f, 940.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(300.0f, 940.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(350.0f, 940.0f);
						}

					}

				}

			}

		}

	}
	objP.setPosition(posicao);
}

void Conta::Mover(float deltaTime)
{

}

int Conta::quantidade = 0;

