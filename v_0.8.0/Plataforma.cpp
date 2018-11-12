#include "pch.h"
#include "Plataforma.h"

Plataforma::Plataforma(sf::Texture* texture, sf::Vector2f size, sf::Vector2f posição)
{
	plataforma.setSize(size);
	plataforma.setOrigin(size / 2.0f);
	plataforma.setTexture(texture);
	plataforma.setPosition(posição);
}
Plataforma::~Plataforma()
{
}
Colisor Plataforma::getColisão()
{
	return (Colisor(plataforma));
}
void Plataforma::Desenha(sf::RenderWindow& window)
{
	window.draw(plataforma);
}


/*Plataforma::Plataforma()
{
	//ctor
}

Plataforma::~Plataforma()
{
	vPlat.clear(); //dtor
}

RectangleShape Plataforma::getTijolo(int i)
{
	return vPlat[i];
}

vector<RectangleShape> Plataforma::getPlat()
{
	return vPlat;
}

int Plataforma::getTam()
{
	return vPlat.size();
}

void Plataforma::Desenha(RenderWindow& window)
{
	vector<RectangleShape>::iterator i;

	for (i = vPlat.begin(); i >= vPlat.end(); i++)
	{
		window.draw(*i);
	}
}

void Plataforma::Inicializa1()
{
	//4 plataformas
	RectangleShape base(Vector2f(1920.0f, 105.0f));
	base.setPosition(960.0f, 1027.5f);
	base.setFillColor(Color(0, 0, 0));
	getPlat().push_back(base);

	RectangleShape p1(Vector2f(560.0f, 105.0f));
	p1.setPosition(1640.0f, 522.5f);
	//p1.setFillColor();
	getPlat().push_back(p1);

	RectangleShape p2(Vector2f(400.0f, 105.0f));
	p2.setPosition(200.0f, 802.5f);
	getPlat().push_back(p2);

	RectangleShape p3(Vector2f(520.0f, 80.0f));
	p3.setPosition(260.0f, 330.0f);
	getPlat().push_back(p3);

	RectangleShape p4(Vector2f(780.0f, 90.0f));
	p4.setPosition(1142.0f, 200.0f);
	getPlat().push_back(p4);

	//3 escadas

	int i;
	Vector2f tamanho(100.0f, 100.0f);
	Vector2f posicao(1110.0f, 805.0f);
	RectangleShape* tijolo = NULL;

	for (i = 0; i < 3; i++)
	{
		tijolo = new (RectangleShape);
		tijolo->setSize(tamanho);
		tijolo->setPosition(posicao);
		getPlat().push_back(*tijolo);

		posicao.x += tamanho.x;
		posicao.y += tamanho.y - 20.0f;

		tijolo = NULL;
	}

	posicao.x = 550.0f;
	posicao.y = 690.0f;

	for (i = 0; i < 4; i++)
	{
		tijolo = new (RectangleShape);
		tijolo->setSize(tamanho);
		tijolo->setPosition(posicao);
		getPlat().push_back(*tijolo);


		posicao.x += tamanho.x;
		posicao.y += tamanho.y - 40.0f;

		tijolo = NULL;

	}

	posicao.x = 750.0f;
	posicao.y = 250.0f;

	for (i = 0; i < 3; i++)
	{
		tijolo = new (RectangleShape);
		tijolo->setSize(tamanho);
		tijolo->setPosition(posicao);
		getPlat().push_back(*tijolo);


		posicao.x += tamanho.x;
		posicao.y += tamanho.y - 10.0f;

		tijolo = NULL;
	}
}

void Plataforma::Inicializa2()
{
	RectangleShape base(Vector2f(1920.0f, 1080.0f));
	base.setPosition(960.0f, 1027.5f);
	getPlat().push_back(base);

	//de cima para baixo
	RectangleShape p1(Vector2f(510.0f, 100.0f));
	p1.setPosition(255.0f, 200.0f);
	//p1.setFillColor();
	getPlat().push_back(p1);

	RectangleShape p2(Vector2f(280.0f, 100.0f));
	p2.setPosition(755.0f, 455.0f);
	getPlat().push_back(p2);

	RectangleShape p3(Vector2f(470.0f, 80.0f));
	p3.setPosition(235.0f, 625.0f);
	getPlat().push_back(p3);

	RectangleShape p4(Vector2f(380.0f, 60.0f));
	p4.setPosition(735.0f, 775.0f);
	getPlat().push_back(p4);

	//de baixo para cima

	int i;
	RectangleShape* tijolo = NULL;
	Vector2f tamanho(100.0f, 100.0f);
	Vector2f posicao(1415.0f, 770.0f);

	for (i = 0; i < 3; i++)
	{
		tijolo = new (RectangleShape);
		tijolo->setSize(tamanho);
		tijolo->setPosition(posicao);
		getPlat().push_back(*tijolo);

		posicao.x += tamanho.x;
		posicao.y -= (tamanho.y - 30.0f);

		tijolo = NULL;


	}

	RectangleShape p5(Vector2f(235.0f, 90.0f));
	p5.setPosition(1802.5f, 505.0f);
	getPlat().push_back(p5);

	RectangleShape p6(Vector2f(260.0f, 100.0f));
	p6.setPosition(1450.0f, 415.0f);
	getPlat().push_back(p6);

	RectangleShape p7(Vector2f(490.0f, 70.0f));
	p7.setPosition(1675.0f, 250.0f);
	getPlat().push_back(p7);

	RectangleShape p8(Vector2f(150.0f, 50.0f));
	p8.setPosition(1220.0f, 200.0f);
	getPlat().push_back(p8);
}*/